#include "pilha.h"

int main(int argc, char** argv) 
{
	Lista* l = inicializa();
	
	l = push(l, 5); 
	l = push(l, 3);
	
	pop(l);

	l = push(l, 7); 

	pop(l);

	top(l);
	
	pop(l);

	pop(l);

	pop(l); //Error
	
	//isempty(l); //True
	
	l = push(l, 9); 
	l = push(l, 7); 
	l = push(l, 3); 
	l = push(l, 5); 
	imprime(l);
	
	size(l);

	pop(l);
	imprime(l);
	
	l = push(l, 8); 
	imprime(l);
	
	pop(l);
	imprime(l);
	
	pop(l);
	imprime(l);
	
	
//	libera(l);
	system("pause");
	return 0;
}
