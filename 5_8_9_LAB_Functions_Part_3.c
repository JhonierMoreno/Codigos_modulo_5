#include <stdio.h>

double obtenerMaximoDeTres(double parametroA, double parametroB, double parametroC)
{
    if (parametroA > parametroB && parametroA > parametroC)
        return parametroA;
    if (parametroB > parametroA && parametroB > parametroC)
        return parametroB;
    return parametroC;
}

int main(void)
{
    double valorDiez = obtenerMaximoDeTres(5, 9, 10);
    double valorGrande = obtenerMaximoDeTres(555.4, 555.3, 556.4);
    printf("Ten: %.2f\n", valorDiez);
    printf("Big value: %.2f\n", valorGrande);
    return 0;
}
