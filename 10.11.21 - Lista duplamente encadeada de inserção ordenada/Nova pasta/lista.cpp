//lista.cpp
#include "lista.h"


/* função de inicialização: retorna uma lista vazia */
Lista* inicializa()
{ 
	return NULL;
}


 /*verifica se lista está vazia: true caso positivo */
bool vazia(Lista* l)
{
	return l == NULL;
}


/*
 1- insercao no inicio: retorna a lista atualizada 
*/
Lista* insere (Lista* l, int v)
{
	
	Lista* novo = (Lista*) malloc(sizeof(Lista));
 
	novo->info = v;
 	novo->prox = l;
	novo->ant = NULL;
 
	/* verifica se lista não está vazia */
	if (l != NULL)
	l->ant = novo;
	return novo;
	
}


/************************************************************************************/

/*
2 - insercao no fim: retorna a lista atualizada
*/
Lista* insere_fim(Lista* l, int i)
{
	//se for 1a inserção... delega para insere_inicio
	if (vazia(l)) 
		return insere_inicio(l, i);
	
	//senão... faz-se o último virar penúltimo...
    Lista* novo = (Lista*) malloc(sizeof(Lista));
    
	novo->info = i;

	novo->prox = l->prox;
	
	l->prox = novo;

	return novo;
}

/*
3 - funcao imprime: imprime valores dos elementos
*/
void imprime(Lista* l)
{
	if (!vazia(l))
	{
		/* variável auxiliar aponta para nó inicial */
		Lista* p = l->prox; 
	 	printf("Info: ");
	 	
	 	/*
		garantir a travessia da lista mesmo no caso de único nó, partindo
		do inicial e usando-o tb para teste final
		*/
		do
		{ 
			printf("%d - ", p->info);	
			p = p->prox;
			
		}while(p !=l->prox);
		 
		printf("\n"); 
		
	}
	else
	printf("Lista eh vazia!\n");
}

/*
4 - funcao retira: retira elemento da lista 
*/
Lista* retira (Lista* l, int v) 
{
	Lista* ant = NULL; /* ponteiro para elemento anterior */
	
	Lista* p = l->prox; /* ponteiro para percorrer a lista*/
	
	if(vazia(l))
	{
		printf("Lista vazia!\n");
		return l;
	}
 	
	 /* procura elemento na lista, guardando anterior */
	do
	{
		 //garantir a travessia da lista mesmo no caso de unico no, partindo do inicial e usando-o tb para teste final
		if (p->info == v)
			break;	
		ant = p;
		p = p->prox;	
			
	}while(p != l->prox); 
	
	
 	/* verifica se achou elemento */
 	if (ant != NULL && p == l->prox)
 	{
 		return l; /* nao achou: retorna lista original */
	}
 	
	 //verifica se ha apenas 1 no-dado
 	if (p == p->prox)
	{ 
 		free(p);
 		return NULL;
	}

	//achou no-dado numa lista com 2 ou mais elementos 
	if (ant == NULL && p == l->prox)
	{ 
		//primeiro no-dado em p
		l->prox = p->prox; //ultimo aponta para segundo
		return l;
	}
	//senao, eh no intermediario para final
	ant->prox = p->prox;
	
	if (p == l)
	{
		//se p aponta para o ultimo no-dado
		l = ant;
	}
	return l;
	free(p);
}

// Continuacao...

/*
5 - verifica se um dado v esta na lista
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
 	
 	return NULL; // nao achou o elemento
}

void busca_dado (Lista* l, int v)
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
6 - retorna tamanho dos no dado
*/
void size (Lista* l)
{
	Lista* p;
	int count=0;
	
	for (p=l; p != NULL; p=l->prox)
	{
		count++;
	}
	
	printf("\nQuantidade de numeros cadastrados: %d\n", count);
	
}


/*
7 - remove no-dado inicial
*/
Lista* remove_inicio (Lista* l)
{
	Lista* p; /* ponteiro para percorrer a lista*/
	
	if(l == NULL)
	{
		printf("\nA lista nao possui elementos para serem removidos.\n");
		return NULL;
	}
	
	p = l->prox;
	if(p->prox == p)
	{
		l = NULL;
		free(p);
		return l;
	}
	
	l->prox = p->prox;
	free(p);

	return l;	
}


/*
8 - remove no-dado final
*/
Lista* remove_fim (Lista* l)
{
	Lista* aux = NULL;
	Lista* p = l; /* ponteiro para percorrer a lista*/
    	
	if(p == NULL)
	{
	 	printf("A lista nao possui elementos para serem removidos.\n");
		return NULL;
	}
	else if (p->prox == NULL)
	{
		return NULL;
	}
	else
	{
		while(p->prox != NULL)
		{
			aux = p;
			p = p->prox;
		}
		
		aux->prox = NULL;
		return l;
	}
}

/*
9 - imprime primeiro dado da lista
*/
void imprime_inicio (Lista* l)
{
	Lista* p = l; /* faz apontar para o no inicial */
	
	if(!vazia(l))
	{
		do
		{
			
			p = p->prox; /* avanca para o proximo no */
		
		}while (p->prox != NULL);
	}
	
	printf("\n No-dado inicio da lista: %d\n", p->info);
}


/*
10 - imprime ultimo no-dado
*/
void imprime_fim (Lista* l)
{	
	Lista* p = l; /* faz apontar para o no inicial */
		
	/* testa se lista nao e vazia */
	if (p!= NULL)
	{
		printf("\n No-dado no fim da lista: %d\n", p->info);
	}
}



/*
11 - desaloca todos os nos-dados e inicializa a lista
*/
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

