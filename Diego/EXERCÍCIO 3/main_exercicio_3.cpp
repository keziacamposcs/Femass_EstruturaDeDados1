#include <iostream>
#include <locale> //Habilitar pad�es de caractere de teclado Ptb
#include <stdlib.h>	/* Para usar malloc e free */
#include "vetor.h"
using namespace std;

/* macro definition for console clearing */
#ifdef _WIN32
	#define CLEAR_SCREEN system("cls")
#else
	#define CLEAR_SCREEN puts("\x1b[H\x1b[2J")
#endif

int menu(){
	int op;
	cout << "Escolha a op��o:"  << endl;
	cout << "1 - Cadastrar n�mero" << endl;
	cout << "2 - Exibir numero(s) cadastrados)" << endl;
	cout << "3 - Exibir quantidade de n�meros cadastrados" << endl;
	cout << "4 - Remover �ltimo n�mero cadastrado" << endl;
	cout << "5 - Sair" << endl;
	cout << "Op��o: ";
	cin >> op;
	return op;
}

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	setlocale(LC_ALL, "Portuguese");
	int op;
	int num_componentes = 0; //Inicializa o n�mero de componentes do vetor
	int *v = NULL; //define o ponteiro de v
	do{
		op = menu();
		switch(op){
			case 1: //Cadastrar n�mero
				v = cadastrar_componente(v, &num_componentes);
				if(v == NULL)
					cout << "Vetor � nulo" << endl;
				CLEAR_SCREEN;
				break;
			case 2: //Exibir n�meros cadastrados
				mostra_vetor(v, num_componentes);
				system("PAUSE");
				CLEAR_SCREEN;
				break;
			case 3: //Exibir quantidade de n�meros cadastrados
				imprime_numero_componentes(num_componentes);
				system("PAUSE");
				CLEAR_SCREEN;
				break;
			case 4: //Remover �ltimo n�mero cadastrado
				v = remove_ultimo_numero_cadastrado(v, &num_componentes);
				system("PAUSE");
				CLEAR_SCREEN;
				break;
			case 5: //Sair
				cout << "Encerrando o programa." << endl;
				break;
			default:
				cout << "Op��o inv�lida." << endl;
		}
	}while(op != 5);
	free(v);
	return 0;
}
