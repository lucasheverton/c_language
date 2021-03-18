# include <stdio.h>
# include <conio.h>
# include <locale.h>

/*
Programa que calcula a comissão de um funcionário e exbe se ele é o funcionário do mês
Lucas Heverton
*/

int main () { 
    setlocale (LC_ALL, "Portuguese");
    
    printf ("Programa: Funcionário do Mês\n\n\n\n");
    
	char nomef[30];
    float sf, vnm, com, st;
    
    printf ("Digite o nome do funcionário: ");
    scanf ("\n%s", &nomef);
    printf ("\nDigite o Salário fixo deste funcionário: ");
    scanf ("%f", &sf);
    printf ("\nDigite as vendas do mês: ");
    scanf ("%f", &vnm);
    
    com = vnm * 15/150;
    st = com + sf;
    
    printf ("\nSr.:  %s", nomef);
    printf ("\nSeu saláro fixo é %.2f", sf);
    printf ("\nSua comissão é %.2f: ", com);
    printf ("\nO salário total é %.2f: ", st);

    getch ();
    return 0;
}
