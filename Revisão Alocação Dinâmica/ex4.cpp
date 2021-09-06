// Alocacao Dinamica - Funcao free

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *p = (int *) malloc(sizeof(int));
	
	*p = 1000;
	
	printf("%i", *p);
	
	free(p);
	
	int *m = (int *) malloc(sizeof(int));

	return 0;	
}
