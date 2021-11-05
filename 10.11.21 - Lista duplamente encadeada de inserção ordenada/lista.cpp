//lista.cpp
#include "lista.h"

/* funcao de inicializacao: retorna uma lista vazia */
Lista* inicializa()
{ 
	return NULL;
}

/* verifica se lista esta vazia: true caso positivo */
bool vazia(Lista* l)
{
	return l == NULL;
}

/*
1- insercao no inicio: retorna a lista atualizada 
*/
Lista* insere_ordenado (Lista* l, int v)
{
	Lista* novo = (Lista*) malloc(sizeof(Lista));
	Lista* aux = (Lista*) malloc(sizeof(Lista));

	novo->info = v;
	novo->prox = l;
	novo->ant = NULL;
}





struct Lista *insere(struct listaSimples *ini,int valor){

    struct listaSimples *aux = (struct listaSimples *)malloc(sizeof(struct listaSimples));
    aux->valor = valor;
    aux->prox = NULL;
    aux->ant = NULL;

    if(ini==NULL)ini = aux; /// caso o ponteiro ini seja nulo entra aqui
    else{

        struct listaSimples *ultimo = ini;
        int flag= 0;

        if(ultimo->prox==NULL){ /// condição de único bloco

            if(aux->valor > ultimo->valor){

                ultimo->prox = aux;
                aux->ant = ultimo;
            }else{

                aux->prox = ultimo;
                ultimo->ant = aux;
                ini = aux;
            }
        }else{
            /// no caso de ser menor que o primeiro ou igual o bloco novo que chegar entra aqui
            if(aux->valor < ultimo->valor || aux->valor==ultimo->valor){
                aux->prox = ultimo;
                ultimo->ant = aux;
                ini = aux;
            }else{
                    /// caso o bloco esteja no meio aqui será deslocado para a posição certa
                    while(ultimo->prox!=NULL){
                        if(aux->valor > ultimo->valor &&
                           aux->valor < ultimo->prox->valor){ /// desloca blocos do meio para encaixar o bloco na posição certa
                                flag=1;
                                aux->ant = ultimo;
                                aux->prox = ultimo->prox;
                                ultimo->prox->ant = aux;
                                ultimo->prox = aux;
                                break;
                           }else{

                                if(aux->valor==ultimo->valor){ /// Se tiver bloco com valores no meio igual entra aqui pra encaixar na posição certa
                                    flag=1;
                                    aux->prox = ultimo->prox;
                                    aux->ant = ultimo;

                                    ultimo->prox->ant = aux;
                                    ultimo->prox = aux;

                                    break;
                                }
                           }

                           ultimo = ultimo->prox;
                        }

                    if(flag==0){ /// aqui é só pra valores que vão pro final mesmo da lista
                        ultimo->prox = aux;
                        aux->ant = ultimo;
                    }
                }
            }
        }
    return ini;
}

/*
2 - funcao imprime: imprime valores dos elementos
*/
void imprime(Lista* l)
{
	if (!vazia(l))
	{
		Lista* p = l->prox; 
	 	printf("Info: ");
		do
		{ 
			printf("%d - ", p->info);	
			p = p->prox;	
		}while(p !=l->prox);
		 
		printf("\n"); 
	}
	else
	printf("Lista eh vazia!\n");
}

/*
3 - Remove inicio 
*/
Lista* remove_inicio (Lista* l)
{
	Lista* p; /* ponteiro para percorrer a lista*/
	
	if(l == NULL)
	{
		printf("\nA lista nao possui elementos para serem removidos.\n");
		return NULL;
	}
	
	p = l->prox;
	if(p->prox == p)
	{
		l = NULL;
		free(p);
		return l;
	}
	
	l->prox = p->prox;
	free(p);

	return l;
}

/*
4 - Remove no-dado final
*/
Lista* remove_fim (Lista* l)
{
	Lista* aux = NULL;
	Lista* p = l; /* ponteiro para percorrer a lista*/
    	
	if(p == NULL)
	{
	 	printf("A lista nao possui elementos para serem removidos.\n");
		return NULL;
	}
	else if (p->prox == NULL)
	{
		return NULL;
	}
	else
	{
		while(p->prox != NULL)
		{
			aux = p;
			p = p->prox;
		}
		
		aux->prox = NULL;
		return l;
	}
}

/*
5 - Remove elemento			(ok)
*/

//função busca: busca um elemento na lista
Lista* busca (Lista* l, int v){
	if (!vazia(l)){
	 	for (Lista* p=l; p!=NULL; p=p->prox)
	 		if (p->info == v)
	 			return p;
	}
 	return NULL;
}

//função Remove elemento
Lista* remove_elemento (Lista* l, int v) 
{
 	Lista* p = busca(l,v);
 	
 	//1- Testa se achou
	if (p == NULL)
 		return l;
 	
	//2- Testa casos de encontrar!
 	if (l == p)
 		l = p->prox;
 	else
 		p->ant->prox = p->prox;
 		
 	if (p->prox != NULL)
 		p->prox->ant = p->ant;
 	
	free(p);
 	
 	return l;
}


/*
6 - Imprimi elemento início -  fim		(ok)
*/
void imprimir_inicio_fim (Lista* l)
{
	if (!vazia(l))
	{
		printf("Info: ");
		
		for(Lista* p=l; p!=NULL; p=p->prox)
		{
			printf("-%d", p->info);
		}
	}
	else
		printf("Lista eh vazia!");	
}

/*
7 - Imprimi elemento fim - início
*/
void imprimir_fim_inicio (Lista* l)
{




}


/*
8 - Busca elemento
*/
Lista* busca (Lista* l, int v)
{
	Lista* p;
	
	for (p=l; p!=NULL; p=p->prox)
	{
 		if (p->info == v)
 		{
 			return p;
 		}
 	}
 	
 	return NULL; // nao achou o elemento
}

void busca_elemento (Lista* l, int v)
{
	if (!vazia(busca (l, v)))
	{
		printf("O valor %d esta na lista!", v);
	}
	else
	{
		printf("O valor %d nao esta na lista!", v);
	}
}
