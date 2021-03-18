# include <stdio.h>
# include <conio.h>

/*
Programa que faz uma média aritimética
Lucas Heverton
*/

int main () {
	float vetor1 [] = {1,2,3,4,5};
	float vetor2 [] = {6,7,8,9,10};
	float medarit [5], soma, medgeral;
	int i;
	
	soma = 0;
	for (i= 0; i < 5; i++) {
	medarit [i] = (vetor1 [i] + vetor2 [i]) / 2;
	soma = soma + medarit [i];
	}
	
	medgeral = soma / 5;
	printf ("Media geral = %0.1f\n\n", medgeral);
	for (i = 0; i < 5; i ++)
	   printf ("\nPosicao [%d] - Media Aritmetica = %0.1f - ", i, medarit[i]);
	   
	   getch ();
	   return 0;

	
}
