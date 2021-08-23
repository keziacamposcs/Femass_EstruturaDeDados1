/*
Faça um programa capaz de exibir o código decimal ASCII e caractere compatível para
cada tecla pressionada pelo usuário. O programa deverá encerrar apenas quando a
tecla ESC for pressionada. Exemplo de tela a seguir. Dica: usar a função getch( ).
*/


#include <stdio.h>
int main ()
{
    char Ch;

    printf("Digite a tecla: ");
    Ch=getch();

    printf ("%c",Ch);
    return(0);
}

//http://www2.dcc.ufmg.br/disciplinas/pc/source/introducao_c_menoti_dccufmg.pdf