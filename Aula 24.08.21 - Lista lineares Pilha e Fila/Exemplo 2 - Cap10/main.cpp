#include <stdlib.h>
#include<stdio.h>


//Struct
struct lista 
{
	int info;
	struct lista* prox;
};

typedef struct lista Lista;


//Função de inicialização: retorna uma lista vazia
Lista* inicializa (void)
{
 return NULL;
}


//Funcao de insercao:  retorna a lista atualizada
Lista* insere (Lista* l, int i)
{
 Lista* novo = (Lista*) malloc(sizeof(Lista));
 novo->info = i;
 novo->prox = l;
 return novo;
}

/* função imprime: imprime valores dos elementos */
void imprime (Lista* l)
{
	Lista* p; /* variável auxiliar para percorrer a lista */
	for (p = l; p != NULL; p = p->prox)
 	{
		printf("info = %d\n", p->info);
	}
}

/* função vazia: retorna 1 se vazia ou 0 se não vazia */
int vazia (Lista* l)
{
 if (l == NULL)
 	return 1;
 else
 	return 0;
}

/* função vazia: retorna 1 se vazia ou 0 se não vazia */
int vazia (Lista* l)
{
 return (l == NULL);
}

/* função busca: busca um elemento na lista */
Lista* busca (Lista* l, int v)
{
 Lista* p;
 for (p=l; p!=NULL; p=p->prox)
 if (p->info == v)
 return p;
 return NULL; /* não achou o elemento */
}

int main (void)
{
 Lista* l; /* declara uma lista não inicializada */
 l = inicializa(); /* inicializa lista como vazia */
 l = insere(l, 23); /* insere na lista o elemento 23 */
 l = insere(l, 45); /* insere na lista o elemento 45 */
 return 0;
}


