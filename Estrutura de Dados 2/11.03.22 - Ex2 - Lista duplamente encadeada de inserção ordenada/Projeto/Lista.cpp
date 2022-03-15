//Desenvolver métodos de classe
//Lista.cpp

#include "Lista.h"

//construtor
Lista::Lista()
{
	this->cabeca = 0; //inicializa lista vazia
	this->qtd = 0;
}

//destrutor
Lista::~Lista()
{
	this->libera(); //ideia é liberar free toda memória alocada
	this->qtd = 0;
}

/*
1 - Insere ordenado //erro
*/
void Lista::insere(int i)
{
	no_dado* p; /* ponteiro para percorrer a lista*/
 	no_dado* novo = new no_dado(i, this->cabeca);
	no_dado* ant = NULL;
	no_dado* prox = NULL;
	
	
	
	/* procura posição de inserção */
	while (p != NULL && p->info < i)
	{
		ant = p;
	 	p = p->prox;
	}
	
	if (p != NULL)
	{ 
		if(ant!=NULL)
		{
			novo->prox = ant->prox;
	 		ant->prox = novo;
			
		}
		else
		{
		 	novo->prox = p;
		 	p = novo;
		}
	
	}
	else
	{
		if(ant==NULL)
		{
		 	novo->prox = this->cabeca;
		  	this->cabeca = novo; //adiciona a partir do inicio

		}
		else
		{
			novo->ant = ant;
			ant->prox = novo;
		}
	}
	this->qtd++; //incrementa o contador de nó-dado
}


/*
2 - Remove inicio
*/
void Lista::remove_inicio()
{
	no_dado* p; /* ponteiro para percorrer a lista*/
	
	if (!this->isEmpty(this->cabeca))
	{
		printf("A lista nao possui elementos para serem removidos.\n");	
	}
	else
	{
		p = this->cabeca;
		this->cabeca = this->cabeca->prox;
	}
	
	this->qtd--; //reduz o contador de nó-dado
}


/*
3 - Remove fim
*/
void Lista::remove_fim()
{
		printf("/n");

}


/*
4 - Remove elemento
*/
void Lista::remove_elemento(int i)
{
		printf("/n");

}


/*
5 - Imprime inicio-fim
*/
void Lista::imprime_inicio_fim()
{
	
	if (!this->isEmpty(this->cabeca))
	{
		no_dado* p; /* variavel auxiliar para percorrer a lista */

		printf("Info: ");
		
		for (p = this->cabeca; p != NULL; p = p->prox)
		{
			printf("-%d", p->info);
		}
	}
	else
		printf("Lista eh vazia!");	
}


/*
6 - Imprime fim-inicio
*/
void Lista::imprime_fim_inicio()
{
	if (!this->isEmpty(this->cabeca)){
		no_dado* p; /* variável auxiliar para percorrer a lista */
		printf("Info = ");
		for (p = this->cabeca; p != NULL; p = p->prox)
			printf("%d - ", p->info);
		printf("\n");	
	} else printf("Lista está vazia!\n");
	
}


/*
7 - Busca elemento
*/
void Lista::busca_elemento(int i)
{
	no_dado* p; /* variavel auxiliar para percorrer a lista */
	
	for (p = this->cabeca; p != NULL; p = p->prox)
	{
 		if (p->info == i)
 		{
			printf("O valor %d esta na lista!", i);
 		}
 	}
 	
	printf("Nao esta na lista!");
}

void Lista::libera(){
	no_dado* p = this->cabeca;
	 while (p != NULL) {
	 	no_dado* t = p->prox; // guarda refer?ncia para o pr?ximo elemento
		free(p); /* libera a mem?ria apontada por p */
		this->qtd--; //decrementa contador de qtd
	 	p = t; /* faz p apontar para o pr?ximo */
	 }
	 this->cabeca = 0; //inicializa lista vazia
}
//tratamento métodos privados
bool Lista::isEmpty(no_dado* l){
	return l==NULL;
}


