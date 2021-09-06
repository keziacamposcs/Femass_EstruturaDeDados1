#include <iostream>
using namespace std;

void mostra_vetor(int* v, int tam){
	int i;
	for(i = 0; i < tam; i++)
		cout << v[i] << " ";
	cout << endl;
}

void mostra_vetor_impares(int* v, int tam){
	int i;
	for(i = 0; i < tam; i++)
		if(v[i] % 2 != 0)
			cout << v[i] << " ";
	cout << endl;
}

void mostra_vetor_pares(int* v, int tam){
	int i;
	for(i = 0; i < tam; i++)
		if(v[i] % 2 == 0)
			cout << v[i] << " ";
	cout << endl;
}
