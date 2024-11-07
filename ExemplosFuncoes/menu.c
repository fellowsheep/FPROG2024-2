#include <stdio.h>
#include "menu.h"  // Inclui o cabeçalho com os prototypes das funções

// Implementação da Função para a Opção 1
void opcao1()
{
    printf("Você escolheu a Opção 1.\n");
}

// Implementação da Função para a Opção 2
void opcao2()
{
    printf("Você escolheu a Opção 2.\n");
}

// Implementação da Função para a Opção 3
void opcao3()
{
    printf("Você escolheu a Opção 3.\n");
}

// Implementação da Função para a Opção 4
void opcao4()
{
    printf("Você escolheu a Opção 4.\n");
}

// Implementação da Função para sair do programa
void sair()
{
    printf("Saindo do programa.\n");
}

// Implementação da Função que exibe o menu principal e retorna a opção escolhida
char menuPrincipal()
{
    char opcao;

    do {
        printf("\nMenu Principal:\n");
        printf("1 - Opção 1\n");
        printf("2 - Opção 2\n");
        printf("3 - Opção 3\n");
        printf("4 - Opção 4\n");
        printf("5 - Sair\n");
        printf("Escolha uma opção (1-5): ");
        
        // Lê a opção escolhida pelo usuário
        scanf(" %c", &opcao);

        // Verifica se a opção é válida (entre '1' e '5')
        if (opcao < '1' || opcao > '5') {
            printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao < '1' || opcao > '5');  // Continua até que a opção seja válida

    return opcao;  // Retorna a escolha do usuário
}
