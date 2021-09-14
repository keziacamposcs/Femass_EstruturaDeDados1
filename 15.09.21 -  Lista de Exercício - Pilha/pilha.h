//pilha.h

#include <iostream>
#include <stdlib.h>
#include <stdio.h>


struct lista {
	int info;
 	struct lista* prox;
};
typedef struct lista Lista;



Lista* inicializa ();

void imprime (Lista* l);

Lista* push (Lista* l, int i);

Lista* pop (Lista* l);

void size(Lista* l);

//int isempty(Lista* l);

void top(Lista* l);

void libera (Lista* l);

