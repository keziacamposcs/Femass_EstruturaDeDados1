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
		no_dado* inicio;
		no_dado* fim;

		int qtd; 

	//Declarando metodos	
	public:
		Lista();
		~Lista();

		void insere_inicio(int i); //1
		void insere_fim(int i); //2
		void imprime(); //3
		void tamanho(); //4
		void busca(int i); //5
		void remove(int i); //6
		void remove_ini();
		void remove_fim();
	//	void imprime_ini();
		//void imprime_fim();

		void libera();
		void vazia();





	private:
		bool isEmpty(no_dado* l);
};


