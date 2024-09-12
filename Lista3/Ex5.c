#include<stdio.h>

int main()
{
    int n;
    printf("Digite um nro inteiro: ");
    scanf("%d",&n); //fazendo a leitura

    int res = n % 2;
    if (res == 0)
    {
        printf("%d é par.",n);
    }
    else
    {
        printf("%d é ímpar.",n);
    }
    return 0;
}