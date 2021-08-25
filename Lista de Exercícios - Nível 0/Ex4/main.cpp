/*
Evolua o programa na quest�o (1) com o intuito de simular uma �m�quina de escrever
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

int main ()
{
    char letra[][];
    int esc;

	while(esc!=27)
	{
		printf("\n\nDigite tecla: \n");
	    **letra=getch();
	
	    printf ("Caractere: %c  |  Dec. ASCII: %d \n\n Pressione ESC para finalizar o programa. \n",**letra,**letra);
	    esc = getch();
	}
	
	printf("\nFim de programa, tecla ESC foi pressionada!");
    
	return(0);

}
