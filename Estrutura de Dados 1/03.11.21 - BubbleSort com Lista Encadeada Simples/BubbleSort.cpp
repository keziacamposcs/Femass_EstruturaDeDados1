//BubbleSort.cpp
#include "BubbleSort.h"

Lista* swap(Lista* b, Lista* c){ //fun��o de troca de n�s
//Existem 2 abordagens para troca:

//1) Troca de posi��o entre n�s e seus conte�dos info
//	//atualiza prox... n� da dir pasa a ser esq, com liga��es para demais n�s...
//	b->prox = c->prox;
//	c->prox=b;
//	return c;
	
//Ou, 2) Troca entre valores de n�s, mantendo-os em posi��o...
	int tmp = b->info;
	b->info = c->info;
	c->info = tmp;
	return b;	
}

Lista* BubbleSort(Lista* l){
	int qtd=Tamanho_lista(l); //busca quantidade de dados na lista
	Lista* a; Lista* b; Lista* c;
	
	if (qtd>1){ //s� faz sentido ordenar Lista com mais de 1 item...
		for(int i=0; i<qtd; i++){ //
			
			//Inicia a bolha a partir de L
			a=l; //anterior
			b=l; //atual
			c=l->prox; ///dep/ois
			int flag=0; //apenas para sinalizar a primeira troca a partir de L
			
			while(c!=NULL){ //N� da direita � n�o nulo, ent�o d� para avaliar troca...
				if(b->info > c->info){ //se esq > dir, ent�o TROCA (swap)!b Veja fun��o swap...
					b = swap(b,c);	//troca b (esq vai para dir) por c (dir vai para esq)			
				}
				if (flag==0){ //Tem que atualizar L para novo primeiro n� - novo n� inicial... 
					l = b; //atualiza L para novo primeiro n�
					flag=1;	
				}				
				else a->prox = b; //refaz apontamento do n� anterior com o novo n� esq, que por sua vez tem ponteiro para demais n�s...
			
				//anda a bolha a, b, c para nova an�lise
				a=b;
				b=b->prox;
				c=b->prox;	
			}
		}	
	}
	return l; //retorna a nova Lista resultante j� ordenada.
}
