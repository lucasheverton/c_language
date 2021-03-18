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
	printf ("\nPrimeiro número sorteado: ");
	scanf ("%d",&p1);
	printf ("Segundo número sorteado: ");
	scanf ("%d", &p2);
	vencedor = (p1 % 100) * (p2 % 100);
	printf ("Bilhete premiado: %d", vencedor);
	getch ();
	return 0; 
}
