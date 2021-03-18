#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

#define HORA_1 8,00
#define HORA_2 15,00
#define HORA_3 5,00

/*
Programa que calcula o valor do estacionamento
Lucas Heverton
*/

int main ( ) {
	setlocale (LC_ALL, "Portuguese");
	
	printf ("Programa Estacionamento\n\n");
	
    int perm_h, entrada_h, saida_h;
    float total;
    printf ("Digite a hora que o cliente entrou no estacionamento: ");
    scanf ("%d", &entrada_h);
	printf ("Digite a hora que o cliente saiu do estacionamento: ");
	scanf ("%d", &saida_h);
	perm_h = saida_h - entrada_h;
	if (perm_h == 1)
	   total = HORA_1;
	else
	if (perm_h == 2)
	total = HORA_2;
	else
	total = perm_h * HORA_3;
		printf ("O valo total a ser pago é: R$ %0.2f.", total);
	
	getch ();
	return 0;

}
