//Passando ponteiro para uma fun��o

#include<stdio.h>

int main(void)
{
	
	//Chamando funcoes
	void testeVariavel(int x);
	void testePonteiro(int *pX);
	//fim
	
	int teste = 1;
	int *pTeste = &teste;
	
	testeVariavel(teste);
	testePonteiro(pTeste);
	
	printf("%i\n", teste);
	
	getchar();
	return 0;
}

//Fun��es-------------------------------------------
void testeVariavel(int x)
{
	++x;
}

void testePonteiro(int *pX)
{
	++*pX;
}
//fim-----------------------------------------------
