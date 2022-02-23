#include "Lista.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	//MELHORAR A INTERFACE COM MENU PARA OS MÉTODOS EM TESTE DE CLASSE LISTA
	
	cout << "PROGRAMA LISTA ENCADEADA SIMPLES\n";
	Lista l; //instanciando objeto l conforme a classe Lista
	
	l.insere_inicio(23);
	l.insere_inicio(45);
	l.insere_inicio(56);
	l.insere_inicio(78);
	l.imprime();
	l.tamanho();
	l.libera();
	l.imprime();
	l.tamanho();
	l.insere_inicio(80);
	l.imprime();
	l.tamanho();
		
	system("pause");
	
	return 0;
}
