#include <stdio.h>

int main(){

    int rpt = 1;

    while (rpt == 1)
    {
        printf("\nEscolha uma questão: \n");
        printf("\n1 - Milhas\n2 - Velocidade Média\n3 - Bhaskara\n4 - Consumo\n5 - Taxa\n");
        int questao;
        scanf("%d", &questao);

        if (questao==1){
            float milhas, metros;

            printf("Digite a distância em milhas: ");
            scanf("%f", &milhas);

            metros = milhas * 1609.3;


            printf("A distância em metros é: %.2f", metros);

            printf("\nDeseja repetir o programa? 1 - Sim | 2 - Não\n");
            scanf("%d", &rpt);
        } else if (questao==2){

            float distancia, tempo, velocidade_media;

            printf("Digite a distância percorrida em quilometros: ");
            scanf("%f", &distancia);
            printf("Digite o tempo gasto em horas: ");
            scanf("%f", &tempo);

            velocidade_media = distancia/tempo;

            
            printf("A velocidade média é: %.2f km/h\n", velocidade_media);


            printf("\nDeseja repetir o programa? 1 - Sim | 2 - Não\n");
            scanf("%d", &rpt);

        } else if (questao==3){            
            double a,b,c, delta, r1,r2;
            
            scanf("%lf", &a);
            scanf("%lf", &b);
            scanf("%lf", &c);
            
            delta = (b*b) - (4*a*c);  
            r1 = ( (-b) + (sqrt(delta)) ) / (2*a);
            r2 = ( (-b) - (sqrt(delta)) ) / (2*a);
            
            if ( delta <= 0 || a == 0 || b == 0 || c == 0)
            {
                printf("Impossivel calcular\n");
            } 
            else
            {
                printf("R1 = %.5lf\n", r1);
                printf("R2 = %.5lf\n", r2);
            }

            printf("\nDeseja repetir o programa? 1 - Sim | 2 - Não\n");
            scanf("%d", &rpt);

        } else if (questao==4){

            float km_inicial, km_final, combustivel_gasto, consumo_medio;

            printf("Quantos quilometros seu carro tinha: ");
            scanf("%f", &km_inicial);
            printf("Quantos quilometros rodados seu carro tem: ");
            scanf("%f", &km_final);
            printf("Quantos litros de combustivel seu carro gastou: ");
            scanf("%f", &combustivel_gasto);

            consumo_medio = (km_final - km_inicial) / combustivel_gasto;

            printf("Seu carro faz %.2f km/l\n", consumo_medio);

            printf("\nDeseja repetir o programa? 1 - Sim | 2 - Não\n");
            scanf("%d", &rpt);

        } else if (questao==5){
            float valor;

            printf("Informe o valor do serviço: ");
            scanf("%f", &valor);

            float valor_final = valor*1.1;
            float taxa = valor * 0.1;

            printf("O valor inicial é: %.2f\n, Taxa: %.2f\n, valor final %.2f\n", valor, taxa, valor_final);
        } else {
            printf("Questão inválida\n");
        }
            printf("\nDeseja repetir o programa? 1 - Sim | 2 - Não\n");
            scanf("%d", &rpt);
    } 
    

    return 0;
}