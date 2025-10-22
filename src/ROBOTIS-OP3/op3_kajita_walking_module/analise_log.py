import pandas as pd
import matplotlib.pyplot as plt

# Carrega os dados dos arquivos CSV
df_sem_comp = pd.read_csv("log_sem_compensador.csv")
df_com_comp = pd.read_csv("log_com_compensador.csv")

fig, axs = plt.subplots(3, 1, figsize=(15, 12), sharex=True)
fig.suptitle('Análise do Compensador de Gravidade', fontsize=16)

# --- Gráfico 1: Posição do Hip Roll ---
axs[0].plot(df_sem_comp['k'], df_sem_comp['comando_l_hip_roll'], 'k--', label='Comando (Referência)')
axs[0].plot(df_sem_comp['k'], df_sem_comp['real_l_hip_roll'], 'r-', linewidth=2, label='Real (Sem Comp.)')
axs[0].plot(df_com_comp['k'], df_com_comp['real_l_hip_roll'], 'g-', linewidth=2, label='Real (Com Comp.)')
axs[0].set_title('Posição da Junta "l_hip_roll"')
axs[0].set_ylabel('Ângulo (rad)')
axs[0].legend()
axs[0].grid(True)

# --- Gráfico 2: Erro de Rastreamento (Hip Roll) - GRÁFICO MAIS IMPORTANTE ---
axs[1].plot(df_sem_comp['k'], df_sem_comp['erro_l_hip_roll'], 'r-', label='Erro (Sem Comp.)')
axs[1].plot(df_com_comp['k'], df_com_comp['erro_l_hip_roll'], 'g-', label='Erro (Com Comp.)')
axs[1].axhline(0, color='k', linestyle='--', linewidth=1, label='Erro Zero')
axs[1].set_title('Erro de Rastreamento (Real - Comando) da Junta "l_hip_roll"')
axs[1].set_ylabel('Erro (rad)')
axs[1].legend()
axs[1].grid(True)

# --- Gráfico 3: Erro de Rastreamento (Knee) ---
axs[2].plot(df_sem_comp['k'], df_sem_comp['erro_l_knee'], 'r-', label='Erro (Sem Comp.)')
axs[2].plot(df_com_comp['k'], df_com_comp['erro_l_knee'], 'g-', label='Erro (Com Comp.)')
axs[2].axhline(0, color='k', linestyle='--', linewidth=1, label='Erro Zero')
axs[2].set_title('Erro de Rastreamento da Junta "l_knee"')
axs[2].set_xlabel('Passo de Simulação (k)')
axs[2].set_ylabel('Erro (rad)')
axs[2].legend()
axs[2].grid(True)

plt.tight_layout(rect=[0, 0, 1, 0.96])
plt.show()