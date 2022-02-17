//Bibliotecas
#include <stdio.h>
#include<stdlib.h>
#include "ex7.h"

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
	fprintf (&u[*n].nome, sizeof(Cadastro), 50, arq);
	
	printf("\nRG:");
	scanf("%s", &u[*n].rg);
	fprintf (&u[*n].rg, sizeof(Cadastro), 9, arq);

	
	printf("\nCPF:");
	scanf("%s", &u[*n].cpf);
	fprintf (&u[*n].cpf, sizeof(Cadastro),11, arq);


	printf("\nEndereco:");
	scanf("%s", &u[*n].endereco);
	fprintf (&u[*n].endereco, sizeof(Cadastro), 9, arq);
	
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

//Opcao 5 - Carregar base  de  dados do arquivo
Cadastro* arquivo(Cadastro* u, int *n, int a)
{
	for(int i=0; i<n; i++)
	{
		fscanf(a, "%s | %s | %s | %s", &u[i].nome, &u[i].rg &u[i].cpf, &u[i].endereco); 
	}
}

