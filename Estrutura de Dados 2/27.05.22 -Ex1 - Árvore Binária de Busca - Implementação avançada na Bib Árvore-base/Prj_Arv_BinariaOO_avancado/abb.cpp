//abb.cpp
//Implementa os métodos de classe prototipados no .h, biblioteca OO para árvore binária de busca (abb)
//Por Irineu Lima, ED2 - FeMASS

#include "abb.h"
//Obs.: a ordem de métodos descritos segue a mesma ordem da prototipação da classe no arquivo abb.h
//>>>>>>>>>> Métodos Públicos - chamdados pelo main de forma direta (pública) <<<<<<<<<

//construtor
ArvBB::ArvBB(){
	this->root = abb_criavazia(); //construtor faz a inicialização de árvore vazia
}

//destrutor
ArvBB::~ArvBB(){
	reiniciaTree(); //chama método privado capaz de desalocar nós-dado alocados e apontados por root
}

//insere novo nó-dado
void ArvBB::insere(int v)
{
	if (this->root != NULL) 
		abb_insere(this->root, v); //inserção de demais nós-dado após root
	else
		this->root = abb_insere(this->root, v); //primeiro nó-dado inserido, root
}

//Desenha a árvore para exibição de nós-dados contidos
void ArvBB::displayTree(){ //baseado em displayTree, p.371 - Livro Robert Lafore, ED e Alg em Java - Ciência Moderna, 2004.
	NoArv* a = this->root; //inicia do root
	stack<NoArv*> globalStack; //uso de bib stack.h da STD lib (contâiner C++ LIFO)
	globalStack.push(a);
	int nBlanks = 32;
	bool isRowEmpty = false;
	cout << "Visão encadeada de árvore: " << endl;
	
	while (isRowEmpty == false){
		stack<NoArv*> localStack; 
		isRowEmpty = true;
	
		for (int j=0; j<nBlanks; j++)
			cout << " ";
	
		while (globalStack.empty()== false){
			NoArv* temp = globalStack.top(); //pega topo da pilha global e...
			globalStack.pop(); //...e o remove em seguida
			
			if (temp != NULL){
				cout << temp->info;
				localStack.push(temp->esq);
				localStack.push(temp->dir);
				
				if ((temp->esq != NULL) || (temp->dir != NULL)){
					isRowEmpty = false;
				}	
			}else{
				cout << "-";	
				localStack.push(NULL);
				localStack.push(NULL);	
			}
			int fim = nBlanks*2 - 1;
			for (int j=0; j<fim; j++)
				cout << " ";
		} //fim-while do globalStack não vazio
		cout << endl;
		nBlanks = nBlanks / 2;
		while (localStack.empty() == false){
			globalStack.push(localStack.top()); //pega topo da pilha local e...
			localStack.pop(); //...e o remove em seguida
		}
	} //fim-while do isRowEmpty é falso
	cout << endl;
}

//retorna o nó-dado root
NoArv* ArvBB::getRoot(){
	return this->root;	
}

//libera e desaloca todos os nós da árvore, reiniciando em Null o ponteiro root
void ArvBB::reiniciaTree(){
	this->root = abb_libera(this->root);
}

//retorna true/false se árvore é vazia?
bool ArvBB::vazia(){
	return no_abb_vazio(this->root);
}

void ArvBB::displayRoot(){
	if (this->root != NULL) 
		cout << "Root -> info: " << this->root->info << endl;
	else
		cout << "Árvore vazia! \n";
}

//CONTINUACAO

// 5 - Niveis
int ArvBB::nivel()
{
	if (this->root != NULL)
	{
		abb_nivel(this->root);
	}
	else
	{
		this->root = abb_nivel(this->root); 
	}	
}

// 6 - Quantidade de Nos
int ArvBB::qtd_nodos()
{
	if (this->root != NULL)
	{
		qtd_nodos(this->root);
	}
	else
	{
		this->root = qtd_nodos(this->root); 
	}	
}

// 7 - Pre Ordem
int ArvBB::pre_ordem()
{
	if (this->root != NULL)
	{
		pre_ordem(this->root);
	}
	else
	{
		this->root = pre_ordem(this->root); 
	}
}

// 8 - Em Ordem
int ArvBB::em_ordem()
{
	if (this->root != NULL)
	{
		em_ordem(this->root);
	}
	else
	{
		this->root = em_ordem(this->root); 
	}
}

// 9 - Pos Ordem
int ArvBB::pos_ordem()
{
	if (this->root != NULL)
	{
		pos_ordem(this->root);
	}
	else
	{
		this->root = pos_ordem(this->root); 
	}
}

// 10 - Busca
void ArvBB::busca(int v)
{
	if (this->root != NULL)
	{
		abb_busca(this->root, v);
	}
	else
	{
		this->root = abb_busca(this->root, v); 
	}
}

// 11 - Balanceamento
int ArvBB::balance()
{
	if (this->root != NULL)
	{
		balance(this->root);
	}
	else
	{
		this->root = balance(this->root); 
	}
}

// 12 - Remocao por copia
void ArvBB::remove_copia(int v)
{
	if (this->root != NULL)
	{
		remove_copia(this->root, v);
	}
	else
	{
		this->root = remove_copia(this->root, v); 
	}
}

// 13 - Remocao por fusao
void ArvBB::remove_fusao(int v)
{
	if (this->root != NULL)
	{
		remove_fusao(this->root, v);
	}
	else
	{
		this->root = remove_fusao(this->root, v); 
	}
}

//>>>>>>>>>> Métodos Privados - em apoio e execução interna (privada) <<<<<<<<<

