#include <stdio.h>

int main(void)
{
	struct horario
	{
		int hora;
		int minuto;
		int segundo;
	};
	
	struct horario agora, *depois;
	
	depois  = &agora;
	
	//Acessando ponteiro do tipo struct
	(*depois).hora = 20;
	// Ou depois->hora = 20;
	
	printf("%i:%i:%i", agora.hora, agora.minuto, agora.segundo);
	
	
	getchar();
	return 0;
}
