#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>

# define a 12
# define m 30

/*
Programa que transforma a sua idade em quantidade de dias vividos
Lucas Heverton
*/

int main ( ) {
    setlocale (LC_ALL, "Portuguese");
    
	int dias_vividos, idade;
	
	printf ("PROGRAMA: CALCULO DA IDADE EM DIAS VIVIDOS \n\n\n\n");
	printf ("Escreva sua idade: \n");
	scanf ("%d", &idade);
	dias_vividos = idade * a * m;
	printf ("Sua idade em dias vividos é %d", dias_vividos);
	
	getch ();
	return 0;

}
