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
		
<<<<<<< HEAD
		void insere(no_dado* l, int i);
		void remove_inicio();
=======
		void insere(int i); // ok
		void remove_inicio(); 
>>>>>>> 5ea660556fe4a199e15d059a72059e3c60bfe35b
		void remove_fim();
		int remove_elemento(int i);
		void imprime_inicio_fim(); // ok
		void imprime_fim_inicio(); // ok
		int busca(int i);
		void busca_elemento(int i);

		void libera();
		
		
	private:
		int apontaIni(no_dado* l);
		int apontaFim(no_dado* l);
		
		bool isEmpty(no_dado* l);//método privado que auxiliará verificação de lista vazia a partir de um ponteiro	
	
};
