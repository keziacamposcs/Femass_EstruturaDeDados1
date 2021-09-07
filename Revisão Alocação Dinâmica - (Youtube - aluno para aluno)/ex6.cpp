// Alocacao Dinamica - Funcao calloc

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *p;
	
	p = (int *) calloc(5, sizeof(int));
	
	int i;
	for (i=0; i<5; i++)
	{
		printf("Endereco de p%i = %p | Valor de p%i = %i\n", i, (p+i), i, *(p+i));
	}
		
	printf("%i", *(p+1));
	
	return 0;	
}
