/*
Prof. Irineu - EDI
Exemplo: execu��o em prompt de comandos com passagem de 2 notas como par�metros,
para c�lculo de m�dia.
*/

#include <stdlib.h>
#include <stdio.h>

float fmedia(float nn1, float nn2){
	return (nn1+nn2)/2;
}

int main(int argc, char *argv[]){
	float n1,n2,media;
	
	n1=atof(argv[1]);
	n2=atof(argv[2]);
	media=fmedia(n1,n2);
	printf("Media: %.1f\n", media);
	system("pause");
}
