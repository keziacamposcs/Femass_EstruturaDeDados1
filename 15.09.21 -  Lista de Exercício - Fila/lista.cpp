//Lista.cpp
#include "lista.h"

/* funcao de inicializacao: retorna uma lista vazia */
Lista* inicializa ()
{
	return NULL;
}



/* inserção no início: retorna a lista atualizada */
Lista* insere_inicio (Lista* l, int i)
{
	Lista* novo = (Lista*) malloc(sizeof(Lista));
	novo->info = i;
	novo->prox = l;
  	
	return novo;
}



/* função imprime: imprime valores dos elementos */
void imprime (Lista* l)
{
	Lista* p;
	
	for(p = l; p!= NULL; p = p->prox)
	{
		printf("Info = %d\n", p->info);
	}
}



/* função vazia: retorna 1 se vazia ou 0 se não vazia */
bool vazia (Lista* l)
{
	return (l == NULL);
}



/* função busca: busca um elemento na lista */
Lista* busca (Lista* l, int v)
{
	Lista* p;
	for (p=l; p!=NULL; p=p->prox)
	{
 		if (p->info == v)
 		{
 			return p;
 		}
 	}
 	
 	return NULL; /* nao achou o elemento */
}

void busca_informe (Lista* l, int v)
{
	if (!vazia(busca (l, v)))
	{
		printf("O valor %d esta na lista!", v);
	}
	else
	{
		printf("O valor %d nao esta na lista!", v);
	}
}




/* função retira: retira elemento da lista */
Lista* retira (Lista* l, int v)
{
	Lista* ant = NULL; /* ponteiro para elemento anterior */
	Lista* p = l; /* ponteiro para percorrer a lista*/
	
	/* procura elemento na lista, guardando anterior */
	while (p != NULL && p->info != v)
	{
		ant = p;
	 	p = p->prox;
	}
	
	/* verifica se achou elemento */
	if (p == NULL)
	{
		return l; /*nao achou: retorna lista original*/
	}
	
	
	//Senao...
	
	/*retira elemento*/
	if(ant == NULL)
	{
		l = p->prox; /*retira elemento do inicio*/
	}
	else
	{
		ant->prox = p->prox; /*retira elemento do meio da lista*/
	}
	free(p);
	return l;
}




void libera (Lista* l)
{
	Lista* p = l;
	
	while(p != NULL)
	{
		Lista* t = p->prox;
		
		while(p !=NULL)
		{
			Lista* t = p->prox; /*guarda referencia para o proximo elemento*/
			free(p);
			p = t;
		}
	}
}
