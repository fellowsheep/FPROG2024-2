#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Criação de constantes para armazenar o tamanho FIXO dos vetores/matrizes
const int LINHAS = 5;
const int COLUNAS = 7;

int main()
{
    int M[3][4] = { 1,  2,  3,  4,
                    5,  6,  7,  8,
                    9, 10, 11, 12 
                  }; //Criando uma matriz com 3 linhas e 4 colunas

    for (int i=0; i<3; i++) // Percorre as linhas com o índice i
    {
        /////
        for(int j=0; j<4; j++) // Percorre as colunas com o índice j
        {
            printf("%d\t",M[i][j]); // Imprime o elemento que está na linha i e coluna j de M
        }
        /////
        printf("\n"); //Imprime uma quebra de linha
    }


    int N[LINHAS][COLUNAS];
    for(int i=0; i<LINHAS; i++)
    {
        for(int j=0; j<COLUNAS; j++)
        {
            N[i][j] = rand() % 10 + 1;
            printf("%d ", N[i][j]);
        }
        printf("\n");
    }


    return 0;
}