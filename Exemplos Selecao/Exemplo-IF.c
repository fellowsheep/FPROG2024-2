#include <stdio.h>

int main()
{
    int idade;
    printf("Digite sua idade: ");
    scanf("%d",&idade);

    if (idade >= 18) // idade > 17
    {
        printf("Voce é maior de idade!!!");
    }

    printf("Tchau!\n");


    return 0;
}