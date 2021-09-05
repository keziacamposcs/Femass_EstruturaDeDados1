#include<stdio.h>
#include<conio.h>
char matriz_ascii(char t)
{
	
	
}
char matriz_caractere(char t)
{
	
	
}




int main ()
{
    char texto;
    int esc;
    int n_comp=0;
    
    
	printf("Digite uma frase ou a tecla ESC para encerrar:\n");
	while(esc!=27)
	{
	    texto=getch();
	
	    esc = getch();
	    
	    matriz_ascii(texto, &n_comp);
	    matriz_caractere(texto, &n_comp);
	}
	
	printf("\nFim de programa, tecla ESC foi pressionada!");
    
	return(0);

}
