#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>	/* Para usar malloc e free */
using namespace std;

typedef struct{ 		// Cria uma STRUCT para armazenar os dados de uma pessoa
    char nome[30];		// define o campo nome
    char rg[15];		// define o campo RG
    char cpf[13]; 		// define o campo CPF
    char endereco[30];	// define o campo endereço
} Pessoa; 				// Define o nome do novo tipo criado

Pessoa* cadastrar_componente(Pessoa *v, int *num_componentes);
void mostra_vetor(Pessoa *v, int num_componentes);
void imprime_numero_componentes(int num_componentes);
Pessoa* remove_ultimo_numero_cadastrado(Pessoa *v, int *num_componentes);
