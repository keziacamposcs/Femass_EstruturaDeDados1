#include "Lista.h"


int menu()
{
	system("cls");
	int op;
	printf("***Menu***\n");
	printf("1 - Insercao de elementos no inicio;\n");
	printf("2 - Imprime valores dos elementos;\n");
	printf("3 - Retorna o numero de ocorrencias\n");
	printf("4 - Sair\n");
	
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
				scanf( "%d", &num );
			
				l = insere_ordenado(l, num); /* insere na lista o elemento l */
				
				system("PAUSE");
				break;
			
			case 2:
				imprime(l); /* imprimir*/
				system("PAUSE");
				break;


				
			case 3:
				
				cont_impares_rec (l);

				system("PAUSE");
				break;

			case 4:
				printf("Saindo  do programa...\n");
				system("PAUSE");
				break;
			
				
			default:
				system("cls");
				printf("Voce digitou %d. Opcao invalida.", op);
				system("PAUSE");
		}
	}
	while(op != 4);
	return 0;
}

