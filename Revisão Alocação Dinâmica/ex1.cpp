#include <stdio.h>

struct x{
	int a;
	int b;
	int c;
};

int main (void)
{
	struct x estrutura;
	
	printf("%li", sizeof(estrutura));
	
	return 0;
}
