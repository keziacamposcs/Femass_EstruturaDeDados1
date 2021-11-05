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

Lista* remove_fim(Lista* l);

Lista* remove_elemento(Lista* l);

void imprime_inicio_fim(l);

void imprime_fim_inicio(l);

Lista* busca_elemento(Lista* l, num);
