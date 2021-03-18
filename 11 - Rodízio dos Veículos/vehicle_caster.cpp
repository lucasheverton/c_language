#include <stdio.h>
#include <conio.h>
#include <locale.h>

/*
Programa que mostra o dia de rodizio do automovel
Lucas Heverton
*/

int main () {
	setlocale (LC_ALL, "Portuguese");
	
	printf ("Programa:rodizio.c\n\n");
	
	int placa;
	printf ("Digite apenas os números da placa do automóvel: ");
	scanf ("%d", &placa );
	placa = (placa %10);
	switch (placa) {
		case 1: case 2:
		printf ("Rodizio na Segunda-Feira");
		break;
		case 3: case 4:
		printf ("Rodizio na Terça-Feira");
		break;
		case 5: case 6:
		printf ("Rodizio na Quarta-Feira");
		break;
		case 7: case 8:
		printf ("Rodizio na Quarta-Feira");
		break;
		case 9: case 0:
		printf ("Rodizio na Sexta-Feira");
	}  
	
	getch ();
	return 0;
		
}
