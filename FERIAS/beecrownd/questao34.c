
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