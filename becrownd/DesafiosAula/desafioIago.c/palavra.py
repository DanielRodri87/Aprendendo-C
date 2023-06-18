palavra = str(input("Digite uma palavra: "))
inverso = palavra[::-1]

if palavra == inverso:
    print("A palavra é um palíndromo")
else:
    print("A palavra não é um palíndromo")