/*
	Name: PROGRAMA LISTA ENCADEADA DUPLA
	Copyright: 
	Author: Ariel de O L Pichone
	Date: 12/09/21 21:03
	Description: Atividade para treino
*/

/* Crie uma biblioteca OO prototipada em C++ (classes Lista_dupla e no_dado, p. ex.) para manipular uma lista duplamente encadeada, 
que contemple os seguintes métodos para com o usuário:
- Insere_ordenado(x); Remove_inicio(); Remove_fim(); Remove_elemento(x); Imprime_inicio_fim; Imprime_fim_inicio; Busca_elemento(x).
Dicas: Dê um menu para o usuário escolher que opções de métodos de manipulação da lista deseja. 
Busque inspiração para manipulação desta lista no material Cap. 10, seção 10.5 em 
https://www.ic.unicamp.br/~ra069320/PED/MC102/1s2008/Apostilas/Cap10.pdf
Obs.: Enviar arquivo ZIP da pasta de projeto DevCpp, sem esquecer do makefile, excluindo .exe e .o.
*/
#include "Lista_dupla.h"
#include <iostream>

void menu(){
	cout <<"PROGRAMA LISTA ENCADEADA DUPLA por Ariel Pichone"<< endl;
	cout << "\nEscolha uma opção:\n";
	cout << "1- Insere_Ordenado" << endl;
	cout << "2- Remove_inicio" << endl;
	cout << "3- Remove_fim" << endl;
	cout << "4- Remove_Elemento" << endl;
	cout << "5- Imprime_Inicio_fim" << endl;
	cout << "6- Imprime_Fim_Inicio" << endl;		
	cout << "7- Busca_elemento" << endl;
	cout << "0- Sair\n";
	cout << "Opção: ";
}

float ler_numero(int i){
	cout << "Informe N" << i <<": ";
	float tmp;
	cin >> tmp;
	return tmp;
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	Lista l; //instanciando objeto l conforme a classe Lista
	/*l.insere_ordenado(56);
	l.insere_ordenado(78);
	l.insere_ordenado(23);
	l.insere_ordenado(45);*/
	
int op(1);
	float n1;
	do{
		menu();
		cin >> op;
		switch(op){
			case 1: //Insere Ordenado
					n1 = ler_numero(1);
					l.insere_ordenado(n1);
					system("pause");
					system("cls");
					break;
			case 2: //Remove Inicio
					l.Remove_inicio();
					system("pause");
					system("cls");
					break;
			case 3: //Remove Fim
					l.Remove_fim();
					system("pause");
					system("cls");
					break;
			case 4: //Remove Elemento
					n1 = ler_numero(1);
					l.Remove_elemento(n1);
					system("pause");
					system("cls");
					break;
			case 5: //Imprime Inicio Fim
					l.Imprime_inicio_fim();
					system("pause");
					system("cls");
					break;
			case 6: //Imprime Fim Inicio
					l.Imprime_fim_inicio();
					system("pause");
					system("cls");
					break;
			case 7: //Busca Elemento
					n1 = ler_numero(1);
					if (l.Busca_elemento(n1) == 0){
						cout <<"Elemento " << n1 << " não encontrado na lista." << endl;
					}else{
						cout <<"Elemento " << n1 << " encontrado na lista." << endl;
					}
					system("pause");
					system("cls");
					break;
			default: cout << "\nOpção inválida/fim de programa!\n";
		}
	}while(op>=1 && op<=7);
	cout << "Fim de programa!\n";
	system("pause");
	return 0;
}
