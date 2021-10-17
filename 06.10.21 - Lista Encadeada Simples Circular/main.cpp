#include "lista_simples_circular.h"


int main(int argc, char** argv) {
	
	Lista* l;					//	declara uma lista nao
	l = inicializa();			// inicializa a lista
	
	l = insere_inicio (l, 23);	// insere inicio
	
	l = insere_inicio (l, 45);	// insere inicio
	
	l = insere_inicio (l, 50);	// insere inicio

	l = insere_fim (l, 51);	// insere inicio
	
	l = insere_fim (l, 52);	// insere inicio

	printf("\n Lista original \n");
	
	imprime(l);
	
	return 0;
}
