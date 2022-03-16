//Lista.cpp

#include "Lista.h"

//construtor
Lista::Lista()
{
	this->cabeca = 0; //inicializa lista vazia
	this->qtd = 0;
}

//destrutor
Lista::~Lista(){
	this->libera();
	this->qtd = 0;
}

/*------------------------------------------------------------*/

/*
1 - Inserindo no inicio
*/
void Lista::insere_inicio(int i)
{
	no_dado* novo = (no_dado*) malloc(sizeof(no_dado));
	
 	novo->info = i;
 	
 	novo->prox = this->cabeca;
 	
  	this->cabeca = novo; //adiciona a partir do inicio
  	
	this->qtd++; //incrementa o contador de no-dado
}

/*
2 - Inserindo no fim
*/
void Lista::insere_fim(int i)
{
	no_dado* novo = (no_dado*) malloc(sizeof(no_dado));
	no_dado* p;
	
	if(novo)
	{
		novo->info = i;
		novo->prox = NULL;
		
		if (!this->isEmpty(this->cabeca))
		{
			p = this->cabeca;
			while(p->prox)
			{
				p = p->prox;
			}
			p->prox = novo;
		}
		else
		{
			this->cabeca = novo;
		}
	}

	this->qtd++;

}

/*
3 - Imprime lista
*/
void Lista::imprime()
{
	if (!this->isEmpty(this->cabeca))
	{
		no_dado* p; /* variavel auxiliar para percorrer a lista */
		printf("Info = ");
		
		for (p = this->cabeca; p != NULL; p = p->prox)
		{
			printf("%d - ", p->info);
		}
		printf("\n");	
	}
	else
	
	printf("Lista esta vazia!\n");
}

/*
4 - Informa o tamanho da lista
*/
void Lista::tamanho(){
	printf("Tamanho ou qtd de elementos: %d\n", this->qtd);
}

/*
5 - Busca um elemento da lista
*/
int Lista::busca(int i)
{
	no_dado* p; /* variavel auxiliar para percorrer a lista */
	
	for (p = this->cabeca; p != NULL; p = p->prox)
	{
 		if (p->info == i)
 		{
			return p->info; 
 		}
 	}
	return 0; 	
}

void Lista::busca_elemento(int i)
{
	if (busca (i) == 0)
	{
		printf("\nO valor %d esta nao esta lista!\n", i);
	}
	else
	{
		printf("\nO valor %d esta na lista!\n", i);
	}
}

/*
6 - Remove numero especifico
*/

void Lista::remove(int i)
{
	no_dado* ant = NULL; /* ponteiro para elemento anterior */
	no_dado* p = this->cabeca; /* ponteiro para percorrer a lista*/
	
	
	 /* procura elemento na lista, guardando anterior */
	while (p != NULL && p->info != i)
	{
	 	ant = p;
	 	p = p->prox;
	}
	
	if (p == NULL)
	{
		printf("Lista esta vazia!\n");
	}
	
	
	/* retira elemento */
	if (ant == NULL)
	{
		
		/* retira elemento do inicio */
		this->cabeca = p->prox;
		this->qtd--;
	}
	
	
	else
	{
		
		/* retira elemento do meio da lista */
		ant->prox = p->prox;
		this->qtd--;
	}	
	
	free(p);

}

/*
7 - Remove do inicio
*/
void Lista::remove_ini()
{
	no_dado* ant = NULL;
	no_dado* p = this->cabeca; /* ponteiro para percorrer a lista comecando no inicio*/
	
	while (p != NULL && p->info != apontaIni(this->cabeca))
	{
		ant = p;
		p = p->prox ;	
	}
	
	
	if(p == NULL)
	{
		printf("Lista eh vazia!");	
	}
	
	
	if(ant == NULL)
	{
		this->cabeca = p->prox;
		this->qtd--;
	}
	
	
	else
	{
		ant->prox = p->prox;
		this->qtd--;
	}
	free(p);
	this->qtd--;
}


/*
8 - Remove do fim
*/
void Lista::remove_fim()
{
	no_dado* ant = NULL; /* ponteiro para elemento anterior */
	no_dado* p = this->cabeca; /* ponteiro para percorrer a lista*/
	
	 /* procura elemento na lista, guardando anterior */
	while (p != NULL && p->info != this->apontaFim(this->cabeca))
	{
	 	ant = p;
	 	p = p->prox;
	}
	
	/* verifica se achou elemento */
	if (p == NULL)
	{
		printf("Lista eh vazia!");	

	}
	if (ant == NULL)
	{
		this->cabeca = p->prox;
		this->qtd--;
	}
	
	else
	{
		ant->prox = p->prox;
		this->qtd--;
	}	
	free(p);
}


/*
9 - Imprime inicio
*/
void Lista::imprimeIni()
{

	if (!this->isEmpty(this->cabeca))
	{
		printf("Inicio: %d\n", this->apontaIni(this->cabeca) );
	}
	else
	{
		printf("Lista eh vazia!");	
	}
}


/*
10 - Imprime fim
*/
void Lista::imprimeFim()
{
	if (!this->isEmpty(this->cabeca))
	{
		printf("Inicio: %d\n", this->apontaFim(this->cabeca) );
	}
	else
	{
		printf("Lista eh vazia!");	
	}
}

/*
11 - Libera lista
*/
void Lista::libera()
{
	no_dado* p = this->cabeca;
	 while (p != NULL) {
	 	no_dado* t = p->prox; // guarda refer?ncia para o pr?ximo elemento
		free(p); /* libera a mem?ria apontada por p */
		this->qtd--; //decrementa contador de qtd
	 	p = t; /* faz p apontar para o pr?ximo */
	 }
	 this->cabeca = 0; //inicializa lista vazia
}

void Lista::vazia(){
	if (!this->isEmpty(this->cabeca))
		printf("Lista nao esta vazia!\n");
	else
		printf("Lista esta vazia!\n");
}
/*-------------------------------------------------------*/

//tratamento metodos privados
bool Lista::isEmpty(no_dado* l){
	return l==NULL;
}


int Lista::apontaIni(no_dado* l)
{
	return l->info;
}

int Lista::apontaFim(no_dado* l)
{
	for (l = this->cabeca; l != NULL; l = l->prox)
	{
		if (l->prox == NULL)
		{
			return l->info;
		}
	}
	printf("No fim:",l->info);
}
