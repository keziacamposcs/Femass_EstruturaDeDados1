//Exemplo de implementação de Algoritmo de Ordenação Simples, BubbleSort, usando Lista Encadeada Simples.
//Prof. Irineu. Estrutura de Dados

#include "BubbleSort.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */



int main(int argc, char** argv) {
	Lista* l;
	l=inicializa();
	l=insereInicio(l, 5);
	l=insereInicio(l, 6);
	l=insereInicio(l, 3);
	l=insereInicio(l, 7);
	l=insereInicio(l, 1);
	l=insereInicio(l, 2);
	l=insereInicio(l, 4);
	imprime(l);
	l=BubbleSort(l);
	imprime(l);
	system("pause");
	libera(l);
	return 0;
}
