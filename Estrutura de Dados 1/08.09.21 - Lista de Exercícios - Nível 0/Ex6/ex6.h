/*----- Struct -----*/
typedef struct
{
	char nome[50];
	char codigo[10];
	char autor[50];
	char ano[4];	
} Cadastro;
/*----- Fim do Struct-----*/

Cadastro* cadastrar_livro(Cadastro *l, int *n);
void exibir(Cadastro *l, int n);

