#include "ordenacao.h"

int main(int argc, char** argv)
{
	Vetor v;
	
	int tamanho;
	
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &tamanho);
	
	v.inicio(tamanho);
	
	return 0;
}
