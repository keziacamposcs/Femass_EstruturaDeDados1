//Bibliotecas
#include <stdio.h>
#include<stdlib.h>
#include "ex5.h"

//Opcao 1 - Cadastrar numero
Cadastro* cadastrarusuario(Cadastro *u, int *n)
{
	if(n == 0)
	{
		u = (Cadastro*) malloc(sizeof(Cadastro));
	}
	else
	{
		u = (Cadastro*) realloc(u, (*n + 1) * sizeof(Cadastro));
	}
	
	printf("\nNome: ");
	scanf("%s", &u[*n].nome);
	
	printf("\nRG:");
	scanf("%s", &u[*n].rg);
	
	printf("\nCPF:");
	scanf("%s", &u[*n].cpf);

	printf("\nEndereco:");
	scanf("%s", &u[*n].endereco);
	
	*n = *n + 1;
	
	return u;

}

//Opcao 2 - Exibir numero(s) cadastrados
void exibir(Cadastro *u, int n)
{
	printf("\nExibir numeros:\n");
	
	for(int i=0; i<n; i++)
	{
		printf("%s\n",u[i].nome);
		printf("%s\n",u[i].rg);
		printf("%s\n",u[i].cpf);
		printf("%s\n",u[i].endereco);
	}
}

//Opcao 3 - Exibir quantidade de numeros cadastrados
void exibirquant(int n)
{	
	printf("\nQuantidade de numeros cadastrados: %d\n", n);
}

//Opcao 4 - Remover ultimo numero cadastrado
Cadastro* removerult(Cadastro* u, int *n)
{
	if(*n > 0)
	{
		u = (Cadastro*) realloc(u, (*n - 1) * sizeof(Cadastro));
		*n = *n - 1;
		printf("Elemento removido com sucesso.\n");
	}
	else
	{
		printf("Nao existe numero para ser removido.\n");
	}
	return u;
}

