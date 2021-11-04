//lista.h
#include <iostream>
#include <stdlib.h>
#include <stdio.h>


struct lista {
	int info;
	struct lista* ant;
	struct lista* prox;
};

typedef struct lista Lista;

Lista* inicializa();

bool vazia(Lista* l);

Lista* insere_ordenado(Lista* l, int v);

void imprime(Lista* l);

Lista* remove_inicio(Lista* l);

Lista* remove_fim(Lista* l)


/*
Lista* insere_fim(Lista* l, int i);

void imprime(Lista* l);

Lista* retira(Lista* l, int v);



Lista* busca (Lista* l, int v);

void busca_dado (Lista* l, int v);

void size (Lista* l);

Lista* remove_inicio (Lista* l);

Lista* remove_fim (Lista* l);

void imprime_inicio (Lista* l);

void imprime_fim (Lista* l);

void libera (Lista* l);
*/

