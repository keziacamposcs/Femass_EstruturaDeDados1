//lista.cpp
#include "lista.h"
#include <time.h>

/* funcao de inicializacao: retorna uma lista vazia */
Lista* inicializa()
{ 
	return NULL;
}

/* verifica se lista esta vazia: true caso positivo */
bool vazia(Lista* l)
{
	return l == NULL;
}


/********************************************************/

/*
1- insercao no inicio: retorna a lista atualizada 
*/

Lista* insere_inicio(Lista* l, int v) 
{
	Lista* novo = (Lista*) malloc(sizeof(Lista));
	
	novo->info = v;
	novo->prox = l;
	novo->ant = NULL;
	
	/* verifica se lista não está vazia */
	if (l != NULL)
	{
		l->ant = novo;
	}
	return novo;
}

/*
2- insercao no fim: retorna a lista atualizada 
*/

Lista* insere_fim (Lista* l, int v) 
{
	Lista* novo = (Lista*) malloc(sizeof(Lista));
	
	novo->info = v;
	novo->prox = l;
	novo->ant = NULL;
	
	/* verifica se lista não está vazia */
	if (l != NULL)
	{
		l->prox = novo;
	}
	return novo;

}


/*
3 - funcao imprime: imprime valores dos elementos
*/
void imprime(Lista* l)
{
	if (!vazia(l))
	{
		Lista* p;
	
		for(p = l; p!= NULL; p = p->prox)
		{
			printf(" %d -", p->info);
		}
	}
	else
		printf("Lista eh vazia!\n");
}

/*
3 - Remove inicio 
*/
Lista* remove_inicio (Lista* l)
{
	Lista* p; /* ponteiro para percorrer a lista*/
	
	if(l == NULL)
	{
		printf("\nA lista nao possui elementos para serem removidos.\n");
		return NULL;
	}
	
	p = l->prox;
	if(p->prox == p)
	{
		l = NULL;
		free(p);
		return l;
	}
	
	l->prox = p->prox;
	free(p);

	return l;	
}

/*
4 - Remove no-dado final
*/
Lista* remove_fim (Lista* l)
{

}

/*
5 - Remove elemento
*/
Lista* remove_valor (Lista* l, int v) 
{

}



/*
6 - Imprimi elemento inicio -  fim
*/

void imprime_frente_fim (Lista* l)
{

}

/*
7 - Imprimi elemento fim - inicio
*/
void imprime_reverso (Lista* l)
{

}


/*
8 - Busca elemento
*/
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
 	
 	return NULL; // nao achou o elemento
}

void busca_elemento (Lista* l, int v)
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

