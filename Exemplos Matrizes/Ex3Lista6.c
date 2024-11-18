#include <stdio.h>

/*
 Exercício 3 da Lista 6: Matriz identidade, na matemática, também conhecida
 como matriz I ou matriz unitária, é uma matriz quadrada em que a diagonal
 principal contém apenas elementos 1 (um) e todos os outros elementos são 
 0 (zero). Crie uma função que gere uma matriz identidade 4x4.
*/

int main()
{
    int M[4][4];

    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            if (i == j)
            {
                M[i][j] = 1;
            }
            else
            {
                M[i][j] = 0;
            }
            printf("%d ",M[i][j]);
        }
        printf("\n");
    }

    return 0;
}