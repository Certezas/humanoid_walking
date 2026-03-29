import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
import matplotlib.patches as mpatches
from matplotlib.gridspec import GridSpec


ARQUIVO_DADOS = 'resultados_caminhada.txt'

LARGURA_PE = 0.02      
COMPRIMENTO_PE = 0.04  
LARGURA_PASSO_BASE = 0.03 

plt.rcParams.update({
    'font.size': 12, 
    'font.family': 'serif',
    'axes.grid': True,
    'grid.alpha': 0.5,
    'lines.linewidth': 2
})

def plot_pe(ax, x_rob, y_rob, yaw_rad=0.0):
    cx = y_rob
    cy = x_rob

    W = LARGURA_PE
    H = COMPRIMENTO_PE

    cantos = np.array([
        [-W/2, -H/2],
        [ W/2, -H/2],
        [ W/2,  H/2],
        [-W/2,  H/2]
    ])

    theta = -yaw_rad
    R = np.array([
        [np.cos(theta), -np.sin(theta)],
        [np.sin(theta),  np.cos(theta)]
    ])

    cantos_rotacionados = np.dot(cantos, R.T) + np.array([cx, cy])

    poly = mpatches.Polygon(
        cantos_rotacionados, 
        closed=True, 
        linewidth=1, 
        edgecolor='black', 
        facecolor='gainsboro', 
        alpha=0.6, 
        zorder=1
    )
    ax.add_patch(poly)

def extrair_pegadas_reais(df, prefixo):
    x_col = f'foot_{prefixo}_x'
    y_col = f'foot_{prefixo}_y'
    yaw_col = f'foot_{prefixo}_yaw' 

    df_foot = df[[x_col, y_col, yaw_col]].round(3).copy()

    df_foot['mudou'] = (df_foot[x_col] != df_foot[x_col].shift()) | \
                       (df_foot[y_col] != df_foot[y_col].shift()) | \
                       (df_foot[yaw_col] != df_foot[yaw_col].shift())
    
    df_foot['id_passo'] = df_foot['mudou'].cumsum()

    contagem = df_foot.groupby('id_passo', as_index=False).agg(
        x=(x_col, 'first'),
        y=(y_col, 'first'),
        yaw=(yaw_col, 'first'),
        iteracoes=(x_col, 'count')
    )

    pegadas = contagem[contagem['iteracoes'] > 10]
    pegadas = pegadas[(pegadas['x'] != 0.0) | (pegadas['y'] != 0.0)]

    return pegadas[['x', 'y', 'yaw']].values

