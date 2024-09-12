#include<stdio.h>

int main()
{
    int n;
    printf("Digite um nro inteiro: ");
    scanf("%d",&n); //fazendo a leitura

    if (n % 3 == 0)
    {
        printf("%d é divisível por 3.",n);
    }
    else
    {
        printf("%d não é divisível por 3.",n);
    }
    return 0;
}