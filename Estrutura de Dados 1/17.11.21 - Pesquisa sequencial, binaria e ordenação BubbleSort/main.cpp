#include "lista.h"

int menu()
{
	system("cls");
	int op;
	printf("***Menu***\n");
	printf("1 - Insere inicio;\n");
	printf("2 - Insere fim;\n");
	printf("3 - Imprime;\n");
	printf("4 - Busca sequencial;\n");
	printf("5 - Busca binaria;\n");
	printf("6 - Ordena BubbleSort;\n");
	printf("7 - Sair\n");
	printf("Escolha umas das opcoes acima: ");
	scanf("%d", &op);
	return op;
}

int main(int argc, char** argv) 
{
	Lista* l; /* declara uma lista nao inicializada */
	
 	l = inicializa(); /* inicializa lista como vazia */
 	
 	int v;
	int num;
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
				
				system("PAUSE");
				break;
				
			case 4:
				printf( "Digite um numero para busca sequencial na lista: ");
				scanf( "%d", &num);
				
				busca_sequencial(l, num);
				
				system("PAUSE");
				break;
				
			case 5:
				printf( "Digite um numero para busca sequencial na lista: ");
				scanf( "%d", &v);
				
				busca_binaria(l);
				
				system("PAUSE");
				break;
				
			case 6:
				l = ordena_bubblesort(l);
				
				system("PAUSE");
				break;								
		}
	}
	while(op != 7);
	return 0;
}
