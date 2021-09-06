/*
4- Evolua o programa na quest�o (1) com o intuito de simular uma �m�quina de escrever
com mapa de decimal ASCII compat�vel�. Logo, considere as regras:

a. O programa iniciar� em loop, de modo a permitir que o usu�rio digite o texto
que quiser, incluindo quebras de linhas e espa�os. Assim, finalizar� quando
digitar a tecla ESC.

b. Cada caractere digitado dever� ser armazenado em uma �matriz de
caracteres�.

c. Uma �matriz de decimais ASCII� dever� ser constru�da a partir da �matriz de
caracteres� e exibida para o usu�rio. Exiba ambas as matrizes com o controle
de linha e coluna iniciando em zero, formatadas em tela via tabula��o.

d. As matrizes citadas dever�o ser din�micas, alocadas conforme a demanda.
*/

#include<stdio.h>
#include<conio.h>
#include "Ex4.h"

int main ()
{
    char caractere;
    char texto;
    int esc;
    int n_comp=0;
    
    
	printf("Digite um texto ou a tecla ESC para encerrar:\n");
	while(esc!=27)
	{
	    caractere = getch();
	
	    esc = getch();
	    
	    matriz_ascii(caractere, &n_comp);
	    matriz_caractere(caractere, &n_comp);
	}
	
	printf("\nFim de programa, tecla ESC foi pressionada!");
    
	return(0);

}

