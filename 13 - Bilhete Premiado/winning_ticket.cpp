#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

/*
Programa que mostra um bilhete premiado
Lucas Heverton
*/

int main () {
	setlocale (LC_ALL, "Portuguese");
	
	printf ("Programa: premio.c\n\n");
	
	int p1, p2, vencedor;
	printf ("\nPrimeiro n�mero sorteado: ");
	scanf ("%d",&p1);
	printf ("Segundo n�mero sorteado: ");
	scanf ("%d", &p2);
	vencedor = (p1 % 100) * (p2 % 100);
	printf ("Bilhete premiado: %d", vencedor);
	getch ();
	return 0; 
}
