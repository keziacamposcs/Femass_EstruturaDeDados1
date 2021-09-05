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
  //Armazenando os dados em um vetor
  for (int i = 0; i < *n; i++)
  {
    printf("\nDigite o valor para a posicao %d do vetor: ", i+1);
    scanf("%d",&v[i]);
  }
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

int main()
{
	int op; //opcoes do menu
	int *vetor = NULL; //define o ponteiro de vetor
	int n_comp = 0; //n de componentes do vetor
  
  
  	printf("\nDetermine o tamanho de n: ");
	scanf("%d", &n_comp);
	
	vetor = (int*) malloc (n_comp *sizeof(int));
  
  
	do
	{
		printf("\n***Menu***\n");
		printf("1- Cadastrar numero;\n");
		printf("2- Exibir numero(s) cadastrados;\n");
		printf("3-  Exibir quantidade de numeros cadastrados;\n");
		printf("4- Remover ultimo numero cadastrado\n");
		printf("5- Sair\n");
		printf("Escolha umas das opcoes acima: ");

		scanf("%d", &op);
		
		switch(op)
		{
			case 1:
				cadastrarnumero(vetor, &n_comp);
				break;
				
			case 2:
				exibir(vetor, n_comp);
				break;
				
			case 3:
				exibirquant(n_comp);
				break;
			
			case 4:
				removerult(vetor, &n_comp);
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
