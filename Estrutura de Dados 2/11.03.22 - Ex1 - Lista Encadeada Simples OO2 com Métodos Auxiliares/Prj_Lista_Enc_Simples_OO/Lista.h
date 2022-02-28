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


class Lista
{
	//Declarar atributos
	private:
		no_dado* cabeca; //controle de no-cabeca
		no_dado* calda; //controle de no-calda

		int qtd; //guardar qtd de nos encadeados
	
	
	//Declarando metodos	
	public:
		Lista(); //construtor
		~Lista(); //destrutor
		
		void insere_inicio(int i); 
		void insere_fim(int i); 
		void imprime(); 
		void vazia();
		void tamanho(); 
		void busca(int i); 
		void retira(int i); 
		void retira_inicio();
		void retira_fim();
		void imprime_inicio();
		void imprime_fim();
		void libera();
		
	private:
		bool isEmpty(no_dado* l);
};

