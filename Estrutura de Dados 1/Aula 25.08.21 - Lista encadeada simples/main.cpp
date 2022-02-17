#include<stdio.h>

int main(void)
{
	Lista* l;
	l = inicializa();
	l = insere(l,23);
}





//funcao imprime: imprime valores dos elementos
void imprime(Lista* l)
{
	Lista* p; //variavel auxiliar para pecorrer a lista
	
	for(p=l; p!=NULL; p = p->prox)
	{
		printf("info = %d\n", p->info);
	}
}
