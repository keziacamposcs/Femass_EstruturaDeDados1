#include "Lista.h"


int menu()
{
	system("cls");
	int op;
	printf("***Menu***\n");
	printf("1 - Inserção de elementos no início;\n");
	printf("2 - Imprime valores dos elementos;\n");
	printf("3 - Busca um elemento na lista;\n");
	printf("4 - Retira elemento da lista\n");
	printf("5 - Retornar o nó-dado no início da lista para exibição, sem retirá-lo\n");
	printf("4 - Retira elemento da lista\n");
	printf("4 - Retira elemento da lista\n");

	printf("5 - Sair\n");
	printf("Escolha umas das opcoes acima: ");
	scanf("%d", &op);
	return op;
}



int main(int argc, char** argv)
{
	Lista* l = inicializa();
	int numero;
	int op;
	do
	{
		op = menu();
		switch(op)
		{
			case 1:
				printf( "Numero para inserir: " );
				scanf( "%d", &numero );
				l = insere_inicio(l, numero); /* insere na lista o elemento 23 */
				system("PAUSE");
				break;
			
			case 2:
				imprime(l); /* imprimirá: 78 56 45 23 */
				system("PAUSE");
				break;

			case 3: 
				busca_informe (l, numero);
				system("PAUSE");
				break;
			
			case 4:
				imprime(l);
				l = retira(l, numero);
				imprime(l);
				libera(l);
				system("PAUSE");
				break;

	
	
		
	//Continuacao
	mostrainicio(l);
	mostrafim(l);
	
			case 5:
				printf("Saindo  do programa...\n");
				system("PAUSE");
				break;
				
			default:
				system("cls");
				printf("Voce digitou %d. Opcao invalida.", op);
				system("PAUSE");
		}
	}
	while(op != 5);
	return 0;
}
