//Lista.cpp
#include "Lista.h"

/* funcao de inicializacao: retorna uma lista vazia */
Lista* inicializa ()
{
	return NULL;
}



/*
1 - Insercao de elementos no inicio: retorna a lista atualizada
*/
Lista* insere_inicio (Lista* l, int i)
{
	Lista* novo = (Lista*) malloc(sizeof(Lista));
	novo->info = i;
	
	if(vazia(l))													
		novo->prox = NULL;										
	else					
		novo->prox = l;	  	
	return novo;
}



/*
2-funcao imprime: imprime valores dos elementos
*/
void imprime (Lista* l)
{
	Lista* p;
	
	for(p = l; p!= NULL; p = p->prox)
	{
		printf("Info = %d\n", p->info);
	}
}



/* funcao vazia: retorna 1 se vazia ou 0 se nao vazia */
bool vazia (Lista* l)
{
	return (l == NULL);
}


/*
3 - funcao busca: busca um elemento na lista
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



/*
4 - funcao retira: retira elemento da lista
*/
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


/* funcao libera: libera elemento da lista */
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
  
	
//Continuacao...

/*
5 - mostraInicio() - retornar o no-dado no inicio da lista para exibicao, sem retira-lo
*/
void mostrainicio(Lista* l)
{
	Lista* p = l; /* faz apontar para o no inicial */
		
	/* testa se lista nao e vazia */
	if (p!= NULL)
	{
		printf("\n No-dado no inicio da lista: %d\n", p->info);
	}
}


/*
6- mostraFim() - retornar o no-dado no fim da lista para exibicao, sem retira-lo;
*/
void mostrafim(Lista* l)
{	
	Lista* p = l; /* faz apontar para o no inicial */
		
	/* testa se lista nao e vazia */
	if (!vazia(l))
	{		
		do
		{
			p = p->prox; /* avanca para o proximo no */
		}
		while (p->prox != NULL);
	}

	printf("\n No do fim da lista: %d \n", p->info); /* imprime informacao do no */
}


/* 
7 - tamanho() - retorna um valor inteiro representando a quantidade de dados contidos na lista, para que seja informado ao usuario;
*/
void tamanho (Lista* l)
{	
	Lista* p;
	int count=0;
	
	for (p=l; p != NULL; p=p->prox)
	{
		count++;
	}
	
	printf("\nQuantidade de numeros cadastrados: %d\n", count);
	
}


/*
8 - ocorrencias() - retorna o numero de ocorrencias de um dado valor inteiro informado pelo
usuario na lista (lembrando que a lista podera conter dados repetidos);
*/
void ocorrencias(Lista* l, int v)
{	
	Lista* p;
	int count=0;
	
	for (p=l; p != NULL; p=p->prox)
	{
		if (p->info == v)
		{
			count++;
		}
	}
	
	printf("\nOcorrencias do %d: %d\n ", v, count);
	
}
	

/*
9 - insereFim() - devera inserir um novo no-dado no fim da lista;
*/

/* funcao auxiliar: cria e inicializa um no */
Lista* cria (int v)
{
	Lista* p = (Lista*) malloc(sizeof(Lista));
	p->info = v;
	p->prox = NULL;
	
	return p;
}


Lista* inserefim (Lista* l, int v)
{
	Lista* novo = cria(v); /* cria novo no */
	Lista* ant = NULL; /* ponteiro para elemento anterior */
	Lista* p = l; /* ponteiro para percorrer a lista*/
 	
 	if(p == NULL)
 	{
 		return novo;	
	}
	else
	{
		/* procura posicao de insercao */
		while (p != NULL)
 		{
	 		ant = p;
	 		p = p->prox;
 		}
 	
 		/* insere elemento */
 		p->prox = novo;
 		return l;
 	}
}


/*
10 - removeInicio() - remove no-dado no inicio da Lista.
*/
Lista* removeinicio(Lista* l)
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
		free(p);
		return l;
	}
}


/*
11 - removeFim() - remove no-dado no fim da Lista.
*/
Lista* removefim(Lista* l)
{
	Lista* ant = NULL; /* ponteiro para elemento anterior */
 	Lista* p = l; /* ponteiro para percorrer a lista*/
	
	if (p == NULL)
	{
 		printf("A lista nao possui elementos para serem removidos.\n");
		return NULL;
	}
	else if(p->prox == NULL)
	{
		free(p);
		return NULL;
	}
	else
	{
		while (p->prox != NULL)
		{
 			ant = p;
 			p = p->prox;
 		}
		ant->prox = NULL;
		free(p);
		return l;
	}
}

