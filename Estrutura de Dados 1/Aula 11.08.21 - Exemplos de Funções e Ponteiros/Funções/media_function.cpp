/*
Prof. Irineu - EDI
Exemplo: c�lculo de m�dia entre 2 notas informadas pelo usu�rio,
com o uso de fun��o com retorno.
*/
#include <stdlib.h>
#include <stdio.h>

float fmedia(float nn1, float nn2){
	return (nn1+nn2)/2;
}

int main(){
	float n1,n2,media;
	printf("Digite N1: ");
	scanf("%f",&n1);
	printf("Digite N2: ");
	scanf("%f",&n2);
	media=fmedia(n1,n2);
	printf("Media: %.1f\n", media);
	system("pause");
}
