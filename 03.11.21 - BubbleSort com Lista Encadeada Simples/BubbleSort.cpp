//BubbleSort.cpp
#include "BubbleSort.h"

Lista* swap(Lista* b, Lista* c){ //função de troca de nós
//Existem 2 abordagens para troca:

//1) Troca de posição entre nós e seus conteúdos info
//	//atualiza prox... nó da dir pasa a ser esq, com ligações para demais nós...
//	b->prox = c->prox;
//	c->prox=b;
//	return c;
	
//Ou, 2) Troca entre valores de nós, mantendo-os em posição...
	int tmp = b->info;
	b->info = c->info;
	c->info = tmp;
	return b;	
}

Lista* BubbleSort(Lista* l){
	int qtd=Tamanho_lista(l); //busca quantidade de dados na lista
	Lista* a; Lista* b; Lista* c;
	
	if (qtd>1){ //só faz sentido ordenar Lista com mais de 1 item...
		for(int i=0; i<qtd; i++){ //
			
			//Inicia a bolha a partir de L
			a=l; //anterior
			b=l; //atual
			c=l->prox; ///dep/ois
			int flag=0; //apenas para sinalizar a primeira troca a partir de L
			
			while(c!=NULL){ //Nó da direita é não nulo, então dá para avaliar troca...
				if(b->info > c->info){ //se esq > dir, então TROCA (swap)!b Veja função swap...
					b = swap(b,c);	//troca b (esq vai para dir) por c (dir vai para esq)			
				}
				if (flag==0){ //Tem que atualizar L para novo primeiro nó - novo nó inicial... 
					l = b; //atualiza L para novo primeiro nó
					flag=1;	
				}				
				else a->prox = b; //refaz apontamento do nó anterior com o novo nó esq, que por sua vez tem ponteiro para demais nós...
			
				//anda a bolha a, b, c para nova análise
				a=b;
				b=b->prox;
				c=b->prox;	
			}
		}	
	}
	return l; //retorna a nova Lista resultante já ordenada.
}
