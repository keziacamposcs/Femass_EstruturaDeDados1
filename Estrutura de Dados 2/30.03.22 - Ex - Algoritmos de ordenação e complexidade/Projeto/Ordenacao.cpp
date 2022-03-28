#include "Ordenacao.h"

void criaVetor(int* vetor, int tamanho)
{
	srand(time(NULL));
	
	for (int i = 0; i < tamanho; i++)
	{
		vetor[i] = rand() % 1000000;
	}
}


void copiaVetor(int* vetor, int* v_original, int tamanho)
{
	for(int i = 0; i < tamanho; i++)
	{
		v_original[i] = vetor[i];
	}
}


void imprime(int* vetor, int tamanho)
{
	int i;
	
	for (i = 0; i < tamanho; i++)
	{
		printf(" %d", vetor[i]);
	}
}


//	Bubble Sort
void bubbleSort(int* vetor, int tamanho)
{
	int k, j, aux;
	
	for(k = 0; k < tamanho; k++)
	{
		for(j = 0; j < tamanho - 1; j++)
		{
			if(vetor[j] > vetor[j + 1])
			{
				aux = vetor[j];
				vetor[j] = vetor[j + 1];
				vetor[j + 1] = aux;
			}
		}
	}
}

void TempoBubble(int* vetor, int tamanho)
{
	clock_t inicio = clock();

	bubbleSort(vetor, tamanho);

	clock_t fim = clock();
	double tempoDeCpu = ((double) (fim - inicio)) / CLOCKS_PER_SEC;

	printf("\nTempo gasto na execucao do metodo: %f segundos", tempoDeCpu);
}
//	Fim Bubble

//	Select Sort
void selectSort(int* vetor, int tamanho)
{
	int i, j, k, aux;
	
	for(i = 0; i < tamanho - 1; i++)
	{
		for(j = i + 1; j < tamanho; j++)
		{
			if(vetor[i] > vetor[j])
			{
				aux = vetor[i];
				vetor[i] = vetor[j];
				vetor[j] = aux;
			}
		}
	}
}

void TempoSelect(int* vetor, int tamanho)
{
	clock_t inicio = clock();

	selectSort(vetor, tamanho);

	clock_t fim = clock();
	
	double tempoDeCpu = ((double) (fim - inicio)) / CLOCKS_PER_SEC;

	printf("\nTempo gasto na execucao do metodo: %f segundos", tempoDeCpu);
}
//	Fim Select

//	Insertion Sort
void insertionSort(int* vetor, int tamanho) 
{
	for(int i = 1; i < tamanho; i++) 
	{
		int tmp = vetor[i];
		int j = i;
		
		while(j > 0 && tmp < vetor[j - 1]) 
		{
			vetor[j] = vetor[j - 1];
			j--;
		}
		vetor[j] = tmp;
	}
}

void TempoInsertion(int* vetor, int tamanho)
{
	clock_t inicio = clock();

	insertionSort(vetor, tamanho);

	clock_t fim = clock();
	double tempoDeCpu = ((double) (fim - inicio)) / CLOCKS_PER_SEC;

	printf("\nTempo gasto na execucao do metodo: %f segundos", tempoDeCpu);
}
//	Fim Insert

//	Quick Sort
void quickSort(int* vetor, int tamanho)
{
  if (tamanho < 2) return;
 
  int pivo = vetor[tamanho / 2];
 
  int i, j;
  
  for (i = 0, j = tamanho - 1; ; i++, j--)
  {
    while (vetor[i] < pivo) i++;
    while (vetor[j] > pivo) j--;
 
    if (i >= j) break;
 
    int temp = vetor[i];
    vetor[i] = vetor[j];
    vetor[j] = temp;
  }
 
  quickSort(vetor, i);
  quickSort(vetor + i, tamanho - i);
}

void TempoQuick(int* vetor, int tamanho){
	clock_t inicio = clock();

	quickSort(vetor, tamanho);

	clock_t fim = clock();
	double tempoDeCpu = ((double) (fim - inicio)) / CLOCKS_PER_SEC;

	printf("\nTempo gasto na execucao do metodo: %f segundos", tempoDeCpu);
}
//	Fim Quick Sort

