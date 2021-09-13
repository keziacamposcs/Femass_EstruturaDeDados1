#include "fila.h"

int main() 
{
	Lista* l = inicializa();
	
	l = enqueue(l, 5);
	l = enqueue(l, 3);
	dequeue(l);
	l = enqueue(l, 7);
	dequeue(l);
	front(l);
	dequeue(l);
	dequeue(l);
	isempty(l);
	l = enqueue(l, 9);
	l = enqueue(l, 7);
	size(l);
	l = enqueue(l, 3);
	l = enqueue(l, 5);
	dequeue(l);
	
	system("pause");
	return 0;
}

