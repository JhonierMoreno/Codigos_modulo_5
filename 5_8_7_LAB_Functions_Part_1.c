#include <stdio.h>

void Hola()
{
	puts("Hola!");
}
void Otra()
{
	puts("Soy yo, otra función.");
}

int main(void)
{
	Hola();
	Hola();
	Hola();
	Otra();
	Hola();
	Otra();
	return 0;
}