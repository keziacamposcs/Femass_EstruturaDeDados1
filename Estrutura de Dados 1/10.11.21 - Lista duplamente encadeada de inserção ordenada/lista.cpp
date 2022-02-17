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

Lista* cria (int v)
{
 Lista* p = (Lista*) malloc(sizeof(Lista));
 p->info = v;
 return p;
}

/*	-------------------------------------------	*/

/*
1- insercao no inicio: retorna a lista atualizada 
*/
Lista* insere_ordenado (Lista* l, int v)
{
	Lista* novo = cria(v); /* cria novo nó */
	Lista* ant = NULL; /* ponteiro para elemento anterior */
	Lista* p = l; /* ponteiro para percorrer a lista*/
	
	/* procura posição de inserção */
	while (p != NULL && p->info < v)
	{
		ant = p;
	 	p = p->prox;
	}
	 
	/* insere elemento */
	if (ant == NULL)
	{ 
	 	/* insere elemento no início */
	 	novo->prox = l;
	 	l = novo;
	}
	else
	{ 
	 	/* insere elemento no meio da lista */
	 	novo->prox = ant->prox;
	 	ant->prox = novo;
	}
	
	return l;
}


/*
2 - funcao imprime: imprime valores dos elementos
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
		printf("A lista nao possui elementos para serem removidos.\n");
		return NULL;
	}
	else
	{
		p = l;
		l = l->prox;
		return l;
	}

}

/*
4 - Remove no-dado final
*/
Lista* remove_fim (Lista* l)
{
	Lista* aux = NULL;
	Lista* p = l; /* ponteiro para percorrer a lista*/
    	
	if(p == NULL)
	{
	 	printf("A lista nao possui elementos para serem removidos.\n");
		return NULL;
	}
	else if (p->prox == NULL)
	{
		return NULL;
	}
	else
	{
		while(p->prox != NULL)
		{
			aux = p;
			p = p->prox;
		}
		
		aux->prox = NULL;
		return l;
	}
}

/*
5 - Remove elemento
*/
Lista* remove_elemento (Lista* l, int v) 
{
	Lista* ant = NULL; /* ponteiro para elemento anterior */
	
	Lista* p = l->prox; /* ponteiro para percorrer a lista*/
	
	if(vazia(l))
	{
		printf("Lista vazia!\n");
		return l;
	}
 	
	 /* procura elemento na lista, guardando anterior */
	do
	{
		 //garantir a travessia da lista mesmo no caso de unico no, partindo do inicial e usando-o tb para teste final
		if (p->info == v)
			break;	
		ant = p;
		p = p->prox;	
			
	}while(p != l->prox); 
	
	
 	/* verifica se achou elemento */
 	if (ant != NULL && p == l->prox)
 	{
 		return l; /* nao achou: retorna lista original */
	}
 	
	 //verifica se ha apenas 1 no-dado
 	if (p == p->prox)
	{ 
 		free(p);
 		return NULL;
	}

	//achou no-dado numa lista com 2 ou mais elementos 
	if (ant == NULL && p == l->prox)
	{ 
		//primeiro no-dado em p
		l->prox = p->prox; //ultimo aponta para segundo
		return l;
	}
	//senao, eh no intermediario para final
	ant->prox = p->prox;
	
	if (p == l)
	{
		//se p aponta para o ultimo no-dado
		l = ant;
	}
	return l;
	free(p);
}



/*
6 - Imprimi elemento inicio -  fim
*/

void imprime_inicio_fim (Lista* l)
{
	if (!vazia(l))
	{
		printf("Info: ");
		
		for(Lista* p=l; p!=NULL; p=p->prox)
		{
			printf("-%d", p->info);
		}
	}
	else
		printf("Lista eh vazia!");	
}

/*
7 - Imprimi elemento fim - inicio
*/
void imprime_fim_inicio (Lista* l)
{
	if (!vazia(l))
	{
		printf("Info: ");
		
		for(Lista* p=l; p!=NULL; p=p->prox)
		{
			printf("-%d", p->prox);
		}
	}
	else
		printf("Lista eh vazia!");	
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
