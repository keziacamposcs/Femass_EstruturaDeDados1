/*
Desenvolva um programa que implemente um vetor dinamico para armazenamento
de numeros inteiros, com as seguintes funcoes basicas:

1- Cadastrar numero;
2- Exibir numero(s) cadastrados;
3- Exibir quantidade de numeros cadastrados;
4- Remover ultimo numero cadastrado;
5- Sair.
*/

#include <stdio.h>
#include<stdlib.h>


//Opcao 1 - Cadastrar numero
int cadastrarnumero(int *v, int *n)
{
	if(n == 0)
	{
		v = (int*) malloc(sizeof(int));
		
		printf("\nCadastrar numero: ");
		scanf("%d", v[0]);

	}
	else
	{
		v = (int*) realloc(v, (*n + 1) * sizeof(int));
		
		printf("\nCadastrar numero: ");
		scanf("%d", v[0]);
	}
	
	*n = *n +1;
	return v;

}


//Opcao 2 - Exibir numero(s) cadastrados
void exibir(int *vvetor, int n)
{
	printf("\nExibir numeros:\n");
	
	for(int i=0; i<n; i++)
	{
		printf("%d\n"), vvetor[i];
	}
	
}


//Opcao 3 - Exibir quantidade de numeros cadastrados
void exibirquant(int n)
{	
	printf("\nQuantidade de numeros cadastrados: %d\n", n);
}



//Opcao 4 - Remover ultimo numero cadastrado
int removerult(int *vvetor, int *n)
{
	free(vvetor);
	vvetor = NULL;
	*n = *n - 1; //Atualiza o numero de componente do vetor
}



/*-------------------------------------------------------------------*/
