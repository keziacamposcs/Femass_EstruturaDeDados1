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

Lista* inicializa(); //ok

bool vazia(Lista* l); //ok

Lista* insere(int v); 

Lista* insere_inicio (Lista* l, int v);

Lista* insere_fim (Lista* l, int v);

void imprime(Lista* l); 

Lista* remove_inicio(Lista* l);

Lista* remove_fim(Lista* l); 

Lista* remove_valor(Lista* l, int v); 

void imprime_frente_fim(Lista* l); 

void imprime_reverso(Lista* l); 

Lista* busca (Lista* l, int v); 

void busca_elemento (Lista* l, int v); 

