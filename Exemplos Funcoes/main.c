/*
Compilação:
Para compilar o programa com os três arquivos (`main.c`, `menu.c`, `menu.h`), use o seguinte comando:

    gcc -o programa main.c menu.c

Isso irá gerar um executável chamado `programa`. Para executar o programa, use:

    ./programa
*/

#include <stdio.h>
#include "menu.h"  // Inclui o cabeçalho para usar as funções do menu

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