try:
    df = pd.read_csv(ARQUIVO_DADOS)
    df.columns = df.columns.str.strip()

    print("Iniciando a plotagem com matriz de polígonos imune a distorções...")

    tempo_s = df['k'] / 125.0

    pegadas_r = extrair_pegadas_reais(df, 'r')
    pegadas_l = extrair_pegadas_reais(df, 'l')

    legenda_pes = mpatches.Patch(facecolor='gainsboro', edgecolor='black', alpha=0.6, label='Pegadas')

    # =========================================================
    # IMAGEM 1 - APENAS ZMP DE REFERÊNCIA NO TEMPO
    # =========================================================
    fig, (ax1, ax2) = plt.subplots(2, 1, figsize=(10, 8))
    ax1.plot(tempo_s, df['zmp_ref_x'], color='#ff7f0e', linestyle='--', label='ZMP Referência')
    ax1.set_ylabel('Posição Sagital X (m)')
    ax1.set_title('Trajetória do ZMP de Referência - Domínio do Tempo')
    ax1.legend(loc='upper right')

    ax2.plot(tempo_s, df['zmp_ref_y'], color='#ff7f0e', linestyle='--', label='ZMP Referência')
    ax2.set_xlabel('Tempo (s)')
    ax2.set_ylabel('Posição Lateral Y (m)')
    ax2.legend(loc='upper right')

    plt.tight_layout()
    plt.savefig('tcc_441_fig1_zmp_ref_tempo.png', dpi=300)
    plt.close()

    # =========================================================
    # IMAGEM 2 - ZMP REF vs ZMP REAL NO TEMPO
    # =========================================================
    fig, (ax1, ax2) = plt.subplots(2, 1, figsize=(10, 8))
    ax1.plot(tempo_s, df['zmp_real_x'], 'b-', alpha=0.8, zorder=2, label='ZMP Calculado')
    ax1.plot(tempo_s, df['zmp_ref_x'], color='#ff7f0e', linestyle='--', zorder=3, label='ZMP Referência')
    ax1.set_ylabel('Posição Sagital X (m)')
    ax1.set_title('Rastreamento do ZMP - Domínio do Tempo')
    ax1.legend(loc='upper right')

    ax2.plot(tempo_s, df['zmp_real_y'], 'b-', alpha=0.8, zorder=2, label='ZMP Calculado')
    ax2.plot(tempo_s, df['zmp_ref_y'], color='#ff7f0e', linestyle='--', zorder=3, label='ZMP Referência')
    ax2.set_xlabel('Tempo (s)')
    ax2.set_ylabel('Posição Lateral Y (m)')
    ax2.legend(loc='upper right')

    plt.tight_layout()
    plt.savefig('tcc_441_fig2_zmp_real_tempo.png', dpi=300)
    plt.close()

    # =========================================================
    # IMAGEM 3 - VISTA SUPERIOR CORRIGIDA + CoM
    # =========================================================
    fig, ax = plt.subplots(figsize=(8, 10))
    
    linha_calc, = ax.plot(df['zmp_real_y'], df['zmp_real_x'], 'b-', alpha=0.7, linewidth=2, zorder=2, label='ZMP Calculado')
    linha_ref, = ax.plot(df['zmp_ref_y'], df['zmp_ref_x'], color='#ff7f0e', linestyle='--', linewidth=2, zorder=3, label='ZMP Referência')
    linha_com, = ax.plot(df['com_y'], df['com_x'], color='#00ff07', linewidth=1.5, zorder=4, label='Trajetória CoM')

    # Pose inicial (Yaw = 0 cravado)
    plot_pe(ax, 0.0, LARGURA_PASSO_BASE / 2.0, yaw_rad=0.0)
    plot_pe(ax, 0.0, -LARGURA_PASSO_BASE / 2.0, yaw_rad=0.0)

    for px, py, pyaw in pegadas_r:
        plot_pe(ax, px, py, yaw_rad=pyaw)
    for px, py, pyaw in pegadas_l:
        plot_pe(ax, px, py, yaw_rad=pyaw)

    ax.set_xlabel('Eixo Lateral Y (m)')
    ax.set_ylabel('Eixo Sagital X (m)')
    ax.set_title('Vista Superior: Rastreamento Espacial da Marcha')
    
    ax.legend(handles=[linha_ref, linha_calc, linha_com, legenda_pes], loc='upper left')
    ax.axis('equal') 
    
    plt.tight_layout()
    plt.savefig('tcc_441_fig3_vista_superior.png', dpi=300)
    plt.close()

    # =========================================================
    # IMAGEM MONTAGEM (TEMPO + ESPAÇO)
    # =========================================================
    fig = plt.figure(figsize=(14, 7))
    gs = GridSpec(2, 2, width_ratios=[1.5, 1])

    ax_tempo_x = fig.add_subplot(gs[0, 0])
    ax_tempo_x.plot(tempo_s, df['zmp_real_x'], 'b-', alpha=0.8, zorder=2, label='ZMP Calculado')
    ax_tempo_x.plot(tempo_s, df['zmp_ref_x'], color='#ff7f0e', linestyle='--', zorder=3, label='ZMP Referência')
    ax_tempo_x.set_ylabel('Posição X (m)')
    ax_tempo_x.set_title('Rastreamento no Tempo')
    ax_tempo_x.legend(loc='upper right')

    ax_tempo_y = fig.add_subplot(gs[1, 0])
    ax_tempo_y.plot(tempo_s, df['zmp_real_y'], 'b-', alpha=0.8, zorder=2, label='ZMP Calculado')
    ax_tempo_y.plot(tempo_s, df['zmp_ref_y'], color='#ff7f0e', linestyle='--', zorder=3, label='ZMP Referência')
    ax_tempo_y.set_xlabel('Tempo (s)')
    ax_tempo_y.set_ylabel('Posição Y (m)')
    ax_tempo_y.legend(loc='upper right')

    ax_espaco = fig.add_subplot(gs[:, 1])
    l_calc, = ax_espaco.plot(df['zmp_real_y'], df['zmp_real_x'], 'b-', alpha=0.7, zorder=2, label='ZMP Calculado')
    l_ref, = ax_espaco.plot(df['zmp_ref_y'], df['zmp_ref_x'], color='#ff7f0e', linestyle='--', zorder=3, label='ZMP Ref')
    l_com, = ax_espaco.plot(df['com_y'], df['com_x'], color='#00ff07', linewidth=1.5, zorder=4, label='CoM') 

    plot_pe(ax_espaco, 0.0, LARGURA_PASSO_BASE / 2.0, yaw_rad=0.0)
    plot_pe(ax_espaco, 0.0, -LARGURA_PASSO_BASE / 2.0, yaw_rad=0.0)

    for px, py, pyaw in pegadas_r:
        plot_pe(ax_espaco, px, py, yaw_rad=pyaw)
    for px, py, pyaw in pegadas_l:
        plot_pe(ax_espaco, px, py, yaw_rad=pyaw)

    ax_espaco.set_xlabel('Lateral Y (m)')
    ax_espaco.set_ylabel('Sagital X (m)')
    ax_espaco.set_title('Vista Superior')
    ax_espaco.legend(handles=[l_ref, l_calc, l_com, legenda_pes], loc='upper left')
    ax_espaco.axis('equal')

    plt.tight_layout()
    plt.savefig('tcc_44X_montagem_combinada.png', dpi=300)
    plt.close()

    # =========================================================
    # SOBREACELERAÇÃO 
    # =========================================================
    fig, ax3 = plt.subplots(figsize=(10, 5))
    ax3.plot(tempo_s, df['jerk_x'], color='darkred', label='Sobreaceleração Sagital (X)')
    ax3.plot(tempo_s, df['jerk_y'], color='darkblue', alpha=0.7, label='Sobreaceleração Lateral (Y)')
    ax3.set_xlabel('Tempo (s)')
    ax3.set_ylabel('Sobreaceleração (m/s³)')
    ax3.set_title('Sobreaceleração')
    ax3.set_ylim(-50, 50) 
    ax3.legend(loc='upper right')

    plt.tight_layout()
    plt.savefig('tcc_fig_sobreaceleracao_lqr.png', dpi=300)
    plt.close()

    print("Gráficos gerados com as rotações fixadas na coordenada base do eixo!")

except Exception as e:
    print(f"Erro ao gerar os gráficos: {e}")