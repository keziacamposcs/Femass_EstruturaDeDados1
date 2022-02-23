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
		void imprime();
		void vazia();
		void libera();
		void tamanho();
		/*
		void busca(int i);
		void retira(int i);
		void insere_fim(int i);
		*/
	private:
		bool isEmpty(no_dado* l);//método privado que auxiliará verificação de lista vazia a partir de um ponteiro	
};

