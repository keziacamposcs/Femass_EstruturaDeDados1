/*
Evolua o programa na questão (1) com o intuito de simular uma “máquina de escrever
com mapa de decimal ASCII compatível”. Logo, considere as regras:

a. O programa iniciará em loop, de modo a permitir que o usuário digite o texto
que quiser, incluindo quebras de linhas e espaços. Assim, finalizará quando
digitar a tecla ESC.

b. Cada caractere digitado deverá ser armazenado em uma “matriz de
caracteres”.

c. Uma “matriz de decimais ASCII” deverá ser construída a partir da “matriz de
caracteres” e exibida para o usuário. Exiba ambas as matrizes com o controle
de linha e coluna iniciando em zero, formatadas em tela via tabulação.

d. As matrizes citadas deverão ser dinâmicas, alocadas conforme a demanda.
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
