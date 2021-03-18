# include <stdio.h>
# include <conio.h>
# include <stdlib.h>
# include <math.h>
# include <locale.h>

# define T 15

/*
Programa que divide 15 números no array
Lucas Heverton
*/

int main () {
	setlocale (LC_ALL, "Portuguese");
	printf ("Programa: vetor 15\n\n");
	float vetor [T];
	int i;
	
	printf ("\nDigitação dos valores do vetor");
	for (i = 0; i < T; i++ )
       scanf ("%f", &vetor [i]);
    for (i = 0; i < T; i++ ) {
       printf ("%0.1f", vetor [T]);
       vetor [i] = vetor [i] / 2;
       
    }
	printf ("\nValores atuais no vetor");
	
	for (i = 0; i < T; i++)
    printf ("\n\n%0.1f", vetor [i]);
	
	getch ();
	return 0;       
	
}
