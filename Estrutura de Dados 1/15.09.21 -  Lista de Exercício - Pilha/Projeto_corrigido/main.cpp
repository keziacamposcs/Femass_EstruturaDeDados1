//main.cpp

#include "Pilha.h"

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
	
	l= top(l); 
	fimprimi(l);

	l = pop(l);
	
	l = pop(l);
	fimprimi(l);
	
	l = pop(l);
	fimprimi(l);
		
	l = isempty(l);
	
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
