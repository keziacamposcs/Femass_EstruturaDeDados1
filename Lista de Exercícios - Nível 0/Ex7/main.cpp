/*
Evolua  a  questao  (5),  cadastro  de  usuarios,  de  modo  a  manter  um  arquivo  
em  disco com  as  informacoes  de  usuarios recentemente  manipulados,  permitindo
abertura futura  pelo  programa  via  adicao  de  um  comando  de  menu:
"Carregar base  de  dados do arquivo"
(assim, tais informacoes serao armazenadas em memoria 
dinamica, como disposto na questao (5)).
*/

//Bibliotecas
#include <stdio.h>
#include<stdlib.h>
#include "ex7.h"

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
	printf("5 - Carregar base  de  dados do arquivo\n");
	printf("6 - Sair\n");

	printf("Escolha umas das opcoes acima: ");
	scanf("%d", &op);
	return op;
}

int main() 
{
	int op; //opcoes do menu
	Cadastro *usuario = NULL; //define o ponteiro de vetor
	int n_comp = 0; //n de componentes do vetor
    
    
    
/*----- Abrindo arquivo -----*/
    FILE *arq; //declaracao do arquivo
	char ch;

	if ((arq = fopen("arquivo.txt","r")) == NULL)
	{
		printf("Erro na abertura do arquivo\n"); 
		return -1;
	}
/*----- Fim da abertura arquivo -----*/
    
    
    
    //Execucao do menu
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
				usuario = arquivo(usuario, &n_comp, arq);
				system("PAUSE");
				break;
				
			case 6:
				printf("Saindo  do programa...\n");
				system("PAUSE");
				break;
				
			default:
				system("cls");
				printf("Voce digitou %d. Opcao invalida.", op);
				system("PAUSE");
		}
	}
	while(op != 6);
	
	fclose (arq); //fecha o arquivo

	return 0;
}

