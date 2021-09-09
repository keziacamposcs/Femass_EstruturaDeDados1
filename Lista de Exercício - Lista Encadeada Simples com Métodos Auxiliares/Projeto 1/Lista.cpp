//Lista.cpp
#include "Lista.h"

/* função de inicialização: retorna uma lista vazia */
Lista* inicializa ()
{
	return NULL;
}



/* inserção no início: retorna a lista atualizada */
Lista* insere_inicio (Lista* l, int i)
{
	Lista* novo = (Lista*) malloc(sizeof(Lista));
	novo->info = i;
	novo->prox = l;
	
	return novo;
}



/* função imprime: imprime valores dos elementos */
void imprime (Lista* l)
{
	if (!vazia(l))
	{
		cout << "Info: ";
		Lista* p; /* variável auxiliar para percorrer a lista */
	 	for (p = l; p != NULL; p = p->prox)
	 		cout << p->info << ", ";
	 	cout << endl;
	} 
	else
	cout << "Lista vazia! \n";	
}



/* função vazia: retorna 1 se vazia ou 0 se não vazia */
bool vazia (Lista* l)
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

void busca_informe (Lista* l, int v)
{
	if (!vazia(busca (l, v)))
	{
		cout << "O valor " << v << " está na lista! \n";
	} else 
		cout << "O valor " << v << " não está na lista! \n";
}



/* função retira: retira elemento da lista */
Lista* retira (Lista* l, int v)
{
	Lista* ant = NULL; /* ponteiro para elemento anterior */
	Lista* p = l; /* ponteiro para percorrer a lista*/
	
	/* procura elemento na lista, guardando anterior */
	while (p != NULL && p->info != v)
	{
		ant = p;
	 	p = p->prox;
	}
	/* verifica se achou elemento */
	if (p == NULL)
	
	
//Continuacao...
/* mostraInicio() - retornar o nó-dado no início da lista para exibição, sem retirá-lo */
Lista* mostrainicio (int v)
{
	Lista* novo = (Lista*) malloc(sizeof(Lista));
	return novo;
}


/* mostraFim() - retornar o nó-dado no fim da lista para exibição, sem retirá-lo;*/
Lista* mostrafim (Lista* l)
{
	
}


/* tamanho() - retorna um valor inteiro representando a quantidade de dados contidos na lista, para que seja informado ao usuário;*/
void tamanho (Lista* l)
{
	rintf("\nQuantidade de numeros cadastrados: %d\n", l);
}


/* ocorrencias() - retorna o número de ocorrências de um dado valor inteiro informado pelo usuário na lista (lembrando que a lista poderá conter dados repetidos);*/
void ocorrencias(Lista* l)
{
	
}


/*insereFim() - deverá inserir um novo nó-dado no fim da lista;*/
Lista* insereFim (Lista* l)
{
	
}


/*removeInicio() - remove nó-dado no início da Lista.*/
Lista* removeInicio (Lista* l)
{
	
}


/*removeFim() - remove nó-dado no fim da Lista.*/
Lista* removeFim (Lista* l)
{
	
}
