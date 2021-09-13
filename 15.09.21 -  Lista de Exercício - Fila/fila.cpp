#include "fila.h"


//insere o objeto (o) no fim da fila.
Lista* enqueue(Lista* l, int i)
{
	Lista* insere_inicio (Lista* l, int i);
}


//retira e retorna o objeto no início da fila. Ocorre erro caso esteja vazia
void dequeue (Lista* l)
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
			
			Lista* retira (Lista* l, int p->info);

		}
	
		printf("\n No-dado do inicio da fila retirado: %d\n", p->info);
}


//Retorna o objeto no início da fila, sem removê-lo. Ocorre erro no caso da fila estiver vazia.
void front (Lista* l)
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
			
			printf("\n No-dado no inicio da lista: %d\n", p->info);

		}
		else
			printf("\nERRO");
	
}



//Retorna um booleano indicando se a fila está vazia. (“True” – caso positivo).
void isempty(Lista* l)
{
	if(p->info == 0)
	{
		printf("\nTrue\n");
	}
	else
		printf("\nFalse\n");

}



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





