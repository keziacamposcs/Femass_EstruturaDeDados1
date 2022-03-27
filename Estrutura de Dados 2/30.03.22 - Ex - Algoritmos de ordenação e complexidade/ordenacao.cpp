//Lista.cpp

#include "ordenacao.h"

//construtor
Vetor::Vetor()
{
	this->v_original = 0;
	this->v_ordenado = 0;
	this->tamanho = 0;

}

//destrutor
Vetor::~Vetor(){
	//this->libera();
	this->tamanho = 0;
}

void Vetor::inicio(int tamanho)
{
	int i;
	vetor = malloc(tamanho * sizeof(int));

	if(vetor)
	{
		printf("\nMemoria alocada com sucesso\n");
		
		//adicionando numeros aleatorios no vetor
		for(i=0; i<tamanho; i++)
		{
			vetor[i] = rand();
		}		
	}
	else
	{
		printf("\nErro ao alocar\n");	
	}		
		
	//imprimindo original
	for(i=0; i<tamanho; i++)
	{
		printf("%d", v_original[i]);
	}
	
}



/*---------------------------------------------------------------------------------------------*/

