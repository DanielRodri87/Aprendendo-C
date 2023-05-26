
# Criar um algoritmo que leia a quantidade de DVDs que uma locadora de filmes possui e o valor que
# ela cobra por um aluguel e que logo em seguida exiba as seguintes informações:
# • Quando o cliente atrasa a entrega, é cobrada uma multa de 10% sobre o valor do aluguel. Sabendo
# que um terço dos DVDs são alugados por mês e que um décimo das fitas alugadas no mês é devolvido com atraso,
# exibir o faturamento anual da locadora.
# • Sabendo que 2% dos DVDs se estragam por mês, e que um décimo dessa quantidade de DVDs é
# reposto, exibir a quantidade total de DVDs da locadora após um ano.


dvds = int(input("Digite a quantidade de DVDs que a locadora possui: "))
valor = float(input("Digite o valor do aluguel: "))
multa = valor * 0.1
aluguel = dvds / 3
atraso = aluguel / 10
faturamento = ((aluguel * valor) + (atraso * multa))*12
estrago = dvds * 0.02
reposicao = estrago / 10
total = dvds + reposicao

print("O faturamento anual da locadora é de R$ %.2f" % faturamento)