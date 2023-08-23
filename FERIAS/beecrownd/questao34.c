// Pedrinho está organizando um evento em sua Universidade. O evento deverá ser no mês de Abril, iniciando e terminando dentro do mês. O problema é que Pedrinho quer calcular o tempo que o evento vai durar, uma vez que ele sabe quando inicia e quando termina o evento.

// Sabendo que o evento pode durar de poucos segundos a vários dias, você deverá ajudar Pedrinho a calcular a duração deste evento.

// Entrada
// Como entrada, na primeira linha vai haver a descrição “Dia”, seguido de um espaço e o dia do mês no qual o evento vai começar. Na linha seguinte, será informado o momento no qual o evento vai iniciar, no formato hh : mm : ss. Na terceira e quarta linha de entrada haverá outra informação no mesmo formato das duas primeiras linhas, indicando o término do evento.

// Saída
// Na saída, deve ser apresentada a duração do evento, no seguinte formato:

// W dia(s)
// X hora(s)
// Y minuto(s)
// Z segundo(s)

// Obs: Considere que o evento do caso de teste para o problema tem duração mínima de 1 minuto.

// Exemplo de Entrada	Exemplo de Saída

#include <stdio.h>

int main()
{
    int diaInicial, horaInicial, minutoInicial, segundoInicial, diaFinal, horaFinal, minutoFinal, segundoFinal, duracaoDia, duracaoHora, duracaoMinuto, duracaoSegundo;
    char dia[4];
    scanf("%s %d", dia, &diaInicial);
    scanf("%d : %d : %d", &horaInicial, &minutoInicial, &segundoInicial);
    scanf("%s %d", dia, &diaFinal);
    scanf("%d : %d : %d", &horaFinal, &minutoFinal, &segundoFinal);
    if (horaInicial < horaFinal)
    {
        duracaoHora = horaFinal - horaInicial;
    }
    else
    {
        duracaoHora = 24 - horaInicial + horaFinal;
    }
    if (minutoInicial < minutoFinal)
    {
        duracaoMinuto = minutoFinal - minutoInicial;
    }
    else
    {
        duracaoMinuto = 60 - minutoInicial + minutoFinal;
        duracaoHora--;
    }
    if (segundoInicial < segundoFinal)
    {
        duracaoSegundo = segundoFinal - segundoInicial;
    }
    else
    {
        duracaoSegundo = 60 - segundoInicial + segundoFinal;
        duracaoMinuto--;
    }
    if (diaInicial < diaFinal)
    {
        duracaoDia = diaFinal - diaInicial;
    }
    else
    {
        duracaoDia = 30 - diaInicial + diaFinal;
    }
    printf("%d dia(s)\n", duracaoDia);
    printf("%d hora(s)\n", duracaoHora);
    printf("%d minuto(s)\n", duracaoMinuto);
    printf("%d segundo(s)\n", duracaoSegundo);
    return 0;
}