//lista.h
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

struct lista {
	int info;
	struct lista* prox;
};
typedef struct lista Lista;

Lista* inicializa();
Lista* insereInicio(Lista* l, int i);
void imprime(Lista* l);
bool vazia(Lista* l);
Lista* busca(Lista* l, int v);
Lista* retira(Lista* l, int v);
void libera(Lista* l);
int Tamanho_lista (Lista* l);

