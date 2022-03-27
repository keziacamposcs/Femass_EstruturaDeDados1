//Prototipar a classe
//Lista.h
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
using namespace std;

struct lista {
	int info;
	struct lista* prox;
};
typedef struct lista no_dado;

//Estruturar a classe Lista que terá os métodos de manipulação da lista simples, usando alocação
//de nó-dado struct lista (no_dado) dinamicamente
class Lista{
	//Declarar atributos
	private:
		no_dado* cabeca; //controle de nó-cabeça
		int qtd; //guardar qtd de nós encadeados
	
	//Declarando métodos	
	public:
		Lista();
		~Lista();
		void insere_inicio(int i);
		void insere_fim(int i);
		void imprime();
		void imprime_inicio();
		void imprime_fim();
		void vazia();
		void libera();
		void tamanho();		
		int busca(int v);
		int retira (int v);
		void retira_inicio();
		void retira_fim();
		
		
		
	private:
		bool isEmpty(no_dado* l);//método privado que auxiliará verificação de lista vazia a partir de um ponteiro
		int valor_inicio(no_dado* l);
		int valor_fim(no_dado* l);	
};
