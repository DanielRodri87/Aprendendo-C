// Astrologia é uma pseudociência segundo a qual as posições relativas dos corpos celestes poderiam prover informação sobre a personalidade, as relações humanas, e outros assuntos relacionados à vida do ser humano. Horo não acredita em astrologia, mas ele ganhou uma coleção de copos de aniversário, e cada copo estava estampado com um dos signos do zodíaco. Em um momento de curiosidade, resolveu pesquisar quais seriam os signos de seus amigos. Considerando a tabela abaixo com as datas de cada signo, ajude Horo a descobrir o signo de seus amigos.

// entrada dd/mm

#include <stdio.h>

int main()
{
    char data[6];
    scanf("%s", data);
    int dia = (data[0] - '0') * 10 + (data[1] - '0');
    int mes = (data[3] - '0') * 10 + (data[4] - '0');
    if (mes == 1)
    {
        if (dia <= 20)
        {
            printf("capricornio\n");
        }
        else
        {
            printf("aquario\n");
        }
    }
    else if (mes == 2)
    {
        if (dia <= 18)
        {
            printf("aquario\n");
        }
        else
        {
            printf("peixes\n");
        }
    }
    else if (mes == 3)
    {
        if (dia <= 20)
        {
            printf("peixes\n");
        }
        else
        {
            printf("aries\n");
        }
    }
    else if (mes == 4)
    {
        if (dia <= 20)
        {
            printf("aries\n");
        }
        else
        {
            printf("touro\n");
        }
    }
    else if (mes == 5)
    {
        if (dia <= 20)
        {
            printf("touro\n");
        }
        else
        {
            printf("gemeos\n");
        }
    }
    else if (mes == 6)
    {
        if (dia <= 20)
        {
            printf("gemeos\n");
        }
        else
        {
            printf("cancer\n");
        }
    }
    else if (mes == 7)
    {
        if (dia <= 21)
        {
            printf("cancer\n");
        }
        else
        {
            printf("leao\n");
        }
    }
    else if (mes == 8)
    {
        if (dia <= 22)
        {
            printf("leao\n");
        }
        else
        {
            printf("virgem\n");
        }
    }
    else if (mes == 9)
    {
        if (dia <= 22)
        {
            printf("virgem\n");
        }
        else
        {
            printf("libra\n");
        }
    }
    else if (mes == 10)
    {
        if (dia <= 22)
        {
            printf("libra\n");
        }
        else
        {
            printf("escorpiao\n");
        }
    }
    else if (mes == 11)
    {
        if (dia <= 21)
        {
            printf("escorpiao\n");
        }
        else
        {
            printf("sagitario\n");
        }
    }
    return 0;
}