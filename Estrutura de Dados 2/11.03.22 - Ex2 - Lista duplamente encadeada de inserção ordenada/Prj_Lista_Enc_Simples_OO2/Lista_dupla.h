//Prototipar a classe
//Lista.h
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
#include "no_dado.h"

using namespace std;

class Lista{
	//Declarar atributos
	private:
		no_dado* cabeca; //controle de nó-cabeça
		no_dado* temp; //recebe dado temporario

		int qtd; //guardar qtd de nós encadeados
	
	//Declarando métodos	
	public:
		Lista();
		~Lista();
		void insere_ordenado(int i, no_dado* l);
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

