# include <stdio.h>
# include <conio.h>
# include <locale.h>

/*
Programa que calcula a comiss�o de um funcion�rio e exbe se ele � o funcion�rio do m�s
Lucas Heverton
*/

int main () { 
    setlocale (LC_ALL, "Portuguese");
    
    printf ("Programa: Funcion�rio do M�s\n\n\n\n");
    
	char nomef[30];
    float sf, vnm, com, st;
    
    printf ("Digite o nome do funcion�rio: ");
    scanf ("\n%s", &nomef);
    printf ("\nDigite o Sal�rio fixo deste funcion�rio: ");
    scanf ("%f", &sf);
    printf ("\nDigite as vendas do m�s: ");
    scanf ("%f", &vnm);
    
    com = vnm * 15/150;
    st = com + sf;
    
    printf ("\nSr.:  %s", nomef);
    printf ("\nSeu sal�ro fixo � %.2f", sf);
    printf ("\nSua comiss�o � %.2f: ", com);
    printf ("\nO sal�rio total � %.2f: ", st);

    getch ();
    return 0;
}
