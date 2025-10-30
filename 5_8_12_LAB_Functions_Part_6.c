#include <stdio.h>

int compararCadenas(char *textoA, char *textoB)
{
    int indice;
    for (indice = 0; textoA[indice] != 0 && textoB[indice] != 0; indice++)
    {
        if (textoA[indice] > textoB[indice])
        {
            return 1;
        }
        else if (textoA[indice] < textoB[indice])
        {
            return -1;
        }
    }
    if (textoA[indice] == 0)
    {
        if (textoB[indice] == 0)
            return 0;
        else
            return -1;
    }
    else
        return 1;
}

int main(void)
{
    int resultado1 = compararCadenas("AAA", "BBB");
    int resultado2 = compararCadenas("AAC", "AAB");
    int resultado3 = compararCadenas("AAC", "AAC");
    int resultado4 = compararCadenas("AAC", "AACC");
    printf("resultado1: %d\n", resultado1);
    printf("resultado2: %d\n", resultado2);
    printf("resultado3: %d\n", resultado3);
    printf("resultado4: %d\n", resultado4);
    return 0;
}
