#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/*
Programa que captura os minutos e exibe em horas, minutos e segundos
Lucas Heverton
*/

int main () {
	setlocale (LC_ALL, "Portuguese");
	
	int valor_segundos, horas, minutos, segundos;
	
	printf ("PROGRAMA: HORAS MINUTOS E SEGUNDOS \n\n\n");
	printf ("Digite o valor em segundos: ");
	scanf ("%d", & valor_segundos);
	horas = valor_segundos / 3600;
	minutos = valor_segundos % 3600 / 60;
	segundos = (valor_segundos % 60) % 60;
	printf ("O seu valor é %d horas %d minutos %d segundos", horas, minutos, segundos) ; // quando houver mais de um resultado, seguir o padrão da linha
	
	getch ();
	return 0;
		
}
