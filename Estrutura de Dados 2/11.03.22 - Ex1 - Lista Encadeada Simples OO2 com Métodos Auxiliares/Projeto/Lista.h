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


class Lista{
	//Declarar atributos
	private:
		no_dado* cabeca; //controle de nó-cabeça
		no_dado* calda; //controle de nó-calda
		int qtd; //guardar qtd de nós encadeados

	//Declarando metodos	
	public:
		Lista();
		~Lista();

		void insere_inicio(int i); //ok
		void insere_fim(int i); 
		void imprime(); //ok
		void tamanho(); //ok
		int busca(int i);
		void busca_elemento(int i);
		void remove(int i);
		void remove_ini();
		void remove_fim();
		
		//int apontaIni(no_dado* l); 
		void imprimeIni();
		
		//int apontaIni(no_dado* l); 
		void imprimeFim();

		void libera();
		void vazia();



	private:
		bool isEmpty(no_dado* l);
		int apontaIni(no_dado* l); 
		int apontaFim(no_dado* l); 
};


