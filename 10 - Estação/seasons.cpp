#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

/*
Programa que pega o m�s digitado e exibe a esta��o do ano correspondente
Lucas Heverton
*/

int main () {
	setlocale (LC_ALL, "Portuguese");
	
	printf ("Programa: estacoes.c\n\n");
	
	int mes;
	printf ("Digite o m�s no formato n�merico: ");
	scanf ("%d", &mes);
	switch (mes) {
	    case 9: case 10: case 11:
	    	printf ("Primavera");
	    	break;
	    case 12: case 1: case 2:
	        printf ("Ver�o");
			break;
		case 3: case 4: case 5:
		    printf ("Outono");
		    break;
		case 6: case 7: case 8:
		    printf ("Inverno");
			break;
		  default:
		    printf ("Valor digitado n�o correponde a um m�s v�lido");
	}
		
	getch ();
	return 0;
	
	
}
