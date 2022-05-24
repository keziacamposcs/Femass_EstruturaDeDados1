#include "abb.h"
#include <conio.h>
using namespace std;

/* Prof. Irineu - Est. de Dados
Projeto de base para implementação de Árvore Binária de Busca (AVL). Supõe-se:
- main.cpp: front-end com usuário;
- abb.h e abb.cpp: prototipação OO de métodos de manipulação da árvore binária de busca (abb),
 contendo definição "struct" do nó-dado (campos info, filho_esquerda e filho_direita; como 
 também os métodos de manipulação como biblioteca OO.
Dica: referência de muitos métodos em: 
 https://www.ic.unicamp.br/~rocha/teaching/2016s1/mc202/aulas/arvore-binaria-busca-01.pdf  
 Livro Robert Lafore, ED e Alg em Java - Ciência Moderna, 2004.
Obs.: Recursos e métodos adicionais à biblioteca deverão ser desenvolvidos com base neste modelo.
*/
 
//função de interface com o usuário, apenas para facilitar mensagens sobre o estado da árvore 
void mensagem_arvore_vazia(bool t){
	cout << "Árvore está ";
	if(t)
		printf("vazia\n");
	else
		printf("nao-vazia\n");
}

int menu()
{
	system("cls");
	int op;
	printf("***Menu***\n");
	printf("1 - Insere elemento;\n");
	printf("2 - Imprime a arvore;\n");
	printf("3 - Reinicia arvore;\n");
	printf("4 - Imprime a raiz;\n");
	printf("5 - Quantidade de niveis;\n");
	printf("6 - Quantidade de nos;\n");
	printf("7 - Travessia pre-ordem;\n");
	printf("8 - Travessia em-ordem;\n");
	printf("9 - Travessia pos-ordem;\n");
	printf("10 - Busca;\n");
	printf("11 - Balancear;\n");
	printf("12 - Remove por copia;\n");
	printf("13 - Remove por fusao;\n");

	printf("0 - Sair\n");
	
	printf("Escolha umas das opcoes acima: ");
	scanf("%d", &op);
	return op;
}

int main(int argc, char** argv)
{
	
	setlocale(LC_ALL, "Portuguese");
	printf("PROGRAMA ÁRVORE BINÁRIA DE BUSCA OO\n");

	ArvBB tree; //instancia objeto conforme a classe, construtor faz root = NULL
	
	mensagem_arvore_vazia(tree.vazia());
	
	int op;
	int num; //elemento informado pelo usuario
	do
	{
		op=menu();
		switch(op)
		{
			
			case 1:
				printf("Numero para inserir: \n");
				scanf("%d", &num);
				
				tree.insere(num);
				
				system("PAUSE");
				break;
				
			case 2:
				tree.displayTree();
				
				system("PAUSE");
				break;
				
			case 3:
				printf("Reiniciando a árvore!\n");
				tree.reiniciaTree();
				//mensagem_arvore_vazia(tree.vazia());
				
				system("PAUSE");
				break;

			case 4:
				tree.displayRoot();
				
				system("PAUSE");
				break;
				
			case 5:
				tree.nivel();
				
				system("PAUSE");
				break;
				
			case 6:
				tree.qtd_nodos();
			
				system("PAUSE");
				break;
				
			case 7:
				tree.pre_ordem();
				
				system("PAUSE");
				break;
				
			case 8:
				tree.em_ordem();
				
				system("PAUSE");
				break;
				
			case 9:
				tree.pos_ordem();
				
				system("PAUSE");
				break;
				
			case 10:
				printf("Numero para para buscar: \n");
				scanf("%d", &num);
				
				tree.busca(num);
			
				system("PAUSE");
				break;

//continuacao 2
			case 11:
				tree.balance();
				
				system("PAUSE");
				break;
				
			case 12:
				printf("Numero para para remover: \n");
				scanf("%d", &num);
				
				tree.remove_copia(num);
			
				system("PAUSE");
				break;
				
			case 13:
				printf("Numero para para remover: \n");
				scanf("%d", &num);
				
				tree.remove_fusao(num);
			
				system("PAUSE");
				break;
				
			default:
				system("cls");
				printf("Voce digitou %d. Opcao invalida.", op);
				system("PAUSE");					
		}
	}
	while(op!=0);
	tree.~ArvBB(); //destrutor da árvore

	return 0;
}

