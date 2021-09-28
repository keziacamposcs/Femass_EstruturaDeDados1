#include "Lista.h"


int menu()
{
	system("cls");
	int op;
	printf("***Menu***\n");
	printf("1 - Insercao de elementos no inicio;\n");
	printf("2 - Imprime valores dos elementos;\n");
	printf("3 - Busca um elemento na lista;\n");
	printf("4 - Retira elemento da lista\n");
	//continuacao
	printf("5 - Retornar o no-dado no inicio da lista para exibicao, sem retira-lo\n");
	printf("6 - Retornar o no-dado no fim da lista para exibicao, sem retira-lo\n");
	printf("7 - Retorna um valor inteiro representando a quantidade de dados contidos na lista\n");
	printf("8 - Retorna o numero de ocorrencias\n");
	printf("9 - Devera inserir um novo no-dado no fim da lista\n");
	printf("10 - Remove no-dado no inicio da Lista\n");
	printf("11 - Remove no-dado no fim da Lista\n");
	printf("12 - Sair\n");
	
	printf("Escolha umas das opcoes acima: ");
	scanf("%d", &op);
	return op;
}



int main(int argc, char** argv)
{
	Lista* l = inicializa();
	
	int i; //elemento para inserir
	int num; //vetor ja inserido
	int op;
	
	do
	{
		op = menu();
		
		switch(op)
		{
			case 1:
				printf( "Numero para inserir: ");
				scanf( "%d", &i );
			
				l = insere_inicio(l, i); /* insere na lista o elemento l */
				
				system("PAUSE");
				break;
			
			case 2:
				imprime(l); /* imprimir*/
				system("PAUSE");
				break;

			case 3: 
				printf( "Numero para inserir: ");
				scanf( "%d", &num);
				
				busca_informe (l, num);
				
				system("PAUSE");
				break;
			
			case 4:
				imprime(l);
				l = retira(l, num);
				imprime(l);
				libera(l);
				
				system("PAUSE");
				break;
				
//Continuacao

			case 5:
 				mostrainicio(l);
				
				system("PAUSE");
				break;
				
				
			case 6:
				mostrafim(l);
				
				system("PAUSE");
				break;
				
				
			case 7:
				tamanho(l);
				
				system("PAUSE");
				break;
				
				
			case 8:
				printf( "Digite um numero para verificar suas ocorrencias: ");
				scanf( "%d", &num);
				
				ocorrencias(l, num);

				system("PAUSE");
				break;
				
				
			case 9:
				printf( "Numero para inserir: ");
				scanf( "%d", &num);
				
				l=inserefim(l, num);
				
				system("PAUSE");
				break;
				
				
			case 10:
				l = removeinicio(l);
								
				system("PAUSE");
				break;				


			case 11:
				l = removefim(l);

				system("PAUSE");
				break;	
					
						
			case 12:
				printf("Saindo  do programa...\n");
				system("PAUSE");
				break;
			
				
			default:
				system("cls");
				printf("Voce digitou %d. Opcao invalida.", op);
				system("PAUSE");
		}
	}
	while(op != 12);
	return 0;
}
