//Dicas e exemplos - alocação de matriz 2D dinâmica
//leitura-extra: https://www.geeksforgeeks.org/dynamically-allocate-2d-array-c/

#include <iostream>
#include <stdlib.h>

using namespace std;

void imprimir(int **arr, int r, int c){
	for (int i = 0; i <  r; i++) {
      for (int j = 0; j < c; j++) 
         printf("%d ", arr[i][j]); 
      cout << endl;	
	}
	cout << endl;	
}

int main()
{
	int r = 3, c = 4, i, j, count; 
  	//teste - iniciando uma suposta matriz 3 x 4...
    int **arr = (int **)malloc(r * sizeof(int *)); //primeiro, alocando linhas...
    for (i=0; i<r; i++) //em cada linha existente, alocar colunas...
         arr[i] = (int *)malloc(c * sizeof(int)); 
  
    // Note that arr[i][j] is same as *(*(arr+i)+j) 
    count = 0; //usando um contador para popular a matriz em cada posição existente
    for (i = 0; i <  r; i++) 
      for (j = 0; j < c; j++) 
         arr[i][j] = ++count;  // OR *(*(arr+i)+j) = ++count 
  
    imprimir(arr, r, c);
    
	//cortando uma linha no final por realocação
	r--;
	arr = (int **)realloc(arr,  r* sizeof(int*)); //removendo uma nova linha, com o nº padrão de colunas atuais nesta
	imprimir(arr, r, c);
	
	//adicionando uma linha no final por realocação
	r++;
	arr = (int **)realloc(arr,  r* sizeof(int*)); //adicionando uma nova linha, com o nº padrão de colunas atuais nesta
	for (int j=0; j < c ; j++) //fixar linha em adição e iterar coluna para atribuição
		arr[r-1][j] = 0;
	imprimir(arr, r, c);
	
	//adicionando uma coluna no final por realocação
	c++;
	for (i=0; i<r; i++) //para cada linha existente, adicionar coluna... 
         arr[i] = (int *)realloc(arr[i], c * sizeof(int)); //adicionando coluna em cada linha existente...
	for (int i=0; i < r ; i++) //fixar coluna em adição e iterar linha para atribuição
		arr[i][c-1] = 0;
	imprimir(arr, r, c);
	
  free(arr); //desalocando a matriz 
  system("pause");

  return 0;

}
