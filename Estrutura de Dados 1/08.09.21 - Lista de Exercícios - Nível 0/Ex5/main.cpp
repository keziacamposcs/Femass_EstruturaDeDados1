/*
Evolua a questao (3) para cadastrar usuarios que possuem as informacoes: Nome, RG, CPF, Endereco.
*/

//Bibliotecas
#include <stdio.h>
#include<stdlib.h>
#include "ex5.h"

//Menu 
int menu()
{
	system("cls");
	int op;
	printf("***Menu***\n");
	printf("1 - Cadastrar usuario;\n");
	printf("2 - Exibir usuario(s) cadastrados;\n");
	printf("3 - Exibir quantidade de usuario cadastrados;\n");
	printf("4 - Remover ultimo usuario cadastrado\n");
	printf("5 - Sair\n");
	printf("Escolha umas das opcoes acima: ");
	scanf("%d", &op);
	return op;
}

int main() 
{
	int op; //opcoes do menu
	Cadastro *usuario = NULL; //define o ponteiro de vetor
	int n_comp = 0; //n de componentes do vetor
    
	do
	{
		op = menu();
		switch(op){
			case 1:
				usuario = cadastrarusuario(usuario, &n_comp);
				break;
				
			case 2:
				exibir(usuario, n_comp);
				system("PAUSE");
				break;
				
			case 3:
				exibirquant(n_comp);
				system("PAUSE");
				break;
			
			case 4:
				usuario = removerult(usuario, &n_comp);
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
