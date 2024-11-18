#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));

    float notasAlunos[10][3];
    for(int i=0; i<10; i++)
    {
        notasAlunos[i][0] = rand() % 101 / 10.0;
        notasAlunos[i][1] = rand() % 101 / 10.0;
        notasAlunos[i][2] = (notasAlunos[i][0] + 2 * notasAlunos[i][1])/3.0;
    }

    for(int i=0; i<10; i++)
    {
        printf("Aluno %d: ",i);
        for(int j=0; j<3; j++)
        {   
            printf("%.1f ",notasAlunos[i][j]);
        }
        if (notasAlunos[i][2] >= 6.0)
        {
            printf("Aprovado!\n");
        }
        else
        {
            printf("Reprovado!\n");
        }
    }


    return 0;
}