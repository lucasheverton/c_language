# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <math.h> 

/*
Programa que faz uma m�dia nos n�meros digitados no array
Lucas Heverton
*/

int main () {
    setlocale (LC_ALL, "Portuguese");
	printf ("Programa: Vetores\n\n");
	float nota [5];
	float soma, media;
	int i;
	
	soma = 0;
	printf ("Digite os valores das cinco notas:\n\n");
	for (i = 0; i < 5; i++) 
	 scanf ("%f", &nota [i]);
	for (i = 0; i < 5; i++) {
		soma = soma + nota [i];
	}
     media = soma / 5;
     printf ("\nEscreva m�dia das notas %0.1f:", media);
     
     getch ();
     return 0;
	
	
	
		
}
