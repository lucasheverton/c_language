#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

/*
Programa que pega o mês digitado e exibe a estação do ano correspondente
Lucas Heverton
*/

int main () {
	setlocale (LC_ALL, "Portuguese");
	
	printf ("Programa: estacoes.c\n\n");
	
	int mes;
	printf ("Digite o mês no formato númerico: ");
	scanf ("%d", &mes);
	switch (mes) {
	    case 9: case 10: case 11:
	    	printf ("Primavera");
	    	break;
	    case 12: case 1: case 2:
	        printf ("Verão");
			break;
		case 3: case 4: case 5:
		    printf ("Outono");
		    break;
		case 6: case 7: case 8:
		    printf ("Inverno");
			break;
		  default:
		    printf ("Valor digitado não correponde a um mês válido");
	}
		
	getch ();
	return 0;
	
	
}
