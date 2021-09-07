#include "vetor.h"

Pessoa* cadastrar_componente(Pessoa *v, int *num_componentes){
	if(num_componentes == 0)
	{
		v = (Pessoa*) malloc(sizeof(Pessoa));
		if (v == NULL)
		{
        	cout << "N�o h� mem�ria suficiente para aloca��o." << endl;
        	exit(1);
        }
	}
	else
	{
		v = (Pessoa*) realloc(v, (*num_componentes + 1) * sizeof(Pessoa));
		if (v == NULL)
		{
        	cout << "N�o h� mem�ria suficiente para aloca��o." << endl;
        	exit(1);
        }		
	}
	cout << "Digite o nome a ser cadastrado: ";
	getchar();
	if(fgets(v[*num_componentes].nome, 30, stdin) != NULL) 
	{
		/* Remove a nova linha (\n), caso ela tenha sido lida pelo fgets */
		int indiceUltimoCaractere = strlen(v[*num_componentes].nome) - 1;
		if(v[*num_componentes].nome[indiceUltimoCaractere] == '\n')
			v[*num_componentes].nome[indiceUltimoCaractere] = '\0';
	}
	
	cout << "Digite o RG a ser cadastrado: ";
	if(fgets(v[*num_componentes].rg, 15, stdin) != NULL) 
	{
		/* Remove a nova linha (\n), caso ela tenha sido lida pelo fgets */
		int indiceUltimoCaractere = strlen(v[*num_componentes].rg) - 1;
		if(v[*num_componentes].rg[indiceUltimoCaractere] == '\n')
			v[*num_componentes].rg[indiceUltimoCaractere] = '\0';
	}
	
	cout << "Digite o CPF a ser cadastrado: ";
	do{
		if(fgets(v[*num_componentes].cpf, 13, stdin) != NULL) 
		{
			/* Remove a nova linha (\n), caso ela tenha sido lida pelo fgets */
			int indiceUltimoCaractere = strlen(v[*num_componentes].cpf) - 1;
			if(v[*num_componentes].cpf[indiceUltimoCaractere] == '\n')
				v[*num_componentes].cpf[indiceUltimoCaractere] = '\0';
		}
		if(strlen(v[*num_componentes].cpf) != 11)
			cout << "CPF inv�lido. O CPF digitado deve conter 11 d�gitos. Digite novamente o CPF: "; 
	}
	while(strlen(v[*num_componentes].cpf) != 11);
	
	cout << "Digite o endereco a ser cadastrado: ";
	if(fgets(v[*num_componentes].endereco, 30, stdin) != NULL) 
	{
		/* Remove a nova linha (\n), caso ela tenha sido lida pelo fgets */
		int indiceUltimoCaractere = strlen(v[*num_componentes].endereco) - 1;

		if(v[*num_componentes].endereco[indiceUltimoCaractere] == '\n')
		{
			v[*num_componentes].endereco[indiceUltimoCaractere] = '\0';
		}
	}
	
	*num_componentes = *num_componentes + 1; //Atualiza o n�mero de componentes do vetor
	return v;
}

void mostra_vetor(Pessoa *v, int num_componentes){
	int i;
	if(num_componentes == 0)
		cout << "N�o existe componente cadastrado." << endl;
	else{
		if(num_componentes == 1)
			cout << "Foi cadastrado o elemento abaixo:" << endl;
		else
			cout << "Foram cadastrados os elementos abaixo:" << endl;
		cout  << "=================================================================================================================" << endl;
		for(i = 0; i < num_componentes; i++){
			printf("|| %-32s || %-17s || ", v[i].nome, v[i].rg);
			// Formata o CPF
			printf("%c%c%c.%c%c%c.%c%c%c-%c%c", v[i].cpf[0], v[i].cpf[1], v[i].cpf[2], v[i].cpf[3], v[i].cpf[4], v[i].cpf[5], v[i].cpf[6], v[i].cpf[7], v[i].cpf[8], v[i].cpf[9], v[i].cpf[10], v[i].cpf[11]);
			printf(" || %-32s ||\n", v[i].endereco);	
		}
		cout  << "=================================================================================================================" << endl;
	}
	cout << endl;
}

void imprime_numero_componentes(int num_componentes){
	if(num_componentes == 0)
		cout << "N�o existe componente cadastrado." << endl;
	else if(num_componentes == 1)
		cout << "Foi cadastrado 1 componente." << endl;
	else
		cout << "Foram cadastrados " << num_componentes << " componentes." << endl;
	cout << endl;
}

Pessoa* remove_ultimo_numero_cadastrado(Pessoa* v, int *num_componentes){
	if(v == NULL)
		cout << "O vetor � nulo. N�o existe elemento para ser removido." << endl;
	else if(*num_componentes == 1){
		free(v);
		v = NULL;
		*num_componentes = *num_componentes - 1; //Atualiza o n�mero de componentes do vetor
		cout << "Elemento removido com sucesso." << endl;
	}
	else{
		v = (Pessoa*) realloc(v, (*num_componentes) * sizeof(Pessoa));
		*num_componentes = *num_componentes - 1; //Atualiza o n�mero de componentes do vetor
		cout << "Elemento removido com sucesso." << endl;
	}
	cout << endl;
	return v; //Retorna um ponteiro para o vetor de elementos
}
