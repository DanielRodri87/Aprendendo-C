
int main() {
    float cemkw, s_minimo, kw, valorConta, valorContaDesconto;
    int kwgastos;

    printf("Digite o valor do salário mínimo: ");
    scanf("%f", &s_minimo);

    printf("Digite a quantidade de quilowatts gastos: ");
    scanf("%d", &kwgastos);

    cemkw = s_minimo / 7;
    kw = cemkw / 100;

    valorConta = kw * kwgastos;

    valorContaDesconto = valorConta * 0.9;

    printf("\nValor de cada quilowatt: R$ %.2f\n", kw);
    printf("Valor da conta de energia: R$ %.2f\n", valorConta);
    printf("Novo valor da conta com desconto de 10%%: R$ %.2f\n", valorContaDesconto);

    return 0;
}