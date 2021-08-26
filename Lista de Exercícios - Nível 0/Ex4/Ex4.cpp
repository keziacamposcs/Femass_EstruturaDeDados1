/*
Evolua o programa na questao (1) com o intuito de simular uma maquina de escrever
com mapa de decimal ASCII compativelù. Logo, considere as regras:

a. O programa iniciara em loop, de modo a permitir que o usuario digite o texto
que quiser, incluindo quebras de linhas e espacos. Assim, finalizara quando
digitar a tecla ESC.

b. Cada caractere digitado devera ser armazenado em uma e matriz de
caracteres.

c. Uma matriz de decimais ASCIIù devera ser construida a partir da e matriz de
caracteresù e exibida para o usuario. Exiba ambas as matrizes com o controle
de linha e coluna iniciando em zero, formatadas em tela via tabulacao.

d. As matrizes citadas deverao ser dinamicas, alocadas conforme a demanda.

*/

#include<stdio.h>
#include<conio.h>
#include<string.h>


//FunÁ„o
int matriz(int *let)
{
	int linha, coluna;
	int let[][];

	for (linha = 0; linha < 4; linha++) {
	 for (coluna = 0; coluna < 10; coluna++) 
	 {
	 	printf("%d ", [linha][coluna]);
	 }
	 printf("\n");
	} 
}




int main ()
{
    char frase;
    int esc;
    
    char *fr=NULL;

	while(esc!=27)
	{
		printf("\n\nDigite a frase: \n");
	    frase=getch();
	
	    printf ("Caractere: %c  |  Dec. ASCII: %d \n\n Pressione ESC para finalizar o programa. \n",frase,frase);
	    esc = getch();
	    
	    //FunÁ„o 
	    matriz(frase);
	}
	
	printf("\nFim de programa, tecla ESC foi pressionada!");
    
	return(0);

}
