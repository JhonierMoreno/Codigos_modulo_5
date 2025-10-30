#include <stdio.h>

int obtenerValor(int parametroA, float parametroB);
int obtenerExclusivo(int parametroA, int parametroB);

int main(void)
{
    int valorTreintaYCinco = obtenerValor(4, 2.4);
    int valorTreinta1 = obtenerValor(4, 2.6);
    int valorTreinta2 = obtenerValor(6, 2.4);
    int valorVeinte = obtenerValor(6, 2.6);
    int valorDos = obtenerExclusivo(2, 1);
    int valorCero = obtenerExclusivo(2, 2);

    printf("Treinta five: %d\n", valorTreintaYCinco);
    printf("Treinta: %d\n", valorTreinta1);
    printf("Treinta: %d\n", valorTreinta2);
    printf("Veinte: %d\n", valorVeinte);
    printf("Dos: %d\n", valorDos);
    printf("Cero: %d\n", valorCero);
    return 0;
}

int obtenerValor(int parametroA, float parametroB)
{
    int resultado = 0;
    if (parametroA >= 5)
    {
        resultado += 5;
    }
    else
    {
        resultado += 10;
    }
    if (parametroB >= 2.5)
    {
        resultado += 20;
    }
    else
    {
        resultado += 25;
    }
    return resultado;
}

int obtenerExclusivo(int parametroA, int parametroB)
{
    if (parametroA == 2 && parametroB != 2)
        return 2;
    if (parametroA != 2 && parametroB == 2)
        return 2;
    return 0;
}
