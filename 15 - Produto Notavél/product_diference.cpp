#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

/*

Programa que faz o calculo do Quadrado de diferença entre dois números
Lucas Heverton
*/

int main () {
	printf ("Programa Operacoes\n\n");
	
	setlocale (LC_ALL, "Portuguese");
	
	int cod, a, b, result;
	printf ("Por favor digite um Código de 1 a 5:_ ");
	scanf ("%d", &cod);
	printf ("\nDigite o primeiro valor: ");
	scanf ("%d", &a);
	printf ("\nDigite o segundo valor: ");
	scanf ("%d", &b);
	printf ("\n");
	switch (cod) {
		case 1:
		   	result = (a - b) * (a - b);
			printf ("Quadrado de diferença de dois números é: %d", result);
			break;
		case 2:
			result = (a + b) * (a + b);
			printf ("Quadrado da soma de dois números é: %d", result);
			break;
		case 3:
			result = (a * a + b * b);
			printf ("A soma do quadrado de dois números é: %d", result);
		    break;
		case 4:
			result = (a * a - b * b);
			printf ("A diferença do quadrado de dois números é: %d", result);
			break;
		case 5:
			result = (a - b) * (a + b);
			printf ("O produto da soma com a diferença de dois númeoros é: %d", result);
			break;
	}

    getch ();
    return 0;
    
}
