#include "matriz.h"

char* cadastrar_novo_caractere(char *texto, int *num_elementos, char c){
	if(texto == NULL){
		
		printf("oi1");
		
		texto = (char*) malloc(sizeof(char));
		
		printf("oi2");
		
		if (texto == NULL){
        	cout << "Não há memória suficiente para alocação." << endl;
        	exit(1);
        }
        
        printf("oi3");
        
		texto[*num_elementos] = c;
		*num_elementos = *num_elementos + 1;
		printf("oi4\n");
	}
	else{
		
		printf("oi5");
		
		texto = (char*) realloc(texto, (*num_elementos + 1) * sizeof(char));
		
		printf("oi6");
		
		if (texto == NULL){
        	cout << "Não há memória suficiente para alocação." << endl;
        	exit(1);
        }
        texto[*num_elementos] = c;
        *num_elementos = *num_elementos + 1;
        
		printf("oi7\n");
	}
	return texto;
}

void mostrar_texto(char *texto, int num_elementos){
	int i, j;
	for(i = 0; i < num_elementos; i++)
		printf("%c", texto[i]);
}
