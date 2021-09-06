#include <stdio.h>
#include<stdlib.h>
#include "ex5.h"

int main()
{
	int op; //opcoes do menu
	Cadastro *u = NULL; //define o ponteiro de vetor
	int n_comp = 0; //n de componentes do vetor
  
	
	do
	{
		printf("\n***Menu***\n");
		printf("1- Cadastrar usuarios\n");
		printf("2- Exibir numero(s) de usuarios cadastrados\n");
		printf("3- Exibir quantidade de usuarios cadastrados\n");
		printf("4- Remover ultimo usuario cadastrado\n");
		printf("5- Sair\n");
		printf("Escolha umas das opcoes acima: ");

		scanf("%d", &op);
		
		switch(op)
		{
			case 1:
				u = cadastrarusuario(u , &n_comp);
				break;
				
			case 2:
				exibir(u, n_comp);
				break;
				
			case 3:
				exibir_quant(n_comp);
				break;
			
			case 4:
				u = removerult(u, &n_comp);
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