// método de inicialização: retorna nó nulo (vazio) 
NoArv* ArvBB::abb_criavazia()
{
	return NULL;
}

// método de criação: retorna nó criado (alocado)
NoArv* ArvBB::abb_cria(int c, NoArv* sae, NoArv* sad)
{
	NoArv* p=(NoArv*)malloc(sizeof(NoArv));
	
	if(p==NULL)
	{
		cout << "FALHA DE ALOCAÇÃO EM MEMÓRIA!\n";
		exit(1);
	} 

	p->info = c;
	p->esq = sae;
	p->dir = sad;
	
	return p;
}

//Método de controle de inserção de novo nó-dado - garante lógica de inserção de ABB
NoArv* ArvBB::abb_insere(NoArv* a, int v)
{
	if (a == NULL) //primeira inserção, insira nó root
	{
		a = abb_cria (v, NULL, NULL);
	}
	else if (v < a->info)
	{
		a->esq = abb_insere(a->esq,v); //insere como filho à esquerda
	}
	else /*senão, temos: v >= a->info */
	{
		a->dir = abb_insere(a->dir,v); //insere como filho à direita
	}
	return a;
}

//Método recursivo que desaloca nós-dado da árvore, retornando NULL
NoArv* ArvBB::abb_libera(NoArv* a)
{
	if (!no_abb_vazio(a))
	{
		abb_libera(a->esq); /* libera sae */
		abb_libera(a->dir); /* libera sad */
		free(a); /* libera raiz */
	}
	return NULL;
}

//Método que verifica se um nó-dado é nulo?
bool ArvBB::no_abb_vazio(NoArv* a)
{
	return a == NULL;
}



/* CONTINUACAO */

// 5 - Níveis
NoArv* ArvBB::abb_nivel(NoArv* a)
{
	int sae, sad;
	
    if (a == NULL)
	{
    	return -1;
	}
	else
	{
	    sae = abb_nivel(a->esq);
	    sad = abb_nivel(a->dir);
	    
	    if (sae > sad)
		{
			return sae + 1;
		}
	    else
		{
			return sad + 1;
		}
	}
	return NULL;
	
}

// 6 - Quantidade de no
NoArv* ArvBB::qtd_nodos(NoArv* a)
{    
	if (a == NULL)
	{
        return 0;
	}
	else
	{	
    	return (1 + qtd_nodos(a->esq) + qtd_nodos(a->dir)); 
	}
}

// 7 - Pre Ordem
NoArv* ArvBB::pre_ordem(NoArv* a)
{
	if (a != NULL)
	{
		printf("%d", a->info);
		
		pre_ordem(a->esq); 
		
		pre_ordem(a->dir); 
	}
	
}

// 8 - Em Ordem
NoArv* ArvBB::em_ordem(NoArv* a)
{
	if (a != NULL)
	{
		em_ordem(a->esq);
		
		printf("%d", a->info);
		
		em_ordem(a->dir);
	}
	
}

// 9 - Pos Ordem
NoArv* ArvBB::pos_ordem(NoArv* a)
{
	if (a != NULL)
	{
		pos_ordem(a->esq); 
		
		pos_ordem(a->dir);
		
		printf("%d", a->info);
	}
}

// 10 - Busca
NoArv* ArvBB::abb_busca(NoArv* a, int v)
{	
	if (this->root != NULL) 
		abb_busca(this->root, v); 
	else
		this->root = abb_busca(this->root, v);
}


/* CONTINUACAO */

// 11 - Balancear
NoArv* ArvBB::balance_aux(NoArv* a, int vetor[], int inicio, int final)
{
	if(inicio <= final)
	{
        int meio = (inicio + final) / 2;
        
        abb_insere(a, vetor[meio]);
        
        balance_aux(a, vetor, inicio, meio - 1);
        balance_aux(a, vetor, meio + 1, final);
    }
    else
    {
    	return NULL;
	}
}


NoArv* ArvBB::balance(NoArv* a)
{
	int sae = nivel(a->esq);
	int sad = nivel(a->dir);
	
	int diferenca = sae - sad;
	
	if(a !=NULL)
	{
		if(diferenca < -1 || diferenca > 1)
		{
			return 0;
		}
		else
		{
			return balance_aux(a->esq) * balance_aux(a->dir);
		}
	}
	
	return 1;
}



// 12 - Remove por copia
NoArv* ArvBB::remove_copia(NoArv* a, int v)
{
	if(a == NULL)
	{
		return NULL;
	}
	
	else if(a->info > v)
	{
		a->esq = remove_copia(a->esq, v);
	}
	
	else if(a->info < v)
	{
		a->dir = remove_copia(a->dir, v);
	}
	
	else
	{
		if(a->esq == NULL && a->dir == NULL)
		{
			free(a);
			a = NULL;
		}
		
		else if(a->dir == NULL)
		{
			NoArv* aux = a;
			a = a->esq;
			free(aux);
		}
		
		else if(a->esq == NULL)
		{
			NoArv* aux = a;
			a = a->dir;
			free(aux);
		}
		
		else
		{
			NoArv* folha = a->esq;
			while(folha->dir != NULL)
			{ 
				folha = folha->dir;
			}
			
			a->info = folha->info; 
			folha->info = v;
			a->esq = remove_copia(a->esq, v); 
		}
	}
	return a;
}

// 13 - Remove por fusao
NoArv* ArvBB::remove_fusao_aux(NoArv* a, int v)
{
	
	
}

// 13 - Remove por fusao
NoArv* ArvBB::remove_fusao(NoArv* a)
{
	
}
