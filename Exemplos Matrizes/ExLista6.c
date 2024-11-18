#include <stdio.h>

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