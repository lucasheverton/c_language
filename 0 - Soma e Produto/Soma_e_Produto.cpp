# include <stdio.h>
# include <conio.h>
# include <stdlib.h>
# include <locale.h>

/*
Programa que soma um valor e multiplica um valor fixo e exibe na tela.
Lucas Heverton
*/

int main () {
	setlocale (LC_ALL, "Portuguese");
	
	printf ("Programa: contas.c\n\n");
	float soma, produto;
	
	soma = 91.37 + 7.351 ;
	produto = 91.37 * 7.351 ;
	printf ( " A soma é igual a %.3f\n\n", soma ) ;
	printf ( " O produto é igual a %.3f", produto ) ;
	
	getch () ;
	return 0 ;
	
}
