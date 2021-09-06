#include <iostream>
#include <stdlib.h>	/* Para usar malloc e free */
#include "vetor.h"
using namespace std;

int* cadastrar_componente(int *v, int *num_componentes){
	if(*num_componentes == 0)
	{
		v = (int*) malloc(sizeof(int));
		if (v == NULL)
		{
        	cout << "N�o h� mem�ria suficiente para aloca��o." << endl;
        	exit(1);
        }
	}
	else
	{
		v = (int*) realloc(v, (*num_componentes + 1) * sizeof(int));
		if (v == NULL)
		{
        	cout << "N�o h� mem�ria suficiente para aloca��o." << endl;
        	exit(1);
        }
	}
	cout << "Digite o valor do componente a ser cadastrado: ";
	cin >> v[*num_componentes];
	*num_componentes = *num_componentes + 1; //Atualiza o n�mero de componentes do vetor
	return v;
}

void mostra_vetor(int *v, int num_componentes){
	int i;
	if(num_componentes == 0)
		cout << "N�o existe componente cadastrado." << endl;
	else{
		if(num_componentes == 1)
			cout << "Foi cadastrado o elemento a seguir: ";
		else
			cout << "Foram cadastrados os elementos a seguir: ";
		for(i = 0; i < num_componentes; i++)
			cout << v[i] << " ";
		cout << endl;
	}
}

void imprime_numero_componentes(int num_componentes){
	if(num_componentes == 0)
		cout << "N�o existe componente cadastrado." << endl;
	else if(num_componentes == 1)
		cout << "Foi cadastrado 1 componente." << endl;
	else
		cout << "Foram cadastrados " << num_componentes << " componentes." << endl;
}

int* remove_ultimo_numero_cadastrado(int* v, int *num_componentes){
	if(v == NULL)
		cout << "O vetor � nulo. N�o existe elemento para ser removido." << endl;
	else if(*num_componentes == 1){
		free(v);
		v = NULL;
		*num_componentes = *num_componentes - 1; //Atualiza o n�mero de componentes do vetor
		cout << "Elemento removido com sucesso." << endl;
	}
	else{
		v = (int*) realloc(v, (*num_componentes) * sizeof(int));
		*num_componentes = *num_componentes - 1; //Atualiza o n�mero de componentes do vetor
		cout << "Elemento removido com sucesso." << endl;
	}
	return v; //Retorna um ponteiro para o vetor de elementos
}
