#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

/*
Programa que exibe os multiplos dentro de um la�o de repeti��o
Lucas Heverton
*/

int main ()   {
	setlocale (LC_ALL, "Portuguese");
	
	printf ("Programa Multiplos\n\n");
	
	int numeros;

	for (numeros = 1 ; numeros <= 50 ; numeros ++) { 
	  if (numeros % 5 == 0) 
	     printf ("%d � multiplo de 5 \n\n", numeros);
		 }
		 
    getch ();
    return 0;
}
