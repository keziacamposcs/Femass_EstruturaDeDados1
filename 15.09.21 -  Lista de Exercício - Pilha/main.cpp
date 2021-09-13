#include "pilha.h"


int main()
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
	
	isEmpty(l); //True
	
	l = push(l, 9); 
	l = push(l, 7); 
	l = push(l, 3); 
	l = push(l, 5); 
	
	size(l);

	pop(l);
	
	l = push(l, 8); 
	
	pop(l);

	pop(l);
	
	
	
	libera(l);
	system("pause");
	return 0;
}
