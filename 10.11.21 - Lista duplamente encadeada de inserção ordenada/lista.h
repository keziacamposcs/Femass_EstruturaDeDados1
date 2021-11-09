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

Lista* cria (int v); // ok

Lista* insere_ordenado(Lista* l); //ok

void imprime(Lista* l); //ok

Lista* remove_inicio(Lista* l); //ok

Lista* remove_fim(Lista* l); //ok

Lista* remove_elemento(Lista* l, int v); //ok

void imprime_inicio_fim(Lista* l); //ok

void imprime_fim_inicio(Lista* l); 

Lista* busca (Lista* l, int v); //ok

void busca_elemento (Lista* l, int v); //ok

