/*
Desenvolva um programa que implemente um vetor dinâmico para armazenamento
de números inteiros, com as seguintes funções básicas:

1- Cadastrar número;
2- Exibir número(s) cadastrados;
3- Exibir quantidade de números cadastrados;
4- Remover último número cadastrado;
5- Sair.
*/

#include <stdio.h>
#include<stdlib.h>


//Opcao 1
int cadastrarnumero(int *v, int n)
{
	int *v; //definindo o ponteiro v
  	int i, num_componentes;
  
  	printf("Informe o numero de componentes do vetor: \n");
  	scanf("%d", &n);
		
	v = (int *) malloc(n * sizeof(int));
	
	for (i = 0; i < n; i++)
	for (i = 0; i < n; i++)
  	{
    	printf("\nDigite o valor para a posicao %d do vetor: ", i+1);
    	scanf("%i",&v[i]);
  	}

		
}


//Opcao 2
int exibir(int *v)
{
	printf("\nExibir numeros:\n");
	
}


//Opcao 3
int exibirquant(int *v)
{	
	printf("\nQuantidade de numeros cadastrados:\n");
	

	
	
}


//Opcao 4
int removerult(int *vvetor)
{
	
	
}

/*-------------------------------------------------------------------*/

int main()
{
	int op; //opcoes do menu
	int *vetor = NULL; //define o ponteiro de vetor
	
	
	do
	{
		printf("\n***Menu***\n");
		printf("1- Cadastrar numero\n");
		printf("2- Exibir numero(s) cadastrados\n");
		printf("3- Exibir quantidade de numeros cadastrados\n");
		printf("4- Remover ultimo numero cadastrado\n");
		printf("5- Sair\n");
		printf("Escolha umas das opcoes acima: ");

		scanf("%d", &op);
		
		switch(op)
		{
			case 1:
				cadastrarnumero(vetor);
				break;
				
			case 2:
				exibir(vetor);
				break;
				
			case 3:
				exibirquant(vetor);
				break;
			
			case 4:
				removerult(vetor);
				break;
				
			case 5:
				system("pause");
				printf("Saindo  do programa...");
				exit(0);
				break;
		}
	}
	while(op);
	
	return(0);
}