//	Shell Sort
void shellSort (int* vetor, int tamanho)
{
    int h, i, j, t;
    
    for (h = tamanho; h /= 2;)
	{
        for (i = h; i < tamanho; i++)
		{
            t = vetor[i];
            
            for (j = i; j >= h && t < vetor[j - h]; j -= h)
			{
                vetor[j] = vetor[j - h];
            }
            
            vetor[j] = t;
        }
    }
}
void TempoShell(int* vetor, int tamanho)
{
	clock_t inicio = clock();

	shellSort(vetor, tamanho);

	clock_t fim = clock();
	double tempoDeCpu = ((double) (fim - inicio)) / CLOCKS_PER_SEC;

	printf("\nTempo gasto na execucao do metodo: %f segundos", tempoDeCpu);
}
//	Fim Shell Sort

// Merge Sort
void mergeSort(int* vetor, int l, int r)
{
	if(r > l)
	{
		int i, m = (l + (r - 1)) / 2;
		
		mergeSort(vetor, l, m);
		mergeSort(vetor, m + 1, r);
		intercalar(vetor, l, m, r);
	}
}

//	Funcao aux Merge Sort 
void intercalar(int* vetor, int l, int m, int r)
{
	int i, j, k;
	int indice1 = m - l + 1;
	int indice2 = r - m;
	
	int vetTEMP1[indice1], vetTEMP2[indice2];
	
	for (i = 0; i < indice1; i++)
	{
		vetTEMP1[i] = vetor[l + i];
	}
	
	for (j = 0; j < indice2; j++)
	{
		vetTEMP2[j] = vetor[m + 1+ j];
	}
	
	i = 0;
	j = 0;
	k = l;
	
	while (i < indice1 && j < indice2)
	{
		if (vetTEMP1[i] <= vetTEMP2[j])
		{
			vetor[k] = vetTEMP1[i];
			i++;
		}
		else
		{
			vetor[k] = vetTEMP2[j];
			j++;
		}
		k++;
	}
	while (i < indice1)
	{
		vetor[k] = vetTEMP1[i];
		i++;
		k++;
	}
	while (j < indice2)
	{
		vetor[k] = vetTEMP2[j];
		j++;
		k++;
	}
}
void TempoMerge(int* vetor, int tamanho, int r)
{
	clock_t inicio = clock();

	mergeSort(vetor, tamanho, r);

	clock_t fim = clock();
	double tempoDeCpu = ((double) (fim - inicio)) / CLOCKS_PER_SEC;

	printf("\nTempo gasto na execucao do metodo: %f segundos", tempoDeCpu);
}
// Fim Merge Sort

//	Radix Sort
void radixSort(int* vetor, int tamanho)
{
	int i, baseExponencial = 1, m = 0, bucket[tamanho], vetorAux[tamanho];

	for(i = 0; i < tamanho; i++)
	{
		if(vetor[i] > m)
		{
			m = vetor[i];
		}
	}

	while((m/baseExponencial) > 0)
	{
		for (i = 0; i < tamanho; i++)
		{
			bucket[i] = 0;
		}
		
		for(i = 0; i < tamanho; i++)
		{
			bucket[(vetor[i] / baseExponencial) % 10]++;
		}
		
		for(i = 1; i < tamanho; i++)
		{
			bucket[i] += bucket[i-1];
		}
		
		for(i = (tamanho - 1); i >= 0; i--)
		{
			vetorAux[--bucket[(vetor[i] / baseExponencial) % 10]] = vetor[i];
		}
		
		for(i = 0; i < tamanho; i++)
		{
			vetor[i] = vetorAux[i];
		}
		
		
		baseExponencial *= 10;
	}
}

void TempoRadix(int* vetor, int tamanho)
{
	clock_t inicio = clock();

	radixSort(vetor, tamanho);

	clock_t fim = clock();
	double tempoDeCpu = ((double) (fim - inicio)) / CLOCKS_PER_SEC;

	printf("\nTempo gasto na execucao do metodo: %f segundos", tempoDeCpu);
}




















