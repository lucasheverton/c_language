# include <stdio.h>
# include <conio.h>
# include <stdlib.h>
# include <locale.h>
# include <math.h>

#define PI 3.14

/*
Programa que calcula o volume da esfera.
Lucas Heverton
*/

int main ( ) {
	setlocale (LC_ALL, " Portuguese");
	
	printf ("Programa: volume.c\n\n");
	
	float v;
	int r;
	
	printf ("Qual o raio da esfera? \n");
	scanf ("%d",&r);
	
	v = 4 * PI * pow ( r,3) / 3;
	printf ("O volume correspondente a %.2f", v);
	
	getch ();
	return 0;	
}
