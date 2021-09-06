/*
Desenvolva um programa que implemente um vetor dinamico para armazenamento
de numeros inteiros, com as seguintes funcoes basicas:

1- Cadastrar numero;
2- Exibir numero(s) cadastrados;
3- Exibir quantidade de numeros cadastrados;
4- Remover ultimo numero cadastrado;
5- Sair.
*/

//Bibliotecas
#include <stdio.h>
#include<stdlib.h>
#include "ex3.h"

//Menu 
int main() 
{
	int op; //opcoes do menu
	int *vetor = NULL; //define o ponteiro de vetor
	int n_comp = 0; //n de componentes do vetor
    
	do
	{
		printf("\n***Menu***\n");
		printf("1- Cadastrar numero;\n");
		printf("2- Exibir numero(s) cadastrados;\n");
		printf("3-  Exibir quantidade de numeros cadastrados;\n");
		printf("4- Remover ultimo numero cadastrado\n");
		printf("5- Sair\n");
		printf("Escolha umas das opcoes acima: ");

		scanf("%d", &op);
		
		switch(op)
		{
			case 1:
				vetor = cadastrarnumero(vetor, &n_comp);
				break;
				
			case 2:
				exibir(vetor, n_comp);
				break;
				
			case 3:
				exibirquant(n_comp);
				break;
			
			case 4:
				removerult(vetor, &n_comp);
				break;
				
			case 5:
				system("pause");
				printf("Saindo  do programa...");
				exit(0);
				break;
		}
	}
	while(op);
	
	return 0;
}
