#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>

/*
Programa que faz o calculo do imc
Lucas Heverton
*/

int main ( ) {
	setlocale (LC_ALL, "Portuguese");
	
	printf ("Programa: Calc_IMC\n\n");
	
	float altura, imc;
	int peso;
	printf ("\nDigite o seu peso *Exemplo: 67*: ");
	scanf ("%d", &peso);
	printf ("\nDigite a sua altura *Exemplo: 1,80*: ");
	scanf ("%f", &altura);
	while(peso<=0);  
	imc = ((peso))/((altura*altura));
	if(imc <= 18.50) {
      if(imc < 18.00)
      printf("Você está abaixo do peso\n");
      else {
        if(imc >= 18.00 <= 25.00)
        printf("Você está no peso ideal\n");
        else {
          if(imc > 25.00)
          printf("Você está acima do peso\n");
        }
      }
    }    
	printf("Seu IMC é %.2f\n", imc);
	getch ();
	return 0;	
	
}
