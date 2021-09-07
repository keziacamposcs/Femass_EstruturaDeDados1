#include <iostream>
#include <stdlib.h>

int main()
{
	//declaracao da variavel para ponteiro
	int *ptr = (int*) malloc(sizeof(int));
	
	//atribuindo o endereco da variavel valor ao ponteiro
	*ptr = 12345;
	
	printf("Utilizando os ponteiros\n");
	printf("Conteudo da variavel ponteiro ptr(endereco): %x \n", ptr);
	printf("Acessando a variavel apontada pelo ponteiro ptr(dado): %d\n", *ptr);
	system("pause");
}
