#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

/*
Programa que exibe na tela o números digitados e intervalo dos números
Lucas Heverton
*/

int main () {
	setlocale (LC_ALL, "Portuguese");
	
	printf ("Programa: Números \n");
	
	int n1, n2;
	printf ("\nDigite o primeiro número: ");
	scanf ("%d", &n1);
	printf ("\n\nDigite o segundo número: ");
	scanf ("%d", &n2);
	 
	 if (n1 > n2) 
	   printf ("\n\nO primeiro número deve ser menor que o segundo! ");
	 else
	  while (n1<= n2) {
	  	printf ("\n\n%d", n1);
	  	n1 = n1 + 1;
	  }  
	
	getch ();
	return 0;	
}
