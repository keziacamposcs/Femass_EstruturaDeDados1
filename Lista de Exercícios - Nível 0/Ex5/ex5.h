#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/*----- Struct -----*/
typedef struct
{
	char nome[50];
	char rg[15];
	char cpf[11];
	char endereco[50];	
} Cadastro;
/*----- Fim -----*/

Cadastro* cadastrarusuario(Cadastro *u, int *n)
void exibir(Cadastro *u, int n);
void exibir_quant(int n);
Cadastro* removerult(Cadastro *u, int *n);


