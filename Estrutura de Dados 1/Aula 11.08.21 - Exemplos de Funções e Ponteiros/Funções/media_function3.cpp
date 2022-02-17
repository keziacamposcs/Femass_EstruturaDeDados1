/*
Prof. Irineu - EDI
Exemplo: execução em prompt de comandos com passagem de N notas como parâmetros,
para cálculo de média.
*/

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]){
 
	float somatorio(0), media;
	for(int i=1; i<argc; i++){
		somatorio=somatorio+atof(argv[i]); //atof - converte para float
	}
	media=somatorio/(argc-1);
	printf("Media: %.1f\n", media);
	printf("Fim do programa %s \n",argv[0]); //observe que a posição 0 de argv guarda o nome do programa
	system("pause");
 
}
