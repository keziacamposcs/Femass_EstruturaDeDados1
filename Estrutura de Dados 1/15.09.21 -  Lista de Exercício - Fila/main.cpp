//main.cpp

#include "fila.h"

int main(int argc, char** argv)
{
	Lista* l = inicializa();
	
	l = enqueue(l, 5); 
	fimprimi(l);

	l = enqueue(l, 3); 
	fimprimi(l);

	l = dequeue(l); 
	fimprimi(l);

	l = enqueue(l, 7); 
	fimprimi(l);
	
	l = dequeue(l); 
	fimprimi(l);
	
	front(l);
	
/*	l = dequeue(l); 
	fimprimi(l);
	
	l = dequeue(l); //Error
	
	isempty(l); //True

	l = enqueue(l, 9); 
	fimprimi(l);	

	l = enqueue(l, 7); 
	fimprimi(l);
		
	size(l);
	
	l = enqueue(l, 3); 
	fimprimi(l);	

	l = enqueue(l, 5); 
	fimprimi(l);
	
	l = dequeue(l); */
}
