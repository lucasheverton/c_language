#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/*
Programa que calcula o salario mensal dos funcion�rios
Lucas Heverton
*/


int main () {
	setlocale (LC_ALL, "Portuguese");
	
	int nfunc, ht;
	float vh, s;
	
	printf ("PROGRAMA: FUNCION�RIOS E SEUS SAL�RIOS \n\n\n");
 	printf ("\nI) Por favor, informe o n�mero de funcion�rios: ");
	scanf ("%d", &nfunc);
	printf ("\nII) Por favor, informe o n�mero de horas trabalhadas: ");
	scanf ("%d", &ht);
	printf ("\nIII) Por favor informe o valor recebedio por hora: ");
	scanf ("%f", &vh);
	s = vh * ht * 30;
	printf ("\n\n O sal�rio de cada funcion�rio �: $ %1.f", s); 
	printf ("\n Total de funcion�rios:  %d ", nfunc);
	
	getch ();
	return 0;
	
	
	
	
	
	
	
	
	
	
	
}
