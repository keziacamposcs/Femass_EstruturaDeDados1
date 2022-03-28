#include <stdio.h>
#include <cstring>
#include <stdlib.h>
#include <time.h>


void criaVetor(int* vetor, int tamanho);
void copiaVetor(int* vetor, int* v_original, int tamanho);
void imprime(int* vetor, int tamanho);


//	Metodos de ordenacao
void bubbleSort(int* vetor, int tamanho);
void selectSort(int* vetor, int tamanho);
void insertionSort(int* vetor, int tamanho);/*
void quickSort(int* vetor, int tamanho);
void shellSort (int* vetor, int tamanho);
void mergeSort(int* vetor, int l, int r);
void intercalar(int* vetor, int l, int m, int r);
void radixSort(int* vetor, int tamanho);*/


//	Tempo de Execucao
void TempoBubble(int* vetor, int tamanho);
void TempoSelect(int* vetor, int tamanho);
void TempoInsertion(int* vetor, int tamanho);

//void TempoQuick(int* vetor, int tamanho);
//void TempoShell(int* vetor, int tamanho);
//void TempoMerge(int* vetor, int tamanho, int r);
//void TempoRadix(int* vetor, int tamanho);
