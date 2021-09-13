//Lista.h
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
Lista* insere_inicio (Lista* l, int i);
void imprime (Lista* l);
bool vazia (Lista* l);
Lista* busca (Lista* l, int v);
void busca_informe (Lista* l, int v);
Lista* retira (Lista* l, int v);
void libera (Lista* l);

