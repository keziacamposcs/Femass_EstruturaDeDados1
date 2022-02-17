/*
Faca um programa capaz de exibir o codigo decimal ASCII e caractere compativel para
cada tecla pressionada pelo usuario. O programa devera encerrar apenas quando a
tecla ESC for pressionada. Exemplo de tela a seguir. Dica: usar a funcao getch( ).
*/


#include<stdio.h>
#include<conio.h>

int main ()
{
    char letra;
    int esc;

	while(esc!=27)
	{
		printf("\n\nDigite tecla: \n");
	    letra=getch();
	
	    printf ("Caractere: %c  |  Dec. ASCII: %d \n\n Pressione ESC para finalizar o programa. \n",letra,letra);
	    esc = getch();
	}
	
	printf("\nFim de programa, tecla ESC foi pressionada!");
    
	return(0);

}



