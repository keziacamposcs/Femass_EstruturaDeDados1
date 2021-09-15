//main.cpp

#include "pilha.h"

int main(int argc, char** argv)
{
	Lista* l = inicializa();

	l = push(l, 5); 
	fimprimi(l);

	l = push(l, 3);
	fimprimi(l);

	l = pop(l);
	fimprimi(l);

	l = push(l, 7); 
	fimprimi(l);

	l = pop(l);
	fimprimi(l);
	
	top(l); //com erro
	
	l = pop(l);
	
	l = pop(l);
	fimprimi(l);
	
	l = pop(l);
	fimprimi(l); //erro
		
	l = isempty(l); //True
	
	l = push(l, 9); 
	l = push(l, 7); 
	l = push(l, 3); 
	l = push(l, 5); 
	fimprimi(l);
	
	size(l);

	pop(l);
	imprime(l);
	
	l = push(l, 8); 
	imprime(l);
	
	pop(l);
	imprime(l);
	
	pop(l);
	imprime(l);
	
	system("pause");
	return 0;
}

