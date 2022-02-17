#include "lista.h"

int menu()
{
	system("cls");
	int op;
	printf("***Menu***\n");
	printf("1 - Insere inicio;\n");
	printf("2 - Insere fim;\n");
	printf("3 - Imprime valores dos elementos;\n");
	printf("4 - Remove dado inicial;\n");
	printf("5 - Remove dado fim;\n");
	printf("6 - Remove elemento desejado da lista\n");
	printf("7 - Imprimi frente-fim da Lista\n");
	printf("8 - Imprimi reverso da Lista\n");
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

			case 2:
				printf( "Numero para inserir no fim: ");
				scanf( "%d", &v );
				
				l = insere_fim(l, v);
				
				system("PAUSE");
				break;
				
			case 3:
				imprime(l); 
				printf("\n");
				
				system("PAUSE");
				break;		

			case 4:
				l = remove_inicio(l);
	
				system("PAUSE");
				break;	
						
			case 5:
				l = remove_fim(l);
								
				system("PAUSE");
				break;
				
			case 6:
				printf( "Digite um numero para remover: ");
				scanf( "%d", &v );
				
				l = remove_valor(l, v);
				
				system("PAUSE");
				break;
				
			case 7:
				imprime_frente_fim(l);
				
				system("PAUSE");
				break;
				
			case 8:
				imprime_reverso(l);
				
				system("PAUSE");
				break;
											
				
			default:
				system("cls");
				printf("Voce digitou %d. Opcao invalida.", op);
				system("PAUSE");
		}
	}
	while(op != 9);
	return 0;
}

