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
		no_dado* cabeca; //controle de n�-cabe�a
		no_dado* temp; //recebe dado temporario

		int qtd; //guardar qtd de n�s encadeados
	
	//Declarando m�todos	
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
		bool isEmpty(no_dado* l);//m�todo privado que auxiliar� verifica��o de lista vazia a partir de um ponteiro	
};

