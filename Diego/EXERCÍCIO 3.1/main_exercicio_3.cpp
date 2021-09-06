#include <iostream>
#include <locale> //Habilitar padões de caractere de teclado Ptb
#include <stdlib.h>	/* Para usar malloc e free */
#include "vetor.h"
using namespace std;

/* Defimoção de macros para limpar a tela e aguardar a inserção de um cacartere para continuar a execução */
#ifdef _WIN32
	#define CLEAR_SCREEN system("cls")
	#define PAUSE_SCREEN system("PAUSE")
#else
	#define CLEAR_SCREEN puts("\x1b[H\x1b[2J")
	#define PAUSE_SCREEN getchar()
#endif

int menu(){
	int op;
	CLEAR_SCREEN;
	cout << "Escolha a opção:"  << endl;
	cout << "1 - Cadastrar número" << endl;
	cout << "2 - Exibir numero(s) cadastrado(s)" << endl;
	cout << "3 - Exibir quantidade de númeroscadastrados" << endl;
	cout << "4 - Remover último número cadastrado" << endl;
	cout << "5 - Sair" << endl;
	cout << "Opção: ";
	cin >> op;
	return op;
}

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	int op;
	int num_componentes = 0; //Inicializa o número de componentes do vetor
	int *v = NULL; //define o ponteiro de v
	do{
		op = menu();
		switch(op){
			case 1: //Cadastrar número
				CLEAR_SCREEN;
				v = cadastrar_componente(v, &num_componentes);
				break;
			case 2: //Exibir números cadastrados
				CLEAR_SCREEN;
				mostra_vetor(v, num_componentes);
				PAUSE_SCREEN;
				break;
			case 3: //Exibir quantidade de números cadastrados
				CLEAR_SCREEN;
				imprime_numero_componentes(num_componentes);
				PAUSE_SCREEN;
				break;
			case 4: //Remover último número cadastrado
				CLEAR_SCREEN;
				v = remove_ultimo_numero_cadastrado(v, &num_componentes);
				PAUSE_SCREEN;
				break;
			case 5: //Sair
				CLEAR_SCREEN;
				cout << "Encerrando o programa." << endl;
				PAUSE_SCREEN;
				break;
			default:
				CLEAR_SCREEN;
				cout << "Você digitou " << op << ". Opção inválida." << endl;
				PAUSE_SCREEN;
		}
	}while(op != 5);
	free(v);
	return 0;
}
