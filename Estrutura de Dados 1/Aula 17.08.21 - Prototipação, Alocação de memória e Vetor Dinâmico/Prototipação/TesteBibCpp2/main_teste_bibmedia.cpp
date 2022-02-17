
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#include <stdlib.h>
#include <stdio.h>
#include "libmedia.h"

int main(int argc, char** argv) {
	float n1,n2,media;
	printf("Digite N1: ");
	scanf("%f",&n1);
	printf("Digite N2: ");
	scanf("%f",&n2);
	media=fmedia(n1,n2);
	printf("Media: %.1f\n", media);
	system("pause");
	return 0;
}
