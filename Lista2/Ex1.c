/*
Exercício 1 da Lista 2
*/

#include <stdio.h>

int main()
{
    int minutos, segundos; 
    printf("Digite um valor de minutos: ");
    //Leitura do valor em minutos armazenando na variável minutos
    scanf("%d",&minutos);
    //Processamento - transformar a quantidade de minutos em segundos
    segundos = minutos * 60;
    //Escrita do resultado na tela
    printf("%d minutos corresponde a %d segundos.",minutos,segundos);

    return 0;
}