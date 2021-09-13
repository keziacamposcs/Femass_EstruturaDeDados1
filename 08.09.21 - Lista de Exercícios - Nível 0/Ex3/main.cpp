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
#include "Ex3.h"

int menu()
{
	system("cls");
	int op;
	printf("***Menu***\n");
	printf("1 - Cadastrar numero;\n");
	printf("2 - Exibir numero(s) cadastrados;\n");
	printf("3 - Exibir quantidade de numeros cadastrados;\n");
	printf("4 - Remover ultimo numero cadastrado\n");
	printf("5 - Sair\n");
	printf("Escolha umas das opcoes acima: ");
	scanf("%d", &op);
	return op;
}

//Menu 
int main() 
{
	int op; //opcoes do menu
	int *vetor = NULL; //define o ponteiro de vetor
	int n_comp = 0; //n de componentes do vetor
    
	do
	{
		op = menu();
		switch(op){
			case 1:
				vetor = cadastrarnumero(vetor, &n_comp);
				break;
				
			case 2:
				exibir(vetor, n_comp);
				system("PAUSE");
				break;
				
			case 3:
				exibirquant(n_comp);
				system("PAUSE");
				break;
			
			case 4:
				vetor = removerult(vetor, &n_comp);
				system("PAUSE");
				break;
				
			case 5:
				printf("Saindo  do programa...\n");
				system("PAUSE");
				break;
				
			default:
				system("cls");
				printf("Voce digitou %d. Opcao invalida.", op);
				system("PAUSE");
		}
	}
	while(op != 5);
	
	return 0;
}
