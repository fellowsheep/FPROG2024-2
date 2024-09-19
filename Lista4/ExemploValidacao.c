#include <stdio.h>
#include <ctype.h>

int main()
{
    char opcao = '\0';

    while (opcao != 'S' && opcao != 'N')
    {
        printf("Digite S/N: ");
        scanf(" %c",&opcao);
        //transforma a letra digitada em maiúscula usando a função toupper
        opcao = toupper(opcao);
        if (opcao != 'S' && opcao != 'N')
        {
            printf("Opção invalida\n");
        }
    }

    return 0;
}