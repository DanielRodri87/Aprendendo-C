//Fórmula de Bhaskara

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main ()
{
  	 // Definindo cores
	 system ("color db");
	 
	 // declarando variáveis do tipo real com double "dupla precisão".
	 double a,b,c, delta, r1,r2;
	 
	 // Usuário vai digitar os valores de A, B e C e o programa vai aramazenar nas respectivas variáveis.
	 scanf("%lf", &a);
	 scanf("%lf", &b);
	 scanf("%lf", &c);
	 
	 // fazendo o processamento da fórmula de bhaskara em si.... 
	 delta = (b*b) - (4*a*c);  // poderia ter usado também o pow para elevar o b .... "  pow(b,2) "
	 r1 = ( (-b) + (sqrt(delta)) ) / (2*a);
	 r2 = ( (-b) - (sqrt(delta)) ) / (2*a);
	 
	 // Se delta for menor ou igual que 0 ou se a , b ou c forem igual à 0 faça a impressão de tela de que o calculo é impossível.
	 if ( delta <= 0 || a == 0 || b == 0 || c == 0)
	 {
	 	  printf("Impossivel calcular\n");
	 } 
	 // Senão imprima na tela os respectivos resultados r1 e r2.
	 else
	 {
		  printf("R1 = %.5lf\n", r1);
		  printf("R2 = %.5lf\n", r2);
	 }
	
	// pausando o sistema sem aparecer a mensagem "Pressione qualquer tecla para continuar..."
	getche ();
}