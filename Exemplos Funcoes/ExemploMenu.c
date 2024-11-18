#include <stdio.h>

// Funções para cada opção do menu
void opcao1()
{
    printf("Você escolheu a Opção 1.\n");
}

void opcao2()
{
    printf("Você escolheu a Opção 2.\n");
}

void opcao3()
{
    printf("Você escolheu a Opção 3.\n");
}

void opcao4()
{
    printf("Você escolheu a Opção 4.\n");
}

void sair()
{
    printf("Saindo do programa.\n");
}

// Função que exibe o menu principal e retorna a opção escolhida
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

int main()
{
    char escolha;

    do {
        // Chama o menu e armazena a escolha do usuário
        escolha = menuPrincipal();

        // Processa a escolha do usuário com uma função específica para cada opção
        switch (escolha) {
            case '1':
                opcao1();  // Executa a função para a Opção 1
                break;
            case '2':
                opcao2();  // Executa a função para a Opção 2
                break;
            case '3':
                opcao3();  // Executa a função para a Opção 3
                break;
            case '4':
                opcao4();  // Executa a função para a Opção 4
                break;
            case '5':
                sair();  // Executa a função para a Opção de Saída
                break;
        }

    } while (escolha != '5');  // Repete o menu até que o usuário escolha '5' para sair

    return 0;  // Indica que o programa terminou com sucesso
}
