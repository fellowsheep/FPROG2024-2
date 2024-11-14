#include <stdio.h>
#include <string.h>

// Declaração da struct
typedef struct{
    char nome[50];
    int idade;
    float altura;
} Pessoa;

// Função que inicializa uma struct Pessoa com os dados fornecidos
Pessoa inicializarPessoa(char nome[], int idade, float altura) {
    Pessoa p;
    strcpy(p.nome, nome);  // Copia o nome para o campo nome da struct
    p.idade = idade;       // Atribui a idade
    p.altura = altura;     // Atribui a altura
    return p;              // Retorna a struct preenchida
}

// Função que exibe os dados de uma Pessoa
void exibirDados(Pessoa p) {
    printf("Nome: %s\n", p.nome);
    printf("Idade: %d\n", p.idade);
    printf("Altura: %.2f\n", p.altura);
}

int main() {
    // Criação de um array de structs Pessoa
    Pessoa grupo[5];

    // Inicialização dos dados usando a função inicializarPessoa
    grupo[0] = inicializarPessoa("Ana", 25, 1.65);
    grupo[1] = inicializarPessoa("Carlos", 30, 1.80);
    grupo[2] = inicializarPessoa("Maria", 22, 1.60);
    grupo[3] = inicializarPessoa("Lucas", 28, 1.75);
    grupo[4] = inicializarPessoa("Sofia", 27, 1.68);

    // Exibição dos dados usando a função exibirDados
    for (int i = 0; i < 5; i++) {
        printf("\nPessoa %d:\n", i + 1);
        exibirDados(grupo[i]);
    }

    return 0;
}