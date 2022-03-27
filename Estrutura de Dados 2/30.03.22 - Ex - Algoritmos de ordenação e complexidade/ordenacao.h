#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
using namespace std;

class Vetor{

	//Declarar atributos
	private:
		int tamanho;
		int* v_ordenado;
		int* v_original;
	
	//Declarando metodos	
	public:
		Vetor();
		~Vetor();
		
		void inicio(int tamanho);
		
		void bubble_sort(int tamanho);
		
		
		
		
};
