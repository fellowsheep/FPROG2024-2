#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0)); //semente para geração aleatória

    // Criação de um array com 10 inteiros
    int A[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    //Como calcular o tamanho do Array
    int tam = sizeof(A) / sizeof(A[0]);

    printf("O terceiro elemento é %d\n",A[2]);
    
    printf("Tamanho do array: %d\n",tam);

    printf("O último elemento é %d\n",A[tam-1]);

    // Criação de um array de floats com 5 posições
    float B[5];

    // Atribuir um valor a um elemento do array
    B[0] = 3.14159;
    B[1] = 9.9;
    B[2] = B[0] + B[1];
    
    printf("%f + %f = %f\n",B[0],B[1],B[2]);

    // Percorrer o array e inicializar todas as posições
    // usando um contador como o índice para acassá-lo
    for (int i=0; i < 5;i++)
    {
        B[i] = rand() % 101 / 100.0;
        printf("B[%d] = %.2f\n",i,B[i]);
    }

    // Exercício 8 do simulado do Grau A
    // Optamos por fazer separado a leitura dos valores e depois os cálculos pedidos
    int diaSemana[7];
    //Fazer a "leitura" dos valores diários (optou-se por sorteio)
    for (int i=0; i < 7;i++)
    {
        diaSemana[i] = rand() % 11; //0 a 10
        printf("%d ",diaSemana[i]);
    }
    printf("\n");
    //Assume que o programa faz outras coisas...
    //E agora sim, os cálculo
    int total = 0;
    int maior = -1; //um valor menor que o menor valor possível
    int maiorIndice = -1;
    for (int i=0; i<7; i++)
    {
        total = total + diaSemana[i];
        if (diaSemana[i] > maior)
        {
            maior = diaSemana[i];
            maiorIndice = i;
        }
        if (diaSemana[i] < 5)
        {
            printf("Dia %d teve seca!\n",i+1);
        }
    }
    printf("Total de chuva acumulada: %d\n", total);
    printf("Maior volume de chuva: %d\n", maior);
    printf("Dia do maior valor: %d\n",maiorIndice+1);


    return 0;
}