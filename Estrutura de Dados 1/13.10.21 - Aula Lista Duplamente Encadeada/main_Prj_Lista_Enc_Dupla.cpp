
#include "lista_dupla.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	Lista2* l; //ponteiro controla a lista encadeada dupla, apontando para o 1o n�-dado
	l = inicializa();
	imprimir_frente_fim (l);
	l = insere_inicio(l, 3);
	imprimir_frente_fim (l);
	l = insere_inicio(l, 2);
	imprimir_frente_fim (l);
	l = insere_inicio(l, 1);
	imprimir_frente_fim (l);
	l = retira(l, 5);
	imprimir_frente_fim (l);
	l = retira(l, 2);
	imprimir_frente_fim (l);
	l = retira(l, 1);
	imprimir_frente_fim (l);
	l = retira(l, 3);
	imprimir_frente_fim (l);
	l = retira(l, 5);
	imprimir_frente_fim (l);
	
	
	return 0;
}
