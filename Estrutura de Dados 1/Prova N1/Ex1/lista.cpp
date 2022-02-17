//Lista.cpp
#include "lista.h"


/* funcao de inicializacao: retorna uma lista vazia */
Lista* inicializa ()
{
	return NULL;
}



/*
1 - Insercao de elementos no inicio: retorna a lista atualizada
*/
Lista* insere_ordenado (Lista* l, int x)
{
	Lista* novo = (Lista*) malloc(sizeof(Lista));
	
	novo->info = x;
	Lista* antigo = NULL;
	
	Lista* ponteiro = l;
	
	while (ponteiro != NULL && ponteiro->info < x)
	{
		antigo = ponteiro;
		ponteiro = ponteiro->prox;
	}
	
	if (antigo == NULL)
	{ 
		novo->prox = l;
		l = novo;
	}
	else 
	{ 
		novo->prox = antigo->prox;
		antigo->prox = novo;
	}
	return l;
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


/*
3 - ocorrencias() - retorna o numero de ocorrencias de um dado valor inteiro informado pelo
usuario na lista (lembrando que a lista podera conter dados repetidos);
*/
void cont_impares_rec (Lista* l)
{
	if(l == NULL)
		return;
		
	if(l->info !=2)	
 	{
 		
		printf("info: %d\n",l->info);
 	}
 	cont_impares_rec (l -> prox);

}
	








