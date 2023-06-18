def calcula_graos():
    total_graos = 0
    graos_no_quadro = 1

    for linha in range(1, 9):
        for coluna in range(1, 9):
            total_graos += graos_no_quadro
            graos_no_quadro *= 2

    return total_graos

# Chamando a função e exibindo o resultado
resultado = calcula_graos()
print("O número total de grãos que o monge esperava receber é:", resultado)
