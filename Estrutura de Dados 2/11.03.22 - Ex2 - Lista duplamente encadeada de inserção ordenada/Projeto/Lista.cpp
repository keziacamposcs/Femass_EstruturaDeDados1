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
1 - Insere ordenado
*/
void Lista::insere(no_dado* l, int i)
{
	no_dado* p; // ponteiro para percorrer a lista
 	no_dado* novo = new no_dado(i, this->cabeca); //direciona o novo no como cabeca


 	if (this->isEmpty(this->cabeca)) //se cabeca for vazio
	{
		this->cabeca = novo; //cabeca = novo
 	}
 	
 	else 
	if (this->cabeca->info     >=     novo->info)  //se info(cabeca) for maior/igual que info(novo)
	{	
	 	novo->prox = this->cabeca;
	 	
	 	novo->prox->ant = novo;
	 	
	 	this->cabeca = novo;
	}
	 
	else 
	{
	 	p = this->cabeca;	
	 	
	 	//enquanto prox não for NULO & prox(info) menor que o novo(info)
	 	while (p->prox != NULL     &&     p->prox->info   <     novo->info) //encontra o no anterior do inserido
		{
			p = p->prox;
	 	}
	 	
	 	novo->prox = p->prox; //prox(novo) = prox(p)
	 		 	
	 	//Se for inserido no final...
	 	if (p->prox != NULL) //se prox(p) nao for NULO ou ultimo...
		{
			novo->prox->ant = novo;
	 	}
	 	
	 	p->prox = novo;
	 	
	 	
	 	novo->ant = p;
	}
}

<<<<<<< HEAD
=======



>>>>>>> 5ea660556fe4a199e15d059a72059e3c60bfe35b
/*
2 - Remove inicio
*/
void Lista::remove_inicio()
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
3 - Remove fim
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
4 - Remove elemento
*/
int Lista::remove_elemento(int i)
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
		printf("\n");	
	}
	else
		printf("Lista eh vazia!");	
}


/*
6 - Imprime fim-inicio
*/
void Lista::imprime_fim_inicio() 
{
	if (!this->isEmpty(this->cabeca))
	{
<<<<<<< HEAD
		no_dado* p; /* variável auxiliar para percorrer a lista */
		
		printf("Info = ");
		
		for (p = this->cabeca; p != NULL; p = p->prox)
		
			printf("%d - ", p->info);
			
		printf("\n");	
	} 
	else 
	
	printf("Lista está vazia!\n");
	
=======
		no_dado* p = this->cabeca;
		
		while(p->prox != NULL)
		{
			p = p->prox;
		}
		
		while (p != this->cabeca)
		{
			printf("-%d", p->info);
			p = p->ant;
		}
		printf("-%d", p->info);
		printf("\n");	
	}
	else
	{
		printf("Lista eh vazia!");	
	}
>>>>>>> 5ea660556fe4a199e15d059a72059e3c60bfe35b
}


/*
7 - Busca elemento
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

/*----------------------------------------*/

void Lista::libera()
{
	no_dado* p = this->cabeca;
	
	 while (p != NULL)
	 {
	 	no_dado* t = p->prox; // guarda refer?ncia para o pr?ximo elemento
		
		free(p); /* libera a mem?ria apontada por p */
		
		this->qtd--; //decrementa contador de qtd
	 	
		p = t; /* faz p apontar para o pr?ximo */
	 }
	 
	 this->cabeca = 0; //inicializa lista vazia
}



//Aponta para o no inicial
int Lista::apontaIni(no_dado* l)
{
	return l->info;
}

//Aponta para o no Final
int Lista::apontaFim(no_dado* l)
{
	for (l = this->cabeca; l != NULL; l = l->prox)
	{
		if (l->prox == NULL)
		{
			return l->info;
		}
	}
	return 0;
}


//tratamento métodos privados
bool Lista::isEmpty(no_dado* l)
{
	return l==NULL;
}


