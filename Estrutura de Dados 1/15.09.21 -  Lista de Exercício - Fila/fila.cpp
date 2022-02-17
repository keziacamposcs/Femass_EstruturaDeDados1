//fila.cpp

#include "fila.h"


Lista* inicializa ()
{
	return NULL;
}



/* funcao imprime: imprime valores dos elementos */
void fimprimi (Lista* l)
{
	Lista* p;
	
	if (!isempty(l))
	{
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



/*
enqueue(o): insere o objeto (o) no fim da fila.
*/
Lista* enqueue (Lista* l, int i )
{
	l = inserefim(l, i);
}



/*
dequeue( ): retira e retorna o objeto no início da fila.
Ocorre erro caso esteja vazia.
*/
Lista* dequeue (Lista* l)
{
	l = removeinicio(l);
}



/*
size( ): Retorna o número de objetos na fila.
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



/*
isEmpty( ): Retorna um booleano indicando se a 
fila está vazia. (“True” – caso positivo).
*/

bool isempty (Lista* l)
{
	return (l == NULL);
}


/*
front( ): Retorna o objeto no início da fila, sem removê-lo.
Ocorre erro no caso da fila estiver vazia.
*/
Lista* front (Lista* l)
{
	if (!isempty(l))
	{
		mostrainicio(l);
	}
	else
		printf("Error");
}

