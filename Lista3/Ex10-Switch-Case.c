#include <stdio.h>
#include <stdlib.h> //rand()
#include <time.h> 

int main()
{
    srand(time(0)); //pegando a hora do sistema como semente para geração dos nros pseudo-aleatórios
    int opcao;
    int sorteio;
    printf("Escolha o dado: \n");
    printf("1 - D4\n");
    printf("2 - D6\n");
    printf("3 - D8\n");
    printf("4 - D10\n");
    printf("5 - D12\n");
    printf("6 - D16\n");
    scanf("%d",&opcao);

    switch(opcao)
    {
        case 1:
            sorteio = 1 + rand() % 4;
            break;
        case 2:
            sorteio = 1 + rand() % 6;
            break;
        case 3:
            sorteio = 1 + rand() % 8;
            break;
        case 4:
            sorteio = 1 + rand() % 10;
            break;
        case 5:
            sorteio = 1 + rand() % 12;
            break;
        case 6:
            sorteio = 1 + rand() % 16;
            break;
        default:
            printf("Opção inválida!\n");
            sorteio = -1;       
    }
   
    if (sorteio >= 0)
    {
        printf("O valor sorteado é %d", sorteio);
    }

    return 0;
}