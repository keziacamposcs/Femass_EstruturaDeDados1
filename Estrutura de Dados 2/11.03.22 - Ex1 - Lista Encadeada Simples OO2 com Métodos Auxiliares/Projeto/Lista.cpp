//Lista.cpp

#include "Lista.h"

//construtor
Lista::Lista(){
	this->inicio = 0; //inicializa lista vazia
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
 	novo->prox = this->inicio;
  	this->inicio = novo; //adiciona a partir do inicio
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
		
		if (!this->isEmpty(this->inicio))
		{
			p = this->inicio;
			while(p->prox)
			{
				p = p->prox;
			}
			p->prox = novo;
		}
		else
		{
			this->inicio = novo;
		}
	}
	this->qtd++;

}

/*
3 - Imprime lista
*/
void Lista::imprime()
{
	if (!this->isEmpty(this->inicio))
	{
		no_dado* p; /* variavel auxiliar para percorrer a lista */
		printf("Info = ");
		
		for (p = this->inicio; p != NULL; p = p->prox)
		{
			printf("%d - ", p->info);
		}
		printf("\n");	
	}
	else printf("Lista esta vazia!\n");
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
void Lista::busca(int i)
{
	no_dado* p;

	for (p = this->inicio; p != NULL; p = p->prox)
	{
		if(p->info == i)
		{
			printf("%d - ", p);
		}
		else printf("Lista esta vazia!\n");
	}
}

/*
6 - Remove numero especifico
*/

void Lista::remove(int i)
{
	no_dado* remover;
	no_dado* p;
	
	//se possuir apenas um no...
	if(this->inicio)
	{
		if((this->inicio)->info = i)
		{
			remover = this->inicio;
			this->inicio = remover->prox;	
		}	
		else
		{
			p = this->inicio;
			while(p->prox && p->prox->info != i)
			{
				p = p->prox;
			}
			if(p->prox)
			{
				remover = p->prox;
				p->prox = remover->prox;
			}
		}
	}
	printf("Removido: %d", remover);
	this->qtd--; //incrementa o contador de no-dado

}

/*
7 - Remove do inicio
*/
void Lista::remove_ini()
{
	no_dado* p;
	p = this->inicio;
	free(p);
	this->qtd--; //incrementa o contador de no-dado

}



/*
8 - Remove do fim
*/
void Lista::remove_fim()
{
	no_dado* p; /* variavel auxiliar para percorrer a lista */
	
	if (p == NULL){
		printf("Removido: %d", p);
	}
	
	if(p->prox == NULL)
	{
		free(p);
		printf("Removido: %d", p);
	}
  	this->qtd--;
}


/*
9 - Imprime inicio
*/
void imprime_ini()
{
	no_dado* p; /* variavel auxiliar para percorrer a lista */
	p->info = this->inicio;
		
	/* testa se lista nao e vazia */
	if (p!= NULL)
	{
		printf("\n No-dado no inicio da lista: %d\n", p->info);
	}
}

/*
10 - Imprime fim
*/
void imprime_fim()
{
	no_dado* p;
	p = this->inicio;

	if (!this->isEmpty(this->inicio))
	{
		do
		{
			p = p->prox; 
		}
		while (p->prox != NULL);			
	}
	printf("\n No do fim da lista: %d \n", p->info);
}

/*
11 - Libera lista
*/
void Lista::libera(){
	no_dado* p = this->inicio;
	 while (p != NULL) {
	 	no_dado* t = p->prox; // guarda refer?ncia para o pr?ximo elemento
		free(p); /* libera a mem?ria apontada por p */
		this->qtd--; //decrementa contador de qtd
	 	p = t; /* faz p apontar para o pr?ximo */
	 }
	 this->inicio = 0; //inicializa lista vazia
}

void Lista::vazia(){
	if (!this->isEmpty(this->inicio))
		printf("Lista nao esta vazia!\n");
	else
		printf("Lista esta vazia!\n");
}
/*-------------------------------------------------------*/

//tratamento metodos privados
bool Lista::isEmpty(no_dado* l){
	return l==NULL;
}



