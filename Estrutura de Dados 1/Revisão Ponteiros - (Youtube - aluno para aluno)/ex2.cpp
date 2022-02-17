#include <stdio.h>

int main(void)
{
	int x = 10;
	double y = 20.50;
	char z = 'a';
	
	int *pX = &x;
	double *pY = &y;
	char *pZ = &z;
	
	printf("\nEndereco x = %i - Valor x = %i\n", pX, *pX);
	printf("Endereco y = %i - Valor y = %f\n", pY, *pY);
	printf("Endereco z = %i - Valor z = %c", pZ, *pZ);	
	getchar();
	
	return 0;
}
