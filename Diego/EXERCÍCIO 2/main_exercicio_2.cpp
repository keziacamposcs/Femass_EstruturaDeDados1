#include <iostream>
#include <locale> //Habilitar pad�es de caractere de teclado Ptb
#include <conio.h>
#include "vetor.h"
using namespace std;

int menu(){
	int op;
	cout << "Escolha a op��o:"  << endl;
	cout << "1 - exibir vetor informado" << endl;
	cout << "2 - exibir elementos impares armazenados no vetor" << endl;
	cout << "3 - exibir elementos pares armazenados no vetor" << endl;
	cout << "4 - encerrar programa" << endl;
	cout << "Op��o: ";
	cin >> op;
	return op;
}

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	int i, op;
	int tam = 10; //Inicializa o tamanho do vetor
	int v[tam]; //cria o vetor
	for(i = 0; i < tam; i++){
		cout << "Digite o " << i + 1 << "� elemento do vetor: ";
		cin >> v[i];
	}
	do{
		op = menu();
		switch(op){
			case 1: //Exibir vetor informado
				cout << "Mostrando o vetor digitado." << endl;
				mostra_vetor(v, tam);
				break;
			case 2: //Exibir elementos impares armazenados no vetor
				cout << "Mostrando os n�meros impares do vetor digitado." << endl;
				mostra_vetor_impares(v, tam);
				break;
			case 3: //Exibir elementos pares armazenados no vetor
				cout << "Mostrando os n�meros pares do vetor digitado." << endl;
				mostra_vetor_pares(v, tam);
				break;
			case 4: //Encerra Programa
				cout << "Encerrando o programa." << endl;
				break;
			default:
				cout << "Op��o inv�lida." << endl;
		}
	}while(op != 4);
	return 0;
}
