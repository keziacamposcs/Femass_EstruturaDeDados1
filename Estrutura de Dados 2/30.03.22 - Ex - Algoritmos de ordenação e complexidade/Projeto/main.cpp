#include "Ordenacao.h"

int main() 
{
	int tamanho = 0;
	
	printf("Digite o tamanho do vetor: ");
	scanf(" %d", &tamanho);
	
	//Aloca vetor
	int* vetor = (int*) malloc(tamanho * sizeof(int));
	int* v_original = (int*) malloc(tamanho * sizeof(int));
	
	criaVetor(vetor, tamanho);
	
	printf("\n\nVetor Original: \n");
	imprime(v_original, tamanho);
	
/*---------------------------------------------------------*/

//	Bubble Sort
	printf("\nBubble Sort\n");
	memcpy(vetor, v_original, tamanho * sizeof(int));
	
	TempoBubble(vetor, tamanho);
	
// Select Sort	
	printf("\nSelect Sort\n");
	memcpy(vetor, v_original, tamanho * sizeof(int));
	
	TempoSelect(vetor, tamanho);
	
//	Insert Sort	

	printf("\nInsert Sort\n");
	memcpy(vetor, v_original, tamanho * sizeof(int));
	
	
}
