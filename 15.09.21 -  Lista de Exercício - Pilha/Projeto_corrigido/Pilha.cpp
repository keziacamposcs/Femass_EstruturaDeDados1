//Pilha.cpp

#include "pilha.h"


/* funcao imprime: imprime valores dos elementos */
void fimprimi (Lista* l)
{
	Lista* p;
	
		printf("\n[");
		for(p = l; p!= NULL; p = p->prox)
		{
			printf("%d, ", p->info);
		}
		printf("]\n");	
}





/* --- */



/*
push(o): Insere o objeto (o) no topo da pilha.
*/
Lista* push (Lista* l, int i)
{
	l = insere_inicio(l, i);
}

/*
pop( ): Retira o objeto no topo da pilha e o retorna. 
Ocorre um erro no caso da pilhaestiver vazia.
*/
Lista* pop (Lista* l)
{
	Lista* p;

	if(p != NULL){
		l = removeinicio(l);
	}
	else
		printf("\nerro\n");
}

/*
top( ): Retorna o objeto no topo da pilha, sem remove-lo.
Ocorre erro no caso da pilha estiver vazia.
*/
Lista* top (Lista* l)
{
	Lista* p;

	if(p != NULL)
	{
		mostrainicio(l);
	}
	else
		printf("\nerro\n");
}

/*
isEmpty( ): Retorna um booleano indicando se a pilha esta vazia. ('True' = caso
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
size( ): Retorna o numero de objetos na pilha.
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
