#include "maquina_de_escrever.h"

char* cadastrar_novo_caractere(char *texto, int *num_elementos, char c){
	if(c == 27) //27 é a representação do "ESC" na tabela ASCII
		return texto;
	else if(texto == NULL){
		texto = (char*) malloc(sizeof(char));
		if (texto == NULL){
        	cout << "Não há memória suficiente para alocação." << endl;
        	exit(1);
        }
        texto[*num_elementos] = c;
		*num_elementos = *num_elementos + 1;
		return texto;
	}
	else{
		texto = (char*) realloc(texto, (*num_elementos + 1) * sizeof(char));
		if (texto == NULL){
        	cout << "Não há memória suficiente para alocação." << endl;
        	exit(1);
        }
        texto[*num_elementos] = c;
        *num_elementos = *num_elementos + 1;
        return texto;
	}
}

void mostrar_texto(char *texto, int num_elementos){
	int i, j;
	printf("O texto digitado foi: \n");
	for(i = 0; i < num_elementos; i++)
		printf("%c", texto[i]);
	printf("\n");
}
