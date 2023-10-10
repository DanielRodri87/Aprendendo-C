def main():
    # Declaração das variáveis
    n1 = float(input())
    n2 = float(input())
    n3 = float(input())
    n4 = float(input())

    # Cálculo da média ponderada
    media = (n1 * 2 + n2 * 3 + n3 * 4 + n4) / (2 + 3 + 4 + 1)

    # Impressão da média
    print("Média:", media)

    # Verificação da aprovação
    if media >= 7.0:
        print("Aluno aprovado.")
    elif media < 5.0:
        print("Aluno reprovado.")
    else:
        print("Aluno em exame.")

        # Leitura da nota do exame
        exame = float(input("Digite a nota do exame: "))

        # Cálculo da média final
        media_final = (media + exame) / 2

        # Verificação da aprovação com a nota do exame
        if media_final >= 5.0:
            print("Aluno aprovado.")
        else:
            print("Aluno reprovado.")

        # Impressão da média final
        print("Média final:", media_final)

if __name__ == "__main__":
    main()
