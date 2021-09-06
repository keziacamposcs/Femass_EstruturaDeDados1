#include "ex5.h"

//Opcao 1
Usuario* cadastrarusuario(Usuario *u, int *n)
{
	u = (Usuario*) malloc(sizeof(Usuario));
	
	if (u==NULL)
	{
		printf("Nao tem memoria suficiente");
	}
	else
	{
		u = (Usuario*) realloc(u, (*n+1) * sizeof(Usuario));
	}
	
	printf("\nNome:");
	scanf("%s", &u[*n].nome);

	printf("\nRG:");
	scanf("%d", &u[*n].rg);
	
	printf("\nCPF:");
	scanf("%d", &u[*n].cpf);

	printf("\nEndereco:");
	scanf("%s", &u[*n].endereco);
	
	*n = *n + 1;
	return u;
}



//Opcao 2
void exibir(Usuario *u, int n);
{
	printf("\nExibir Usuarios Cadastrados:\n");
	
	for(int i=0; i<n; i++)
	{
		printf("%s\n",u[i].nome);
		printf("%d\n",u[i].rg);
		printf("%d\n",u[i].cpf);
		printf("%s\n",u[i].endereco);
	}
}


//Opcao 3
void exibir_quant(int n)
{	
	printf("\nQuantidade de numeros cadastrados: %d\n", n);
}



//Opcao 4
int removerult(int *u, int *n)
{
	if (u==NULL)
	{
		printf("Nao tem memoria suficiente");
	}
	else if(*n == 1)
	{
		free(u);
		u = NULL;
		*n = *n - 1;
		printf("\nRemovido");
	}
	else{
		u = (Usuario*) realloc(u, (*n) * sizeof(Usuario));
		*n = *n - 1;
		printf("\nNão foi removido");
	}

	return u;
	

	
	free(user);
	user = NULL;
	*n = *n - 1; //Atualiza o numero de componente do vetor
}
