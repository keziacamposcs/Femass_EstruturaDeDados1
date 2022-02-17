//lista_dupla.cpp
#include "lista_dupla.h"
#include <stdlib.h>

/*inicializa a lista*/
Lista2* inicializa(){
	return NULL;
}

/* inserção no início */
Lista2* insere_inicio (Lista2* l, int v){
	Lista2* novo = (Lista2*) malloc(sizeof(Lista2));
	novo->info = v;
	novo->prox = l;
	novo->ant = NULL;
	/* verifica se lista não está vazia */
	if (l != NULL)
		l->ant = novo;
 
 	return novo;
}

void imprimir_frente_fim (Lista2* l){
	if (!vazia(l)){
		cout << "Info: ";
		for(Lista2* p=l; p!=NULL; p=p->prox){
			cout << p->info << " - ";
		}
		cout << endl;
	} else cout << "Lista eh vazia!" << endl;
	
}

bool vazia(Lista2* l){
	return l==NULL;
}

/* função busca: busca um elemento na lista */
Lista2* busca (Lista2* l, int v){
	if (!vazia(l)){
	 	for (Lista2* p=l; p!=NULL; p=p->prox)
	 		if (p->info == v)
	 			return p;
	}
 	return NULL; /* não achou o elemento ou a lista é vazia */
}

/* função retira: retira elemento v da lista */
Lista2* retira (Lista2* l, int v) {
 	Lista2* p = busca(l,v);
 	//1- Testa se achou?
	if (p == NULL)
 		return l; /* não achou o elemento: retorna lista inalterada */
 	
	//2- Testa casos de encontrar!
	 /* retira elemento do encadeamento */
 	if (l == p) //É o 1o nó-dado
 		l = p->prox;
 	else //É nó-dado intermediário a último
 		p->ant->prox = p->prox;
 	//Há nó-dado seguinte a p? Se sim, atualize o ant dele!	
 	if (p->prox != NULL)
 		p->prox->ant = p->ant;
 	
	free(p);
 	
 	return l;
}
