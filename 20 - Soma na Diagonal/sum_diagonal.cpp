# include <stdio.h>
# include <conio.h>

#define N 3

/*
Programa que faz a soma na diagonal de um array
Lucas Heverton
*/

int main () { 
    int matriz [N] [N];
    int linha, coluna, soma;
    printf ("Soma diagonal\n");
    
    soma = 0;
    for (linha = 0; linha < N; linha ++)
       for (coluna = 0; coluna < N; coluna ++) {
       	scanf ("%d", &matriz [linha] [coluna]);
       	if (linha == coluna)
       	    soma = soma + matriz [linha] [coluna];
	   }

    printf ("\n\nSoma = %d\n", soma);
    
    getch ();
    return 0;
}
