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
int cadastrarnumero(int *vvetor)
{
		for (int i = 0; i <10; i++)
	{
		cout << "Cadastrar numeros: ";
  		cin >> vvetor[i];
		
		/*
		printf("Cadastrar numeros: ");
	    scanf("%d", &vvetor[i]);
	    */
	}
}


//Opcao 2
int exibir(int *vvetor)
{
	int i;
	printf("\nExibir numeros:\n");
	for (i=0; i<10; i++)
	{
		printf("\n%d\n", vvetor[i]);
	}
}


//Opcao 3
int exibirquant(int *vvetor, int num)
{
	int i;
	
	printf("\nQuantidade de numeros cadastrados:\n");
	
	for (i=0; i<num; i++)
	{
		printf("\n%d\n", sizeof(vvetor[i]));
	}
	
	
	 if(num_componentes == 1)
		cout << "Foi cadastrado 1 componente." << endl;
}


//Opcao 4
int removerult(int *vvetor)
{
	int i;
	
	printf("\nRemovendo o ultimo numero cadastrado:\n");
	
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
	int *vetor;
	int i;
	int n;
	
	printf("\nDetermine o tamanho de n: ");
	scanf("%d", &n);
	
	vetor = (int*) malloc (n*sizeof(int));
	
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
				exibirquant(vetor, n);
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
