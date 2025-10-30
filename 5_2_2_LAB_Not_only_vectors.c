#include <stdio.h>

int main(void) 
{
    char casilla[8][8];
    casilla[0][0] = 'R';
    casilla[0][1] = 'N';
    casilla[0][2] = 'B';
    casilla[0][3] = 'Q';
    casilla[0][4] = 'K';
    casilla[0][5] = 'B';
    casilla[0][6] = 'N';
    casilla[0][7] = 'R';
    casilla[7][0] = 'R';
    casilla[7][1] = 'N';
    casilla[7][2] = 'B';
    casilla[7][3] = 'Q';
    casilla[7][4] = 'K';
    casilla[7][5] = 'B';
    casilla[7][6] = 'N';
    casilla[7][7] = 'R';

    int i;
    for (i = 0; i < 8; i++)
    {
        casilla[1][i] = 'P';
        casilla[2][i] = ' ';
        casilla[3][i] = ' ';
        casilla[4][i] = ' ';
        casilla[5][i] = ' ';
        casilla[6][i] = 'P';
    }

    int j;
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            printf("%c", casilla[i][j]);
        }
        printf("\n");
    }
    return 0;
}
