//lista.h
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

struct lista {
	int info;
	struct lista* ant;
	struct lista* prox;
};
typedef struct lista Lista;

Lista* inicializa();
bool vazia(Lista* l);
int tamanho_lista (Lista* l);

Lista* insere_inicio(Lista* l, int i);
Lista* insere_fim(Lista* l, int i);
void imprime(Lista* l);
Lista* busca_sequencial(Lista* l, int v);
Lista* busca_binaria(Lista* l);
Lista* swap(Lista* b, Lista* c);
Lista* ordena_bubblesort(Lista* l);



