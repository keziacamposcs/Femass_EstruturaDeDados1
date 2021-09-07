#include <stdio.h>
#include<stdlib.h>
#include "Ex3.h"

//Opcao 1 - Cadastrar numero
int* cadastrarnumero(int *vvetor, int *n)
{
	if(n == 0)
	{
		vvetor = (int*) malloc(sizeof(int));
	}
	else
	{
		vvetor = (int*) realloc(vvetor, (*n + 1) * sizeof(int));
	}
	
	printf("\nCadastrar numero: ");
	scanf("%d", &vvetor[*n]);
	
	*n = *n + 1;
	
	return vvetor;

}

//Opcao 2 - Exibir numero(s) cadastrados
void exibir(int *vvetor, int n)
{
	printf("\nExibir numeros:\n");
	
	for(int i=0; i<n; i++)
	{
		printf("%d\n", vvetor[i]);
	}
}

//Opcao 3 - Exibir quantidade de numeros cadastrados
void exibirquant(int n)
{	
	printf("\nQuantidade de numeros cadastrados: %d\n", n);
}



//Opcao 4 - Remover ultimo numero cadastrado
int* removerult(int* vvetor, int *n)
{
	if(*n > 0)
	{
		vvetor = (int*) realloc(vvetor, (*n - 1) * sizeof(int));
		*n = *n - 1;
		printf("Elemento removido com sucesso.\n");
	}
	else
	{
		printf("Nao existe numero para ser removido.\n");
	}
	return vvetor;
}
