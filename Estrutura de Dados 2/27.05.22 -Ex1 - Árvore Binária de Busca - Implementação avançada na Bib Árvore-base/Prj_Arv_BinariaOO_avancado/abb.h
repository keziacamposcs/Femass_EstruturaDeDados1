//abb.h
//Define a classe e prot�tipo de m�todos OO para biblioteca de �rvore bin�ria de busca (abb)
//Por Irineu Lima, ED2 - FeMASS

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stack> //aplicada para fun��o abb_displayTree - cont�iner C++ LIFO

using namespace std;

struct noArv  //defini��o struct para n�-dado de �rvore bin�ria de busca
{
	int info;
	struct noArv* esq; //ponteiro para filho � esquerda
	struct noArv* dir; //ponteiro para filho � direita
	struct noArv* pai; //ponteiro para filho � direita

};
typedef struct noArv NoArv; //defini��o de tipo para n�-dado de �rvore bin�ria de busca

class ArvBB{
	//Declarar atributos
	//public:
	private:
		NoArv* root; //controle de ponteiro para n�-dado raiz
	
	//Declarar cabe�alhos de m�todos
	public:
		ArvBB(); //Construtor - m�todo de mesmo nome da classe, n�o se usa a previs�o de retorno
		~ArvBB(); //Destrutor - m�todo executado ao fim ou t�rmino de uso do objeto de classe
		
		void insere(int v);
		void displayTree();
		NoArv* getRoot();
		void reiniciaTree();
		bool vazia();
		void displayRoot();
		
		//continuacao 1
		int nivel(); //5
		int qtd_nodos(); // 6
		int pre_ordem(); // 7 
		int em_ordem(); // 8
		int pos_ordem(); // 9 		
		void busca(int v); // 10
		
		//continuacao 2
		int balance(); // 11
		void remove_copia(int v); // 12
		void remove_fusao(int v); // 13

		
	private:
		NoArv* abb_criavazia();
		NoArv* abb_cria (int c, NoArv* e, NoArv* d);
		NoArv* abb_insere(NoArv* a, int v);
		NoArv* abb_libera(NoArv* a);
		bool no_abb_vazio(NoArv* a);
		
		//continuacao 1
		NoArv* abb_nivel(NoArv* a); // 5
		NoArv* qtd_nodos(NoArv* a); // 6
		NoArv* pre_ordem(NoArv* a); // 7
		NoArv* em_ordem(NoArv* a); // 8
		NoArv* pos_ordem(NoArv* a); // 9	
		NoArv* abb_busca(NoArv* a, int v); // 10
		
		//continuacao 2
		NoArv* balance_aux(NoArv* a); // 11
		NoArv* balance(NoArv* a); // 11
		NoArv* remove_copia(NoArv* a); // 12
		NoArv* remove_fusao_aux(NoArv* a); // 13
		NoArv* remove_fusao(NoArv* a); // 13

}; 

