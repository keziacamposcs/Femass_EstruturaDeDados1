//Bibliotecas
#include <stdio.h>
#include<stdlib.h>
#include "ex6.h"

//Opcao 1 - Cadastrar livro
Cadastro* cadastrar_livro(Cadastro *l, int *n)
{
	if(n == 0)
	{
		l = (Cadastro*) malloc(sizeof(Cadastro));
	}
	else
	{
		l = (Cadastro*) realloc(l, (*n + 1) * sizeof(Cadastro));
	}
	
	printf("\nInforme nome: ");
	scanf("%s", &l[*n].nome);
	
	printf("\n Informe cod:");
	scanf("%s", &l[*n].codigo);
	
	printf("\nInforme autor:");
	scanf("%s", &l[*n].autor);

	printf("\nInforme ano pub:");
	scanf("%s", &l[*n].ano);
	
	*n = *n + 1;
	
	printf("\nCadastro efetuado!\n");
	return l;

}

//Opcao 2 - Exibir livro(s) cadastrados
void exibir(Cadastro *l, int n)
{
	printf("\nExibir livros:\n");
	
	for(int i=0; i<n; i++)
	{
		printf("\n%s |", l[i].nome);
		printf("%s |", l[i].codigo);
		printf("%s |", l[i].autor);
		printf("%s\n", l[i].ano);
	}
}
