/*----- Struct -----*/
typedef struct
{
	char nome[50];
	char rg[9];
	char cpf[11];
	char endereco[50];	
} Cadastro;
/*----- Fim do Struct-----*/

Cadastro* cadastrarusuario(Cadastro *u, int *n);
void exibir(Cadastro *u, int n);
void exibirquant(int n);
Cadastro* removerult(Cadastro* u, int *n);
//Cadastro* arquivo(Cadastro *u, int *n, arq);

