#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

/*

Programa que faz o calculo do Quadrado de diferen�a entre dois n�meros
Lucas Heverton
*/

int main () {
	printf ("Programa Operacoes\n\n");
	
	setlocale (LC_ALL, "Portuguese");
	
	int cod, a, b, result;
	printf ("Por favor digite um C�digo de 1 a 5:_ ");
	scanf ("%d", &cod);
	printf ("\nDigite o primeiro valor: ");
	scanf ("%d", &a);
	printf ("\nDigite o segundo valor: ");
	scanf ("%d", &b);
	printf ("\n");
	switch (cod) {
		case 1:
		   	result = (a - b) * (a - b);
			printf ("Quadrado de diferen�a de dois n�meros �: %d", result);
			break;
		case 2:
			result = (a + b) * (a + b);
			printf ("Quadrado da soma de dois n�meros �: %d", result);
			break;
		case 3:
			result = (a * a + b * b);
			printf ("A soma do quadrado de dois n�meros �: %d", result);
		    break;
		case 4:
			result = (a * a - b * b);
			printf ("A diferen�a do quadrado de dois n�meros �: %d", result);
			break;
		case 5:
			result = (a - b) * (a + b);
			printf ("O produto da soma com a diferen�a de dois n�meoros �: %d", result);
			break;
	}

    getch ();
    return 0;
    
}
