//Desenvolver metodos de classe
//Lista.cpp

#include "Lista.h"

//construtor
Lista::Lista(){
	this->cabeca = 0; //inicializa lista vazia
	this->calda = 0;
	this->qtd = 0;
}

//destrutor
Lista::~Lista(){
	this->libera(); //ideia e liberar free toda memoria alocada
	this->qtd = 0;
}


/*
1 - Insere inicio
*/
void Lista::insere_inicio(int i)
{
	no_dado* novo = (no_dado*) malloc(sizeof(no_dado));
 	novo->info = i;
 	novo->prox = this->cabeca;
  	this->cabeca = novo; //adiciona a partir do inicio

  	this->qtd++;
}


/*
2 - Insere fim
*/
void Lista::insere_fim(int i)
{
	no_dado* novo = (no_dado*) malloc(sizeof(no_dado));
	
 	novo->info = i;
 	novo->prox = this->calda;
  	this->calda = novo; //adiciona a partir do final

  	this->qtd++;
}


/*
3- Imprime lista 
*/
void Lista::imprime()
{
	if (!this->isEmpty(this->cabeca))
	{
		no_dado* p; /* variavel auxiliar para percorrer a lista */
		printf("Info = ");
		for (p = this->cabeca; p != NULL; p = p->prox)
			printf("%d - ", p->info);
		printf("\n");	
	} else printf("Lista esta vazia!\n");
}

// Verifica se está vazia
void Lista::vazia()
{
	if (!this->isEmpty(this->cabeca))
		printf("Lista nao esta vazia!\n");
	else
		printf("Lista esta vazia!\n");
}


/*
4 - Informa tamanho
*/
void Lista::tamanho()
{
	printf("Tamanho ou qtd de elementos: %d\n", this->qtd);
}

/*
5 - Busca um elemento na lista
*/
void Lista::busca()
{
	no_dado* p; /* variavel auxiliar para percorrer a lista */
	
	for (p=l; p!=NULL; p=p->prox)
	{

	}
}


/*
6 - Retira numero especifico
*/
void Lista::retira()
{
	no_dado* p; /* variavel auxiliar para percorrer a lista */


}


/*
7 - Retira do inicio da lista
*/
void Lista::retira_inicio()


/*
8 - Retira do fim da lista
*/
void Lista::retira_fim()


/*
9 - Retornar o no-dado no inicio
*/
void Lista::imprime_inicio()


/*
10 - Retornar o no-dado no fim
*/
void Lista::imprime_fim()

/*
11 - Libera lista
*/
void Lista::libera()
{
	no_dado* p = this->cabeca;
	while (p != NULL)
	{
	 	no_dado* t = p->prox; // guarda referencia para o proximo elemento
		free(p); /* libera a memoria apontada por p */
		this->qtd--; //decrementa contador de qtd
	 	p = t; /* faz p apontar para o proximo */
	}
	this->cabeca = 0; //inicializa lista vazia
}


//tratamento metodos privados
bool Lista::isEmpty(no_dado* l){
	return l==NULL;
}

