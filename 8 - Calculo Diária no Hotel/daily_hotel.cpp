#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

#define DAY 95,00

/*
Programa que calcula a diará do hotel, taxas e o valor final.
Lucas Heverton
*/

int main ( ) {
	setlocale (LC_ALL, "Portuguese");
	
	printf ("Programa CALC HOTEL\n\n\n");
	
	float diaria, taxa, final;
	int Qntd_dias;
	printf ("Digite quantos dias você ficou hospedado: ");
	scanf ("%d", &Qntd_dias);
	diaria = Qntd_dias * DAY;
	if (Qntd_dias < 10)
	      taxa = diaria * 0.15;
	else
	  if (Qntd_dias == 10)
      taxa = diaria * 0.10;
	else
		taxa = diaria * 0.05; 
	
	final = diaria + taxa;
	printf ("\nO valor da diárias é: R$ %.2f", diaria);
	printf ("\nO valor da taxa paga é: R$ %.2f", taxa);
	printf ("\nO valor final pago é: R$ %.2f", final);
	
	getch ();
	return 0;
		
}

