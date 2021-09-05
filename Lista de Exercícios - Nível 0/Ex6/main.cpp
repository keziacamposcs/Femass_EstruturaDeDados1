/*
Desenvolva uma solucao prototipada para um programa para
biblioteca, capaz de manipular (ler/escrever) um arquivo com as informacoes de livros,
prevendo os comandos e acoes:
Tela principal:
1- Cadastrar livro
2- Consultar todos os livros
3- Sair
*/

#include <stdlib.h>
#include <stdio.h>
#include "biblioteca.h"


int main()
{
	int op;
	
	do
	{
		printf("\n***Menu***\n");
		printf("1- Cadastrar livro\n");
		printf("2- Consultar todos os livros\n");
		printf("3- Sair\n");
		printf("Escolha umas das opcoes acima: ");
		
		scanf("%d", &op);
		
		
		switch(op)
		{
			case 1:
				cadastro(vetor);
				break;
				
			case 2:
				consulta(vetor);
				break;
				
			case 3:
				system("pause");
				printf("Encerrando o programa...");
				exit(0);
				break;
		}
	}
	while(op);
	return(0);
}
