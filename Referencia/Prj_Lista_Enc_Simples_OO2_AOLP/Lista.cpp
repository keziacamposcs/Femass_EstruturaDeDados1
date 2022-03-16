//Desenvolver métodos de classe
//Lista.cpp

#include "Lista.h"

//construtor
Lista::Lista(){
	this->cabeca = 0; //inicializa lista vazia
	this->qtd = 0;
}

//destrutor
Lista::~Lista(){
	this->libera(); //ideia é liberar free toda memória alocada
	this->qtd = 0;
}

void Lista::insere_inicio(int i){
	//no_dado* novo = (no_dado*) malloc(sizeof(no_dado));
	//novo->info = i;
 	//novo->prox = this->cabeca;
 	no_dado* novo = new no_dado(i, this->cabeca);
  	this->cabeca = novo; //adiciona a partir do início
  	this->qtd++; //incrementa o contador de nó-dado
}

void Lista::insere_fim(int v){
	if (this->isEmpty(this->cabeca)){
		this->insere_inicio(v);		//Lista vazia, inserir no inicio
	}
	else{
		no_dado* novo = new no_dado(v, this->cabeca); /* cria novo nó */
		//novo->info = v;
		no_dado* ant = NULL; /* ponteiro para elemento anterior */
		no_dado* p = this->cabeca; /* ponteiro para percorrer a lista*/
		/* procura posição de inserção */
		while (p != NULL /*&& p->info < v*/) {
			ant = p;
			p = p->prox;
		}
		/* insere elemento */
		if (ant == NULL) { 
			novo->prox = this->cabeca;
			this->cabeca = novo;
			this->qtd++;
		}
		else { 
			novo->prox = ant->prox;
			ant->prox = novo;
			this->qtd++;
		}
	}
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

void Lista::imprime_inicio(){
	if (!this->isEmpty(this->cabeca)){
		cout << this->valor_inicio(this->cabeca) << " -" << endl;
	}else cout << "Lista está vazia!" <<endl;
}

void Lista::imprime_fim(){
	if (!this->isEmpty(this->cabeca)){
		cout << this->valor_fim(this->cabeca) << " -" << endl;
	}else cout << "Lista está vazia!" <<endl;
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

int Lista::busca(int v){
 	no_dado* p;
 	for (p= this->cabeca; p!=NULL; p=p->prox){
	 	if (p->info == v)  	return p->info;
 	}
 	return 0; /* não achou o elemento */
}

int Lista::retira (int v){
	no_dado* ant = NULL; /* ponteiro para elemento anterior */
	no_dado* p = this->cabeca; /* ponteiro para percorrer a lista*/
	 /* procura elemento na lista, guardando anterior */
	while (p != NULL && p->info != v) {
	 	ant = p;
	 	p = p->prox;
	}
	/* verifica se achou elemento */
	if (p == NULL) return 0; /* n?o achou: retorna lista original */
	/* retira elemento */
	if (ant == NULL) {
	/* retira elemento do inicio */
		this->cabeca = p->prox;
		this->qtd--;
	}
	else {
	/* retira elemento do meio da lista */
		ant->prox = p->prox;
		this->qtd--;
	}	
	free(p);
	return 1;
}

void Lista::retira_inicio(){
	no_dado* ant = NULL; /* ponteiro para elemento anterior */
	no_dado* p = this->cabeca; /* ponteiro para percorrer a lista*/
	 /* procura elemento na lista, guardando anterior */
	while (p != NULL && p->info != valor_inicio(this->cabeca)) {
	 	ant = p;
	 	p = p->prox;
	}
	/* verifica se achou elemento */
	if (p == NULL) cout << "Lista Vazia!" <<endl; 
	/* retira elemento */
	if (ant == NULL) {
		this->cabeca = p->prox;
		this->qtd--;
	}
	else {
		ant->prox = p->prox;
		this->qtd--;
	}	
	free(p);
	cout << "Elemento removido" << endl;
}

void Lista::retira_fim(){
	no_dado* ant = NULL; /* ponteiro para elemento anterior */
	no_dado* p = this->cabeca; /* ponteiro para percorrer a lista*/
	 /* procura elemento na lista, guardando anterior */
	while (p != NULL && p->info != this->valor_fim(this->cabeca)) {
	 	ant = p;
	 	p = p->prox;
	}
	/* verifica se achou elemento */
	if (p == NULL) cout << "Lista Vazia!" <<endl;
	/* retira elemento */
	if (ant == NULL) {
		this->cabeca = p->prox;
		this->qtd--;
	}
	else {
		ant->prox = p->prox;
		this->qtd--;
	}	
	free(p);
	cout << "Elemento removido" << endl;	
}

//tratamento métodos privados
bool Lista::isEmpty(no_dado* l){
	return l==NULL;
}

int Lista::valor_inicio(no_dado* l){
	return l->info;
}

int Lista::valor_fim(no_dado* l){
	for (l = this->cabeca; l != NULL; l = l->prox){
		if (l->prox == NULL) return l->info;
	}
	return 0;
}
