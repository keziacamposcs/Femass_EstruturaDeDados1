//Desenvolver m�todos de classe
//Lista_dupla.cpp
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
#include "Lista_dupla.h"

//construtor
Lista::Lista(){
	cabeca = NULL; //inicializa lista vazia
}

//destrutor
Lista::~Lista(){
	this->libera(); //ideia � liberar free toda mem�ria alocada
}

void Lista::insere_ordenado (int v)
{
	no_dado* atual = new no_dado(v);
	no_dado* novo = new no_dado(v);

 	if (this->isEmpty(this->cabeca)) this->cabeca = novo; //Se lista est� vazia
 	
 	else if (this->cabeca->info >= novo->info){	//Se for inserido no inicio
	 	novo->prox = this->cabeca;
	 	novo->prox->ant = novo;
	 	this->cabeca = novo;
	 }
	 else
	 {
	 	atual = this->cabeca;	
	 	while (atual->prox != NULL && atual->prox->info < novo->info) atual = atual->prox; //Encontrar n� anterior ao que ser� inserido
	 	novo->prox = atual->prox;
	 	if (atual->prox != NULL) novo->prox->ant = novo; //Se for inserido no final da lista
	 	atual->prox = novo;
	 	novo->ant = atual;
	 }
}

void Lista::Imprime_inicio_fim(){
	if (!this->isEmpty(this->cabeca)){
		no_dado* p; /* vari�vel auxiliar para percorrer a lista */
		printf("Info = ");
		for (p = this->cabeca; p != NULL; p = p->prox) 	cout << p->info << " - ";
		printf("\n");	
	} else printf("Lista est� vazia!\n");
}

void Lista::Imprime_fim_inicio(){
	if (!this->isEmpty(this->cabeca)){
	no_dado* t = this->cabeca;
	while(t->prox != NULL){
		t = t->prox;
	}
	while (t != this->cabeca){
		cout << t->info << " - ";
		t = t->ant;
	}
	cout << t->info << " - "<< endl;
	} else printf("Lista est� vazia!\n");
}

void Lista::vazia(){
	if (!this->isEmpty(this->cabeca))
		printf("Lista n�o est� vazia!\n");
	else
		printf("Lista est� vazia!\n");
}

void Lista::libera(){
	no_dado* p = this->cabeca;
	 while (p != NULL) {
	 	no_dado* t = p->prox; // guarda refer�ncia para o pr�ximo elemento
		free(p); /* libera a mem�ria apontada por p */
	 	p = t; /* faz p apontar para o pr�ximo */
	 }
	 this->cabeca = 0; //inicializa lista vazia
}

int Lista::Busca_elemento(int v){
 	no_dado* p;
 	for (p= this->cabeca; p!=NULL; p=p->prox){
	 	if (p->info == v)  	return p->info;
 	}
 	return 0; /* n�o achou o elemento */
}

void Lista::Remove_elemento (int v){
	no_dado* ant = NULL; /* ponteiro para elemento anterior */
	no_dado* p = this->cabeca; /* ponteiro para percorrer a lista*/
	 /* procura elemento na lista, guardando anterior */
	if (!this->isEmpty(this->cabeca)){
	while (p != NULL && p->info != v) {
	 	ant = p;
	 	p = p->prox;
	}
	/* retira elemento */
	if (ant == NULL) {
	/* retira elemento do inicio */
		this->cabeca = p->prox;
		cout << "Elemento removido da Lista." <<endl; //Retirou Elemento
	}
	else {
	/* retira elemento do meio da lista */
		ant->prox = p->prox;
		cout << "Elemento removido da Lista." <<endl; //Retirou Elemento
	}
	} else {
		cout << "Lista vazia!" <<endl; // Lista Vazia/n�o achou */
	}
}

void Lista::Remove_inicio(){
	if (!this->isEmpty(this->cabeca)){
		Remove_elemento(this->valor_inicio(this->cabeca));
	}
	else {
		cout << "Lista vazia!" <<endl; // Lista Vazia/n�o achou */
	}
}

void Lista::Remove_fim(){
	if (!this->isEmpty(this->cabeca)){
	Remove_elemento(this->valor_fim(this->cabeca));
	}
	else {
		cout << "Lista vazia!" <<endl; // Lista Vazia/n�o achou */
	}
}

//tratamento m�todos privados
bool Lista::isEmpty(no_dado* l){
	return l==NULL;
}

int Lista::valor_inicio(no_dado* l){
	return l->info;
}

int Lista::valor_fim(no_dado* l){
	for (l = this->cabeca; l != NULL; l = l->prox){
		if (l->prox == NULL) return l->info;
	}
	return 0;
}
