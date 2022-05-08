#include "abb.h"
#include <conio.h>
using namespace std;

/* Prof. Irineu - Est. de Dados
Projeto de base para implementa��o de �rvore Bin�ria de Busca (AVL). Sup�e-se:
- main.cpp: front-end com usu�rio;
- abb.h e abb.cpp: prototipa��o OO de m�todos de manipula��o da �rvore bin�ria de busca (abb),
 contendo defini��o "struct" do n�-dado (campos info, filho_esquerda e filho_direita; como 
 tamb�m os m�todos de manipula��o como biblioteca OO.
Dica: refer�ncia de muitos m�todos em: 
 https://www.ic.unicamp.br/~rocha/teaching/2016s1/mc202/aulas/arvore-binaria-busca-01.pdf  
 Livro Robert Lafore, ED e Alg em Java - Ci�ncia Moderna, 2004.
Obs.: Recursos e m�todos adicionais � biblioteca dever�o ser desenvolvidos com base neste modelo.
*/
 
//fun��o de interface com o usu�rio, apenas para facilitar mensagens sobre o estado da �rvore 
void mensagem_arvore_vazia(bool t){
	cout << "�rvore est� ";
	if(t)
		cout << "vazia\n";
	else
		cout << "n�o-vazia\n";
}


int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "Portuguese");
	cout<<"PROGRAMA �RVORE BIN�RIA DE BUSCA OO\n";

	ArvBB tree; //instancia objeto conforme a classe, construtor faz root = NULL
	
	mensagem_arvore_vazia(tree.vazia());
	
	cout << "Inserindo dados na �rvore...\n";	
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
	
	cout << "Mostrando estrutura de �rvore:\n";
	tree.displayTree();
	mensagem_arvore_vazia(tree.vazia());

	cout << "Reiniciando a �rvore!\n";
	tree.reiniciaTree();
	mensagem_arvore_vazia(tree.vazia());
	tree.displayTree();
	
	tree.displayRoot();
	
	cout << "Inserindo dados na �rvore...\n";	
	tree.insere(9); 
	tree.insere(1); 
	tree.insere(11); 
	tree.insere(2); 
	tree.insere(4); 
	tree.insere(9); 
	cout << "Mostrando estrutura de �rvore:\n";
	tree.displayTree();
	mensagem_arvore_vazia(tree.vazia());
	
	cout << "Fim de programa!" << endl;
	tree.~ArvBB(); //destrutor da �rvore
	cout << "�rvore destru�da (desalocada)\n";
	system("pause");

	return 0;
}
