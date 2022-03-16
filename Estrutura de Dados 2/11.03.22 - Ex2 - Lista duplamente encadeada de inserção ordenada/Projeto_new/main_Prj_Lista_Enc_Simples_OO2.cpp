#include "Lista.h"


int menu()
{
	system("cls");
	int op;
	printf("***Menu***\n");
	printf("1 - Insercao de elementos ordenado;\n");
	printf("2 - Remove inicio;\n");
	printf("3 - Remove fim;\n");
	printf("4 - Remove elemento;\n");
	printf("5 - Imprime inicio-fim;\n");
	printf("6 - Imprime fim-inicio;\n");
	printf("7 - Busca elemento\n");
	printf("8 - Sair\n");
	
	printf("Escolha umas das opcoes acima: ");
	scanf("%d", &op);
	return op;
}


int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	
	Lista l; //instanciando objeto l conforme a classe Lista
	
	int op;
	int i;
	
	do
	{
		op = menu();
		
		switch(op)
		{
			
			case 1:
				printf( "Numero para inserir: ");
				scanf( "%d", &i );
				
				l.insere(i);
				
				system("PAUSE");
				break;


			case 2:
				l.remove_inicio();
	
				system("PAUSE");
				break;	
				
						
			case 3:
				l.remove_fim();
								
				system("PAUSE");
				break;
				
				
			case 4:
				printf( "Digite um numero para remover: ");
				scanf( "%d", &i );
				
				l.remove_elemento(i);
				
				system("PAUSE");
				break;
				
				
			case 5:
				l.imprime_inicio_fim();
				
				system("PAUSE");
				break;
				
				
			case 6:
				l.imprime_fim_inicio();
				
				system("PAUSE");
				break;
				
				
			case 7:
				printf( "Digite um numero para verificar se esta na lista: ");
				scanf( "%d", &i);
				
				l.busca_elemento(i);
				
				system("PAUSE");
				break;								
				
			default:
				system("cls");
				printf("Voce digitou %d. Opcao invalida.", op);
				system("PAUSE");
		}
	}
	while(op != 8);
	return 0;
}
