# Leitura da quantidade de DVDs e valor do aluguel
quantidade_dvds = int(input("Digite a quantidade de DVDs da locadora: "))
valor_aluguel = float(input("Digite o valor do aluguel: "))

# Cálculo do faturamento anual
dvds_alugados_mes = quantidade_dvds / 3
dvds_devolvidos_mes = dvds_alugados_mes / 10
multa_por_atraso = valor_aluguel * 0.1

faturamento_anual = (dvds_alugados_mes * valor_aluguel * 12) + (dvds_devolvidos_mes * multa_por_atraso * 12)

# Cálculo da quantidade total de DVDs após um ano
dvds_estragados_mes = quantidade_dvds * 0.02
dvds_repostos_mes = dvds_estragados_mes / 10

quantidade_dvds_ano = quantidade_dvds - (dvds_estragados_mes * 12) + (dvds_repostos_mes * 12)

# Exibição dos resultados
print("Faturamento anual da locadora: R$", faturamento_anual)
print("Quantidade total de DVDs após um ano:", quantidade_dvds_ano)
