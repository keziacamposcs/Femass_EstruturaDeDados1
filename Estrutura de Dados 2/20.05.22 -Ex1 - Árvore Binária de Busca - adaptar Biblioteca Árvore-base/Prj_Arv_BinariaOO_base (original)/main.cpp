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
		cout << "vazia\n";
	else
		cout << "não-vazia\n";
}


int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "Portuguese");
	cout<<"PROGRAMA ÁRVORE BINÁRIA DE BUSCA OO\n";

	ArvBB tree; //instancia objeto conforme a classe, construtor faz root = NULL
	
	mensagem_arvore_vazia(tree.vazia());
	
	cout << "Inserindo dados na árvore...\n";	
	tree.insere(5); 
	//tree.displayTree(); getch();
	tree.insere(2); getch();
	//tree.displayTree(); getch();
	tree.insere(3); 
	//tree.displayTree(); getch();
	tree.insere(1); 
	//tree.displayTree(); getch();
	tree.insere(9); 
	//tree.displayTree(); getch();
	tree.insere(7); 
	//tree.displayTree(); getch();
	tree.insere(8); 
	//tree.displayTree(); getch();
	tree.insere(10); 
	//tree.displayTree();	getch();			
	
	tree.displayRoot();
	
	cout << "Mostrando estrutura de árvore:\n";
	tree.displayTree();
	mensagem_arvore_vazia(tree.vazia());

	cout << "Reiniciando a árvore!\n";
	tree.reiniciaTree();
	mensagem_arvore_vazia(tree.vazia());
	tree.displayTree();
	
	tree.displayRoot();
	
	cout << "Inserindo dados na árvore...\n";	
	tree.insere(9); 
	tree.insere(1); 
	tree.insere(11); 
	tree.insere(2); 
	tree.insere(4); 
	tree.insere(9); 
	cout << "Mostrando estrutura de árvore:\n";
	tree.displayTree();
	mensagem_arvore_vazia(tree.vazia());
	
	cout << "Fim de programa!" << endl;
	tree.~ArvBB(); //destrutor da árvore
	cout << "Árvore destruída (desalocada)\n";
	system("pause");

	return 0;
}
