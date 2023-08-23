// Leia a hora inicial, minuto inicial, hora final e minuto final de um jogo. A seguir calcule a duração do jogo.

// Obs: O jogo tem duração mínima de um (1) minuto e duração máxima de 24 horas.

// Entrada
// Quatro números inteiros representando a hora de início e fim do jogo.

// Saída
// Mostre a seguinte mensagem: “O JOGO DUROU XXX HORA(S) E YYY MINUTO(S)

#include <stdio.h>

int main()
{
    int horaInicial, minutoInicial, horaFinal, minutoFinal, duracaoHora, duracaoMinuto;
    scanf("%d %d %d %d", &horaInicial, &minutoInicial, &horaFinal, &minutoFinal);
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
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duracaoHora, duracaoMinuto);
    return 0;
}