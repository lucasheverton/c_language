# include <stdio.h>
# include <conio.h>
#include <locale.h>

/*
Programa que calula a idade
Lucas Heverton
*/

int main ( ) { 
	setlocale (LC_ALL, "Portuguese");
    int nasc, idade;
    printf ("PROGRAMA CALC NASCIMENTO\n\n");
    printf ("Que ano voce nasceu?\n");
    printf ("Digite o ano: ");
    scanf ("%d", &nasc);
    idade = 2018 - nasc;
    printf ("\nVocê já tem %d anos, ta ficando velho");
    getch ();
	return 0; 


}
