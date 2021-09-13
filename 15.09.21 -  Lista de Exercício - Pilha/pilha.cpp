//pilha.cpp

#include "pilha.h"

/*
push(o): Insere o objeto (o) no topo da pilha.
*/
Lista* push (Lista* l, int i)
{
	l = insere_inicio(l, int j); 
}


/*
pop( ): Retira o objeto no topo da pilha e o retorna. 
Ocorre um erro no caso da pilhaestiver vazia.
*/

//ERRADO
void pop (Lista* l)
{
	if ( l!= 0)
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
		
			printf("\n No-dado no inicio da lista: %d\n", p->info);	
	}
	else
		printf("\nERRO\n");
	

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
void isempty (Lista* l)
{
	vazia(l);
}


/*
top( ): Retorna o objeto no topo da pilha, sem removê-lo.
Ocorre erro no caso da pilha estiver vazia.
*/
void top (Lista* l)
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
	
		printf("\n No-dado no inicio da lista: %d\n", p->info);
	}

