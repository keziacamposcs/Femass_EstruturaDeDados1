#include "Ordenacao.h"

int main()
{
	//Vetor v;
	
	int tamanho = 0;
	
	printf("Digite o tamanho do vetor: ");
	scanf(" %d", &tamanho);
	
	int* vetor = (int*) malloc(tamanho * sizeof(int));
	int* vetorCopia = (int*) malloc(tamanho * sizeof(int));
	
	criaVetor(vetor, tamanho);
	
	printf("\nVetor Original: ");
	imprime(vetor, tamanho);
	

	//Bubble Sort
	/*v.bubbleSort(vetor, tamanho * sizeof(int));
	v.TempoBubble(copia, tamanho);
	v.imprime(vetor, tamanho);*/
	memcpy(vetorCopia, vetor, tamanho * sizeof(int));
	TempoBubble(vetorCopia, tamanho);
	imprime(vetorCopia, tamanho);
	
	
	//Select Sort
	/*v.selectSort(vetor, tamanho * sizeof(int));
	v.TempoSelect(copia, tamanho);
	v.imprime(vetor, tamanho);*/
	memcpy(vetorCopia, vetor, tamanho * sizeof(int));
	TempoSelect(vetorCopia, tamanho);
	imprime(vetorCopia, tamanho);
	
	
	//Insertion Sort
	/*v.insertionSort(vetor, tamanho * sizeof(int));
	v.TempoInsertion(copia, tamanho);
	v.imprime(vetor, tamanho);*/
	memcpy(vetorCopia, vetor, tamanho * sizeof(int));
	TempoInsertion(vetorCopia, tamanho);
	imprime(vetorCopia, tamanho);
	
	
	//Quick Sort
	/*v.quickSort(vetor, tamanho * sizeof(int));
	v.TempoQuick(copia, tamanho);
	v.imprime(vetor, tamanho);*/
	memcpy(vetorCopia, vetor, tamanho * sizeof(int));
	TempoQuick(vetorCopia, tamanho);
	imprime(vetorCopia, tamanho);
	
	
	//Sheel Sort
	/*v.shellSort(vetor, tamanho * sizeof(int));
	v.TempoShell(copia, tamanho);
	v.imprime(vetor, tamanho);*/
	memcpy(vetorCopia, vetor, tamanho * sizeof(int));
	TempoShell(vetorCopia, tamanho);
	imprime(vetorCopia, tamanho);
	
	
	//Merge Sort
	/*v.mergeSort(vetor, tamanho * sizeof(int));
	v.TempoMerge(copia, 0, tamanho-1);
	v.imprime(vetor, tamanho);*/
	memcpy(vetorCopia, vetor, tamanho * sizeof(int));
	TempoMerge(vetorCopia, 0, tamanho-1);
	imprime(vetorCopia, tamanho);


	//Radix Sort
	/*v.radixSort(vetor, tamanho * sizeof(int));
	v.TempoRadix(copia, tamanho);
	v.imprime(vetor, tamanho);*/
	memcpy(vetorCopia, vetor, tamanho * sizeof(int));
	TempoRadix(vetorCopia, tamanho);
	imprime(vetorCopia, tamanho);
	
	
	printf("\nVetor Ordenado: \n");
	//v.imprime(vetorCopia, tamanho);
	imprime(vetorCopia, tamanho);
}
