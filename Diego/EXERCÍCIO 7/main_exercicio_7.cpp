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
	cout << "5 - Carregar base de dados do arquivo" << endl;
	cout << "6 - Sair" << endl;
	cout << "Op��o: ";
	cin >> op;
	return op;
}

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	setlocale(LC_ALL, "Portuguese");
	int op;
	int num_componentes = 0; //Inicializa o n�mero de componentes do vetor
	Pessoa *v = NULL; //define o ponteiro de v
	
	// Abrindo o arquivo
	FILE *arq; //declara��o do arquivo
	if ((arq = fopen("Cadastro.txt","r")) == NULL) 
	{
		cout << "Erro na abertura do arquivo\n"; 
		return -1;
	}
	
	do{
		op = menu();
		switch(op){
			case 1: //Cadastrar n�mero
				CLEAR_SCREEN;
				v = cadastrar_componente(v, &num_componentes);
				CLEAR_SCREEN;
				break;
			case 2: //Exibir n�meros cadastrados
				CLEAR_SCREEN;
				mostra_vetor(v, num_componentes);
				system("PAUSE");
				CLEAR_SCREEN;
				break;
			case 3: //Exibir quantidade de n�meros cadastrados
				CLEAR_SCREEN;
				imprime_numero_componentes(num_componentes);
				system("PAUSE");
				CLEAR_SCREEN;
				break;
			case 4: //Remover �ltimo n�mero cadastrado
				CLEAR_SCREEN;
				v = remove_ultimo_numero_cadastrado(v, &num_componentes);
				system("PAUSE");
				CLEAR_SCREEN;
				break;
			case 5:
				CLEAR_SCREEN;
				v = carregar_base_dados_arquivo(v, &num_componentes, arq);
				system("PAUSE");
				CLEAR_SCREEN;
				break;
			case 6: //Sair
				CLEAR_SCREEN;
				cout << "Encerrando o programa." << endl;
				break;
			default:
				CLEAR_SCREEN;
				cout << "Op��o inv�lida." << endl;
		}
	}while(op != 5);
	free(v); 					// Libera a �rea d mem�ria utilizada no vetor
	fclose (arq); 				// Fecha o arquivo
	return 0;
}
