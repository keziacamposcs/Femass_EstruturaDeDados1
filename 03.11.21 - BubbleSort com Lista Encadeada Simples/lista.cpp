//lista.cpp
#include "lista.h"

Lista* inicializa(){
	return NULL;
}

Lista* insereInicio(Lista* l, int i){
	Lista* novo= (Lista*) malloc(sizeof(Lista));
	novo->info=i;
	novo->prox = l;
	return novo;
}

void imprime(Lista* l){
	Lista* p;
	printf("Info = ");
	for(p=l; p!=NULL; p=p->prox)
		printf("%d - ", p->info);
	printf("\n");
}

bool vazia(Lista* l){
	return (l==NULL);
}

Lista* busca(Lista* l, int v){
	Lista* p;
	for(p=l; p!=NULL; p=p->prox){
		if(p->info == v)
			return p; //achou o elemento v
	}
	return NULL; //não achou o elemento v
}

Lista* retira(Lista* l, int v){
	Lista* ant=NULL;
	Lista* p=l;
	
	while(p!=NULL && p->info!=v){
		ant=p;
		p=p->prox;
	}
	//verifica se achou elemento
	if(p==NULL)
		return l; //Nao achou - retorna lista original l
	if(ant==NULL)
		l=p->prox; //remove elemento no inicio
	else
	 	ant->prox = p->prox; //remove elemento no meio ou fim
	free(p);
	return l; //retorna nova lista l resultante

}

void libera(Lista* l){
	Lista* p=l;
	while(p!=NULL){
		Lista* t=p->prox;
		free(p);
		p=t;
	}
}

int Tamanho_lista (Lista* l){ //calcula quantidade de dados na Lista
	Lista* p=l;
	int cont=0;
	while(p!=NULL){
		cont++;
		p=p->prox;
	}
	return cont; //retorna quantidade de dados na Lista
}



