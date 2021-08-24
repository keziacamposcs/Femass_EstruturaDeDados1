/*
Faca um programa capaz de armazenar um vetor de 10 numeros inteiros, informados
aleatoriamente pelo usuario. Apos isso, o programa devera apresentar um menu que
permita as seguintes funcoes: 
1) Exibir vetor informado; 
2) Exibir elementos impares armazenados no vetor; 
3) Exibir elementos pares no vetor; 
4) Encerrar o programa.

Obs.: O vetor de numeros devera ser estatico de 10 posicoes de inteiros, e as funcoes
de exibicao par e impar deverao ser implementadas por passagem de parametros por
referencia (moduladas a criterio).
*/

#include <iostream>
#include<locale>

float parouimpar (float num[10])
{
	if(num%2==0)
	{
		printf("\npar");
	}
	else
		printf("\nimpar");
}

//---------------------
void main ()
{
	int i;
	float num[10],sq;
	
	for(i=0; i<=10; i++)
	{
		printf ("Entre com um numero: ");
		scanf ("%f",&num);
	
	}

	sq=parouimpar(num);
	
}


