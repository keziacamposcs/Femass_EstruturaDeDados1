// Alocacao Dinamica - Funcao calloc

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *p;
	
	p = (int *) calloc(5, sizeof(int));
	
	*(p+1) = 10;
		
	printf("%i", *(p+1));
	
	return 0;	
}
