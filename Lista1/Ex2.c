/*
 * Programa: Nome_do_Programa.c
 * Descrição: [Breve descrição do que o programa faz.]
 * Autor: [Seu Nome]
 * Data de criação: [Data de Criação]
 * Última modificação: [Data da Última Modificação]
 *
 * Observações:
 * - [Qualquer detalhe adicional ou dica importante.]
 */

#include<stdio.h>

int main() 
{
    char nome[15];
    printf("Digite seu nome: "); //comando de saida com msg
    scanf("%s",&nome); //leitura de dado para variável nome
    printf("Bem-vindo, %s!!!",nome);
    return 0;
}
