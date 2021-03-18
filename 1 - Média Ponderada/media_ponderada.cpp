#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

#define P1 1.0
#define P2 1.0	
#define P3 1.0

/*
Programa que calcula uma média ponderada e exibe na tela.
Lucas Heverton
*/
int main () {
	setlocale (LC_ALL, "Portuguese");
	 
	printf ("Programa: Média_Ponderada\n\n");
	
	float n1, n2, n3, media;
	
	printf ("\nDigite a primeira nota: ");
	scanf ("%f",&n1);
	
	printf ("\nDigite a segunda nota: ");
	scanf ("%f", &n2);
		
	printf ("\nDigite a terçeira nota: ");
	scanf ("%f", &n3 );
	
	media = ((n1 * P1) + (n2 * P2) + (n3 * P3))/ (P1 + P2 + P3);
	printf ("\nMédia ponderada = %.1f", media);
	
	getch () ;
	return 0 ;
	
}
