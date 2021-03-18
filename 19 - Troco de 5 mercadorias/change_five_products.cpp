# include <stdio.h>
# include <stdlib.h>
# include <math.h>
# include <conio.h>
# include <locale.h>

/*
Programa caixa de mercado, mostra os produtos o valor da compra e o troco que o cliente tem que receber.
Lucas Heverton
*/

int main ( ) {
    setlocale (LC_ALL, "Portuguese");
    
    printf ("Programa: troco.c\n\n");
	
	float vl_prod, soma, pago, troco;
	int i;
    soma = 0;
     
	for (i = 1 ; i <=5 ; i++) {
         printf ("\nDigite o valor do produto: ");
          scanf ("%f", &vl_prod);
          soma = soma + vl_prod;   	
      }
    printf ("\nTotal da Compra R$ %.2f\n", soma);
     do {
         printf ("\nRecebido R$ ");
         scanf ("%f", &pago);
        if (pago >= soma) {
             troco = pago - soma;
             printf ("\nTroco R$ %.2f\n", troco);
		}
        else
           printf ("\nValor Insuficiente");
            
    } while (pago <= soma);
    
    getch ();
    return 0;
}
