//Lista.cpp
#include "Lista.h"

/* fun��o de inicializa��o: retorna uma lista vazia */
Lista* inicializa ()
{
	return NULL;
}



/* inser��o no in�cio: retorna a lista atualizada */
Lista* insere_inicio (Lista* l, int i)
{
	Lista* novo = (Lista*) malloc(sizeof(Lista));
	novo->info = i;
	novo->prox = l;
	
	return novo;
}



/* fun��o imprime: imprime valores dos elementos */
void imprime (Lista* l)
{
	if (!vazia(l))
	{
		cout << "Info: ";
		Lista* p; /* vari�vel auxiliar para percorrer a lista */
	 	for (p = l; p != NULL; p = p->prox)
	 		cout << p->info << ", ";
	 	cout << endl;
	} 
	else
	cout << "Lista vazia! \n";	
}



/* fun��o vazia: retorna 1 se vazia ou 0 se n�o vazia */
bool vazia (Lista* l)
{
	return (l == NULL);
}


/* fun��o busca: busca um elemento na lista */
Lista* busca (Lista* l, int v)
{
	Lista* p;
	for (p=l; p!=NULL; p=p->prox)
 		if (p->info == v)
 			return p;
 			
 	return NULL; /* n�o achou o elemento */
}

void busca_informe (Lista* l, int v)
{
	if (!vazia(busca (l, v)))
	{
		cout << "O valor " << v << " est� na lista! \n";
	} else 
		cout << "O valor " << v << " n�o est� na lista! \n";
}



/* fun��o retira: retira elemento da lista */
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
/* mostraInicio() - retornar o n�-dado no in�cio da lista para exibi��o, sem retir�-lo */
Lista* mostrainicio (int v)
{
	Lista* novo = (Lista*) malloc(sizeof(Lista));
	return novo;
}


/* mostraFim() - retornar o n�-dado no fim da lista para exibi��o, sem retir�-lo;*/
Lista* mostrafim (Lista* l)
{
	
}


/* tamanho() - retorna um valor inteiro representando a quantidade de dados contidos na lista, para que seja informado ao usu�rio;*/
void tamanho (Lista* l)
{
	rintf("\nQuantidade de numeros cadastrados: %d\n", l);
}


/* ocorrencias() - retorna o n�mero de ocorr�ncias de um dado valor inteiro informado pelo usu�rio na lista (lembrando que a lista poder� conter dados repetidos);*/
void ocorrencias(Lista* l)
{
	
}


/*insereFim() - dever� inserir um novo n�-dado no fim da lista;*/
Lista* insereFim (Lista* l)
{
	
}


/*removeInicio() - remove n�-dado no in�cio da Lista.*/
Lista* removeInicio (Lista* l)
{
	
}


/*removeFim() - remove n�-dado no fim da Lista.*/
Lista* removeFim (Lista* l)
{
	
}
