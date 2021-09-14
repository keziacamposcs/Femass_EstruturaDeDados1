//pilha.cpp

#include "pilha.h"


Lista* inicializa ()
{
	return NULL;
}


/* funcao imprime: imprime valores dos elementos */
void imprime (Lista* l)
{
	Lista* p;
	
	for(p = l; p!= NULL; p = p->prox)
	{
		printf("Info = %d\n", p->info);
	}
}


/*
push(o): Insere o objeto (o) no topo da pilha.
*/
Lista* push (Lista* l, int i)
{
	Lista* novo = (Lista*) malloc(sizeof(Lista));
	novo->info = i;
	novo->prox = l;
  	
	return novo;
}


/*
pop( ): Retira o objeto no topo da pilha e o retorna. 
Ocorre um erro no caso da pilhaestiver vazia.
*/
Lista* pop (Lista* l)
{
	Lista* novo = l->prox;
	free(l);
	return novo;
}


/*
size( ): Retorna o número de objetos na pilha.
*/
void size(Lista* l)
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
isEmpty( ): Retorna um booleano indicando se a pilha
está vazia. (“True” – caso positivo).
*/



/*
top( ): Retorna o objeto no topo da pilha, sem removê-lo.
Ocorre erro no caso da pilha estiver vazia.
*/


void top(Lista* l)
{
	Lista* p = l; /* faz apontar para o no inicial */
		
/* testa se lista nao e vazia */
	if (l != NULL)
	{		
		do
		{
			p = p->prox; /* avanca para o proximo no */
		}
		while (p->prox != NULL);
	}

	printf("\n No-dado no inicio da lista: %d\n", p->info);
}

