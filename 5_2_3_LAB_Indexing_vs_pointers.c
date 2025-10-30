#include <stdio.h>

int main(void) 
{
	char dias[7][10] = {"Domingo", "Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado"};
	int dia;
	scanf("%d", &dia);
	if (dia >= 0 && dia < 7)
	{
		printf("Versión de puntero: %s\n", *(dias + dia));
		printf("Versión del índice de matriz: %s\n", dias[dia]);
	}
	else
		puts("Error, ese dia No existe.");
	return 0;
}