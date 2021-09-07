/*
Faca um programa capaz de armazenar um vetor de 10 numeros inteiros, informados
aleatoriamente pelo usuario. Apos isso, o programa devera apresentar um menu que
permita as seguintes funcoes: 
1) Exibir vetor informado; 
2) Exibir elementos impares armazenados no vetor; 
3) Exibir elementos pares no vetor; 
4) Encerrar o programa.

Obs.: O vetor de numeros devera ser estatico de 10 posicoes de inteiros, e as funcoes
de exibicao par e impar deverao ser implementadas por passagem de parametros por
referencia (moduladas a criterio).
*/

#include <stdio.h>
#include<stdlib.h>



//Opcao 1
int vetorinfo(int *vvetor)
{
	int i;
	printf("\nVetores Informados\n");
	for (i=0; i<10; i++)
	{
		printf("\n%d\n", vvetor[i]);
	}
}


//Opcao 2
int exibirimpar(int *vvetor)
{
	int i;
	
	printf("\nVetores Informados em Impar:\n");
	
	for (i=0; i<10; i++)
	{
		if(vvetor[i]%2!=0)
		{
			printf("\n%d\n", vvetor[i]);
		}
		
	}
}


//Opcao 3
int exibirpar(int *vvetor)
{
	int i;
	
	printf("\nVetores Informados em Impar:\n");
	
	for (i=0; i<10; i++)
	{
		if(vvetor[i]%2==0)
		{
			printf("\n%d\n", vvetor[i]);
		}
		
	}
}

/*-------------------------------------------------------------------*/
int main()
{
	int op;
	int vetor[10];
	int i;
 
	for (i = 0; i <10; i++)
	{
		printf("Digite os vetores: ");
	    scanf("%d", &vetor[i]);
	}
	
	do
	{
		printf("\n***Menu***\n");
		printf("1) Exibir vetor informado\n");
		printf("2) Exibir elementos impares armazenados no vetor\n");
		printf("3) Exibir elementos pares no vetor\n");
		printf("4) Encerrar o programa.\n");
		printf("Escolha umas das opcoes acima: ");

		scanf("%d", &op);
		
		switch(op)
		{
			case 1:
				vetorinfo(vetor);
				system("PAUSE");
				break;
				
			case 2:
				exibirimpar(vetor);
				system("PAUSE");
				break;
				
			case 3:
				exibirpar(vetor);
				system("PAUSE");
				break;
				
			case 4:
				printf("Encerrando o programa...");
				system("PAUSE");
				exit(0);
				break;

			default:
				system("cls");
				printf("Voce digitou %d. Opcao invalida.", op);
				system("PAUSE");
		}
	}
	while(op != 4);
	
	return(0);
}

