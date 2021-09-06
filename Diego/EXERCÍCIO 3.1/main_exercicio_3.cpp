#include <iostream>
#include <locale> //Habilitar pad�es de caractere de teclado Ptb
#include <stdlib.h>	/* Para usar malloc e free */
#include "vetor.h"
using namespace std;

/* Defimo��o de macros para limpar a tela e aguardar a inser��o de um cacartere para continuar a execu��o */
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
	cout << "Escolha a op��o:"  << endl;
	cout << "1 - Cadastrar n�mero" << endl;
	cout << "2 - Exibir numero(s) cadastrado(s)" << endl;
	cout << "3 - Exibir quantidade de n�meroscadastrados" << endl;
	cout << "4 - Remover �ltimo n�mero cadastrado" << endl;
	cout << "5 - Sair" << endl;
	cout << "Op��o: ";
	cin >> op;
	return op;
}

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	int op;
	int num_componentes = 0; //Inicializa o n�mero de componentes do vetor
	int *v = NULL; //define o ponteiro de v
	do{
		op = menu();
		switch(op){
			case 1: //Cadastrar n�mero
				CLEAR_SCREEN;
				v = cadastrar_componente(v, &num_componentes);
				break;
			case 2: //Exibir n�meros cadastrados
				CLEAR_SCREEN;
				mostra_vetor(v, num_componentes);
				PAUSE_SCREEN;
				break;
			case 3: //Exibir quantidade de n�meros cadastrados
				CLEAR_SCREEN;
				imprime_numero_componentes(num_componentes);
				PAUSE_SCREEN;
				break;
			case 4: //Remover �ltimo n�mero cadastrado
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
				cout << "Voc� digitou " << op << ". Op��o inv�lida." << endl;
				PAUSE_SCREEN;
		}
	}while(op != 5);
	free(v);
	return 0;
}
