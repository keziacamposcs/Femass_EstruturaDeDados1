#include "lista.h"

int menu()
{
	system("cls");
	int op;
	printf("***Menu***\n");
	printf("1 - Insere ordenado;\n");
	printf("2 - Imprime valores dos elementos;\n");
	printf("3 - Remove dado inicial;\n");
	printf("4 - Remove dado fim;\n");
	printf("5 - Remove elemento desejado da lista\n");
	printf("6 - Imprimi inicio-fim da Lista\n");
	printf("7 - Imprimi fim-inicio da Lista\n");
	printf("8 - Busca elemento na lista;\n");
	printf("9 - Sair\n");
	printf("Escolha umas das opcoes acima: ");
	scanf("%d", &op);
	return op;
}


int main(int argc, char** argv) 
{
	Lista* l; /* declara uma lista nao inicializada */
	
 	l = inicializa(); /* inicializa lista como vazia */
 	
 	int v; //elemento para inserir
	int num; //vetor ja inserido
	int op;
	
	do
	{
		op = menu();
		
		switch(op)
		{
			case 1:
				printf( "Numero para inserir no inicio: ");
				scanf( "%d", &v );
			
				l = insere_inicio(l, v);
				
				system("PAUSE");
				break;
		
/*
			case 2:
				printf( "Numero para inserir no fim: ");
				scanf( "%d", &i );
			
				l = insere_fim(l, i);
				
				system("PAUSE");
				break;
				
			case 3:
				imprime(l); 
				system("PAUSE");
				break;
				
			case 4:
				imprime(l);				
				
				printf( "Numero para retirar na lista: ");
				scanf( "%d", &num );
				
				l = retira(l, num);
				imprime(l);

				system("PAUSE");
				break;
			
			
			case 5:
				printf( "Digite um numero para verificar se esta na lista: ");
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
				

				
			case 10:
				imprime_fim(l);
				system("PAUSE");
				break;
				
			case 11:
				libera(l); 
				system("PAUSE");
				break;				
				
			case 12:
				printf("Saindo  do programa...\n");
				system("PAUSE");
				break;
*/			
				
			default:
				system("cls");
				printf("Voce digitou %d. Opcao invalida.", op);
				system("PAUSE");
		}
	}
	
	while(op != 12);
	return 0;
	
}
