#include <stdio.h>

int obtenerValor(int parametroA, float parametroB)
{
    int resultado = 0;
    if (parametroA > 10)
    {
        resultado += 2;
    }
    else
    {
        resultado += 1;
    }
    if (parametroB > 5.5)
    {
        resultado += 4;
    }
    else
    {
        resultado += 3;
    }
    return resultado;
}

int obtenerUnoODos(int parametro)
{
    if (parametro > 5)
        return 2;
    return 1;
}

int main(void)
{
    int valorCinco = obtenerValor(1, 5.6);
    int valorSeis = obtenerValor(11, 5.6);
    int valorSiete = obtenerValor(11, 5.6) + obtenerUnoODos(0);
    int valorOcho = obtenerValor(11, 5.6) + obtenerUnoODos(6);
    int valorNueve = obtenerValor(11, 5.6) + obtenerUnoODos(0) + obtenerUnoODos(6);
    printf("Cinco: %d\n", valorCinco);
    printf("Seis: %d\n", valorSeis);
    printf("Siete: %d\n", valorSiete);
    printf("Ocho: %d\n", valorOcho);
    printf("Nueve: %d\n", valorNueve);
    return 0;
}
