#include <stdio.h>
#include <cstring>
#include <stdlib.h>
#include <time.h>


void criaVetor(int* vetor, int tamanho);
void copiaVetor(int* vetor, int* copia, int tamanho);
void imprime(int* vet, int tamanho);


void bubbleSort(int* vetor, int tamanho);
void TempoBubble(int* vetor, int tamanho);

void selectSort(int* vetor, int n);
void TempoSelect(int* vetor, int tamanho);

void insertionSort(int* vetor, int n);
void TempoInsertion(int* vetor, int tamanho);

void quickSort(int* vetor, int n);
void TempoQuick(int* vetor, int tamanho);

void shellSort (int* vetor, int n);
void TempoShell(int* vetor, int tamanho);

void mergeSort(int* vetor, int l, int r);
void intercalar(int* vetor, int l, int m, int r);
void TempoMerge(int* vetor, int tamanho, int r);


void radixSort(int* vetor, int tamanho);
void TempoRadix(int* vetor, int tamanho);

