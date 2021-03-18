#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

#define t 60

/*
Programa que calcula a velocidade de um automovél
Lucas Heverton
*/

int main () {
	setlocale (LC_ALL, "Portuguese");
	
	float so, s, vo, a;
	
	printf ("Digite o valor em metros: ");
	scanf ("%f", &so);
	printf ("Digite a velocidade inicial: ");
	scanf ("%f", &vo);
	printf ("Digite a aceleração: ");
	scanf ("%f", &a);
	s = so + vo*t + a/2 * pow (t,2);
	printf ("O resultado é %.1f ", s);
	
	getch ();
	return 0;
		
}
