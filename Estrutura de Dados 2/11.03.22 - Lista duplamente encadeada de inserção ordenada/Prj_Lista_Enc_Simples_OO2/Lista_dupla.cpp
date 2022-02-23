//Desenvolver métodos de classe
//Lista_dupla.cpp

#include "Lista.h"

//construtor
Lista::Lista(){
	this->cabeca = 0; //inicializa lista vazia
	this->qtd = 0;
	this->aux = 0;

}

//destrutor
Lista::~Lista(){
	this->libera(); //ideia é liberar free toda memória alocada
	this->qtd = 0;
}





/*
1- insercao no inicio: retorna a lista atualizada 
*/
void Lista::insere_ordenado(int i)
{
 	no_dado* novo = new no_dado(i, this->cabeca);
	no_dado* ant = NULL;
	
  	this->qtd++; //incrementa o contador de nó-dado
	no_dado* p = this->cabeca;
	
	/* procura posição de inserção */
  	while (p!=NULL && p->info < i)
  	{
  		ant = p;
		p = p->prox; 	
	}

	/*insere elemento*/
	if(this->ant == NULL)
	{
	 	/*insere elemento no início*/
		novo->prox = l;
	 	l = novo;		
	}
	else
	{
		
	}
	return l;
}

void Lista::imprime(){
	if (!this->isEmpty(this->cabeca)){
		no_dado* p; /* variável auxiliar para percorrer a lista */
		printf("Info = ");
		for (p = this->cabeca; p != NULL; p = p->prox)
			printf("%d - ", p->info);
		printf("\n");	
	} else printf("Lista está vazia!\n");
}

void Lista::vazia(){
	if (!this->isEmpty(this->cabeca))
		printf("Lista não está vazia!\n");
	else
		printf("Lista está vazia!\n");
}

void Lista::libera(){
	no_dado* p = this->cabeca;
	 while (p != NULL) {
	 	no_dado* t = p->prox; // guarda referência para o próximo elemento
		free(p); /* libera a memória apontada por p */
		this->qtd--; //decrementa contador de qtd
	 	p = t; /* faz p apontar para o próximo */
	 }
	 this->cabeca = 0; //inicializa lista vazia
}

void Lista::tamanho(){
	printf("Tamanho ou qtd de elementos: %d\n", this->qtd);
}

//tratamento métodos privados
bool Lista::isEmpty(no_dado* l){
	return l==NULL;
}


