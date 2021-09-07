/*
Desenvolva   uma   solucao   prototipada   para   
um   programa   para biblioteca,capaz de manipular (ler/escrever)
um arquivo com as informacoes de livros,prevendo os comandos e acoes
*/

//Bibliotecas
#include <stdio.h>
#include<stdlib.h>
#include "ex6.h"

//Menu 
int menu()
{
	system("cls");
	int op;
	printf("***Menu***\n");
	printf("1 - Cadastrar livro;\n");
	printf("2 - Consultar todos os livros;\n");
	printf("3 - Sair\n");
	printf("Escolha umas das opcoes acima: ");
	scanf("%d", &op);
	return op;
}

int main() 
{
	int op; //opcoes do menu
	Cadastro *livro = NULL; //define o ponteiro de vetor
	int n_comp = 0; //n de componentes do vetor
    
	do
	{
		op = menu();
		switch(op){
			case 1:
				livro = cadastrar_livro(livro, &n_comp);
				break;
				
			case 2:
				exibir(livro, n_comp);
				system("PAUSE");
				break;
				
			case 3:
				printf("Saindo  do programa...\n");
				system("PAUSE");
				break;
				
			default:
				system("cls");
				printf("Voce digitou %d. Opcao invalida.", op);
				system("PAUSE");
		}
	}
	while(op != 3);
	
	return 0;
}
