#include <stdio.h>

/*
Exercício 1 da Lista 6: Dados os vetores v1=[1,5,9,2,5], v2=[7,4,13,21,6] e v3=[8,-3,5,7,12], 
faça um programa que copie o conteúdo dos vetores dados para uma 
matriz de tamanho 3x5 de forma a obter o seguinte resultado:
M =[ 1  5 9  2  5 
     7  4 13 21 6 
	 8 -3 5  7  12]
*/

int main()
{
    int v1[5] = {1, 5, 9, 2, 5};
    int v2[5] = {7, 4, 13, 21, 6};
    int v3[5] = {8, -3, 5, 7, 12};

    int M[3][5];

    for (int j = 0; j<5; j++)
    {
        M[0][j] = v1[j];
        M[1][j] = v2[j];
        M[2][j] = v3[j];
    }

    for(int i=0; i<3; i++) //percorre as linhas
    {
        for(int j=0; j<5; j++)
        {
            printf("%d ",M[i][j]);
        }
        printf("\n");
    }

    return 0;
}