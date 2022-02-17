//lista.h
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

struct lista {
	int info;
 	struct lista* prox;
};
typedef struct lista Lista;

Lista* inicializa ();
void imprime (Lista* l);
Lista* insere_ordenado (Lista* l, int i);
void cont_impares_rec (Lista* l);

