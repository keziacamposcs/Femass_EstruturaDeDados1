//Prototipar a classe
//Lista_dupla.h

#include "no_dado.h"

using namespace std;

class Lista{
	//Declarar atributos
	private:
		no_dado* cabeca; //controle de n�-cabe�a

	//Declarando m�todos	
	public:
		Lista();
		~Lista();
		void insere_ordenado(int i);
		void Imprime_inicio_fim();
		void Imprime_fim_inicio();
		void vazia();
		void libera();
		int Busca_elemento(int v);
		void Remove_elemento (int v);
		void Remove_inicio();
		void Remove_fim();
		
	private:
		bool isEmpty(no_dado* l);//m�todo privado que auxiliar� verifica��o de lista vazia a partir de um ponteiro
		int valor_inicio(no_dado* l);
		int valor_fim(no_dado* l);
};
