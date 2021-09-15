//pilha.cpp

#include "pilha.h"


Lista* inicializa ()
{
	return NULL;
}



/* funcao imprime: imprime valores dos elementos */
void fimprimi (Lista* l)
{
	Lista* p;
	
	if(p != NULL){
		printf("\n[");
		for(p = l; p!= NULL; p = p->prox)
		{
			printf("%d, ", p->info);
		}
		printf("]\n");	
	}
	else
		libera (l);	
}


/* --- */



/*
push(o): Insere o objeto (o) no topo da pilha.
*/
Lista* push (Lista* l, int i)
{
	l = inserefim(l, i);
}



/*
pop( ): Retira o objeto no topo da pilha e o retorna. 
Ocorre um erro no caso da pilhaestiver vazia.
*/
Lista* pop (Lista* l)
{
	l = removeinicio(l);
}


/*
top( ): Retorna o objeto no topo da pilha, sem remove-lo.
Ocorre erro no caso da pilha estiver vazia.
*/
void top (Lista* l)
{
	Lista* p = l; /* faz apontar para o no inicial */
		
	/* testa se lista nao e vazia */
	if (!isempty(l))
	{		
		do
		{
			p = p->prox; /* avanca para o proximo no */
		}
		while (p->prox != NULL);
	}

	printf("\n No-dado no inicio da lista: %d\n", p->info);
}

/*
isEmpty( ): Retorna um booleano indicando se a pilha está vazia. (“True” – caso
positivo).
*/

Lista* isempty (Lista* l)
{
	bool vazia (l);
}


void isempty_informe (Lista* l)
{

	if (!isempty(l))
	{
		printf("False");
	}
	else
	{
		printf("True");
	}
}



/*
size( ): Retorna o número de objetos na pilha.
*/
void size (Lista* l)
{	
	Lista* p;
	int count=0;
	
	for (p=l; p != NULL; p=p->prox)
	{
		count++;
	}
	
	printf("\nQuantidade de numeros cadastrados: %d\n", count);
	
}


