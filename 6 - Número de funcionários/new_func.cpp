#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/*
Programa que calcula o salario mensal dos funcionários
Lucas Heverton
*/


int main () {
	setlocale (LC_ALL, "Portuguese");
	
	int nfunc, ht;
	float vh, s;
	
	printf ("PROGRAMA: FUNCIONÁRIOS E SEUS SALÁRIOS \n\n\n");
 	printf ("\nI) Por favor, informe o número de funcionários: ");
	scanf ("%d", &nfunc);
	printf ("\nII) Por favor, informe o número de horas trabalhadas: ");
	scanf ("%d", &ht);
	printf ("\nIII) Por favor informe o valor recebedio por hora: ");
	scanf ("%f", &vh);
	s = vh * ht * 30;
	printf ("\n\n O salário de cada funcionário é: $ %1.f", s); 
	printf ("\n Total de funcionários:  %d ", nfunc);
	
	getch ();
	return 0;
	
	
	
	
	
	
	
	
	
	
	
}
