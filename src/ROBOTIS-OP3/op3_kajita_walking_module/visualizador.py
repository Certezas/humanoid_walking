import pandas as pd
import matplotlib.pyplot as plt

FICHEIRO_RESULTADOS = 'resultados_caminhada.txt'

try:
    data = pd.read_csv(FICHEIRO_RESULTADOS)
    data.columns = data.columns.str.strip()

    print("Ficheiro lido com sucesso! A gerar gráficos...")

    plt.figure(figsize=(12, 16))

    # 1. Gráfico para o Eixo X
    plt.subplot(3, 1, 1)
    plt.plot(data['k'], data['ZMP_ref_x'], 'g--', label='ZMP X Ref (Plano)')
    plt.plot(data['k'], data['ZMP_x'], 'b-', linewidth=2, label='ZMP X Real (Calculado)')
    plt.plot(data['k'], data['COM_x'], 'r-.', label='CoM X (Calculado)')
    plt.title('Movimento no Eixo X (Para a Frente)')
    plt.grid(True)
    plt.legend()

    # 2. Gráfico para o Eixo Y
    plt.subplot(3, 1, 2)
    plt.plot(data['k'], data['ZMP_ref_y'], 'g--', label='ZMP Y Ref (Plano)')
    plt.plot(data['k'], data['ZMP_y'], 'b-', linewidth=2, label='ZMP Y Real (Calculado)')
    plt.plot(data['k'], data['COM_y'], 'r-.', label='CoM Y (Calculado)')
    plt.title('Movimento no Eixo Y (Lateral)')
    plt.grid(True)
    plt.legend()

    # 3. Gráfico Paramétrico (Vista Superior)
    plt.subplot(3, 1, 3)
    plt.plot(data['ZMP_ref_x'], data['ZMP_ref_y'], 'g--', label='ZMP Ref (Plano)')
    plt.plot(data['ZMP_x'], data['ZMP_y'], 'b-', linewidth=2, label='ZMP Real (Calculado)')
    plt.plot(data['COM_x'], data['COM_y'], 'r-.', label='CoM (Calculado)')
    plt.title('Trajetória no Chão (Vista Superior)')
    plt.xlabel('Posição X (m)')
    plt.ylabel('Posição Y (m)')
    plt.grid(True)
    plt.legend()
    plt.axis('equal')

    plt.tight_layout()
    plt.show()

except Exception as e:
    print(f"Ocorreu um erro: {e}")
    print(f"Certifique-se de que o ficheiro '{FICHEIRO_RESULTADOS}' existe e está formatado corretamente.")