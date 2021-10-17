
#include "lista_simples_circular.h"

Lista* inicializa()
{
	return NULL;
}

bool vazia (Lista* l)
{
	return l == NULL;
}

Lista* insere_inicio (Lista* l, int i)
{
	// l e o ponteiro para o ulimo no-dado, l->prox estara apontando para 1o no-dado
	// criando novo no-dado
	Lista* novo = (Lista*) malloc(sizeof(Lista));
	novo -> info = i;
	
	//testa se e o primeiro encadeamento
	if (vazia(l))
	{
		novo->prox = novo;
		return novo;
	}
	else
	{
		novo->prox = l->prox;
		l->prox = novo;
		return l;
	}
	return l;
}

Lista* insere_fim (Lista* l, int i)
{
	if (vazia(l))
	{
		return insere_inicio(l, i);
	}
	else
	{
		Lista* novo = (Lista*) malloc (sizeof(Lista));
		novo -> info = i;
		novo -> prox = l -> prox;
		l->prox = novo;

		return novo;
	}
}

void imprime(Lista* l){
	if (!vazia(l))
	{
		Lista* p = l->prox; /* variavel auxiliar aponta para n0 inicial */
	 	printf("Info: ");
	 	
		do
		{ 
			printf("%d - ", p->info);	//garantir a travessia da lista mesmo no caso de unico no, partindo do inicial e usando-o tb para teste final
			p = p->prox;
		}
		while(p !=l->prox); 
		
		printf("\n"); 
		
	}
	else 
	
	printf("Lista eh vazia!\n");
}


Lista* retira(Lista* l, int v)
{
	if(vazia(l))
	{
		printf("Lista vazia!\n");
		return l;
	}
		
	Lista* ant = NULL; // ponteiro para elemento anterior
	Lista* p = l->prox; // ponteiro para percorrer a lista
 	
	// procura elemento na lista, guardando anterior 
	do
	{ 
		//garantir a travessia da lista mesmo no caso de unico no, partindo do inicial e usando-o tb para teste final
		if (p->info == v)
		{
			break;
		}
		ant = p;
		p = p->prox;
			
	}
	while(p != l->prox); 
	
 	//verifica se achou elemento
 	if (ant != NULL && p == l->prox) //ok
 	{
 		return l; // nao achou: retorna lista original
 	}
	
	//verifica se ha apenas 1 no-dado
 	if (p == p->prox)
	{ 
 		free(p);
 		return NULL;
	}
	
	//achou no-dado numa lista com 2 ou mais elementos 
	if (ant == NULL && p == l->prox) //ok 
	{
		//primeiro no-dado em p
		l->prox = p->prox; //ultimo aponta para segundo
		free(p);
		return l;
	}
	//senao, eh no intermediario para final
	ant->prox = p->prox;
	if (p == l)
	{
		//se p aponta para o ultimo no-dado
		l = ant;
	} 
	
	free(p);
	
	return l;
}
