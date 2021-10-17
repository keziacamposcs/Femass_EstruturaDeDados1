#include "lista_simples_circular.h"

int menu()
{
	system("cls");
	int op;
	printf("***Menu***\n");
	printf("1 - Insercao de elementos no inicio;\n");
	printf("2 - Insercao de elementos no fim;\n");
	printf("3 - Imprime valores dos elementos;\n");
	printf("4 - Retira elemento da lista\n");
	
	//continuacao
	printf("5 - Busca um elemento na lista;\n");
	printf("6 - Retorna tamanho de nos-dado;\n");
	printf("7 - Remove no-dado inicial;\n");
	printf("8 - Remove no-dado fim;\n");
	printf("9 - Imprimi no-dado no inicio da Lista\n");
	printf("10 - Imprimi no-dado no fim da Lista\n");
	printf("11 - Sair\n");
	
	printf("Escolha umas das opcoes acima: ");
	scanf("%d", &op);
	return op;
}


int main(int argc, char** argv) 
{
	Lista* l; /* declara uma lista nao inicializada */
	
 	l = inicializa(); /* inicializa lista como vazia */
 	
 	int i; //elemento para inserir
	int num; //vetor ja inserido
	int op;
	
	do
	{
		op = menu();
		
		switch(op)
		{
			case 1:
				printf( "Numero para inserir no inicio: ");
				scanf( "%d", &i );
			
				l = insere_inicio(l, i); /* insere na lista o elemento l */
				
				system("PAUSE");
				break;
		
		
			case 2:
				printf( "Numero para inserir no fim: ");
				scanf( "%d", &i );
			
				l = insere_fim(l, i); /* insere na lista o elemento l */
				
				system("PAUSE");
				break;
				
				
			case 3:
				imprime(l); /* imprimir*/
				system("PAUSE");
				break;
				
				
			case 4:
				imprime(l);				
				
				printf( "Numero para retirar na lista: ");
				scanf( "%d", &num );
				
				l = retira(l, num);
				imprime(l);
				libera(l);

				system("PAUSE");
				break;
			
			
			//continuacao
			case 5:
				printf( "Digite um numero para verificar suas ocorrencias: ");
				scanf( "%d", &num);
				
				busca_dado(l, num);

				system("PAUSE");
				break;	
			
			
			case 6:
				size(l);
				
				system("PAUSE");
				break;
				
				
			case 7:
				l = remove_inicio(l);
	
				system("PAUSE");
				break;	
				
				
			case 8:
				l = remove_fim(l);
								
				system("PAUSE");
				break;		
				
				
			case 9:
				imprime_inicio(l); /* imprimir*/
				system("PAUSE");
				break;
				
				
			case 10:
				imprime_fim(l); /* imprimir*/
				system("PAUSE");
				break;
								
				
			case 11:
				printf("Saindo  do programa...\n");
				system("PAUSE");
				break;
			
				
			default:
				system("cls");
				printf("Voce digitou %d. Opcao invalida.", op);
				system("PAUSE");
		}
	}
	
	while(op != 11);
	return 0;
	
}
