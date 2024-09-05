#include <stdio.h>

int main()
{
    int idade;
    printf("Digite sua idade: ");
    scanf("%d",&idade);

    if (idade >= 18) 
    {
        printf("Voce é maior de idade!!!");
    }
    else
    {
        printf("Voce é menor de idade!!!");
    }

    printf("Tchau!\n");

    return 0;
}