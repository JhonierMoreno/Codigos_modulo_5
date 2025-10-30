#include <stdio.h>

double potencia(double, int);

int main(void)
{
    double valorVeinticinco = potencia(5.0, 2);
    double valorPiCuadrado = potencia(3.14159265, 2);
    double valorPiCubico = potencia(3.14159265, 3);
    double potenciaGrande = potencia(1.23, 20);
    double valorMillon = potencia(10, 6);
    printf("Treinta y cinco: %.4f\n", valorVeinticinco);
    printf("Pi al cuadrado: %.4f\n", valorPiCuadrado);
    printf("Pi al cubo: %.4f\n", valorPiCubico);
    printf("Número no tan grande: %.4f\n", potenciaGrande);
    printf("Millón: %.4f\n", valorMillon);
    return 0;
}

double potencia(double base, int exponente)
{
    double resultado = 1;
    for (int i = 0; i < exponente; i++)
    {
        resultado *= base;
    }
    return resultado;	
}
