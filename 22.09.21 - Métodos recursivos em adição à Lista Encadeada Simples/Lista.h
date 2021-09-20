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

//continuacao
void mostrainicio(Lista* l); //5
void mostrafim(Lista* l); //6
void tamanho (Lista* l); //7
void ocorrencias(Lista* l, int v); //8
Lista* cria (int v);
Lista* inserefim (Lista* l, int v); //9
Lista* removeinicio(Lista* l); //10
Lista* removefim(Lista* l); //11

//continuacao parte 2...
void imprime_recursiva (Lista* l); //12
Lista* retira_recursiva (Lista* l, int v); //13
void libera_recursiva (Lista* l); //14



