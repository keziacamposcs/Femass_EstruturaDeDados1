//Prototipar a classe
//Lista.h
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
#include "no_dado.h"

using namespace std;

class Lista
{
	//Declarar atributos
	private:
		no_dado* cabeca; //controle de nó-cabeça
		no_dado* calda; //controle de nó-calda
		int qtd; //guardar qtd de nós encadeados
	
	//Declarando métodos	
	public:
		Lista();
		~Lista();
		
		void insere(int i);
		void remove_inicio();
		void remove_fim();
		void remove_elemento(int i);
		void imprime_inicio_fim();
		void imprime_fim_inicio();
		void busca_elemento(int i);
		
		
		void libera();
		void vazia();
	
	private:
		bool isEmpty(no_dado* l);//método privado que auxiliará verificação de lista vazia a partir de um ponteiro	
};

