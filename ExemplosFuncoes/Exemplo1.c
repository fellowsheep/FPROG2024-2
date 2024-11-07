#include <stdio.h>
#include <stdbool.h>

// Função sem retorno (void), apenas exibe uma mensagem de saudação simples
void cumprimentar()
{
    printf("Olá!\n");
}

// Função sem retorno (void) com um parâmetro do tipo string
void cumprimentarPessoa(char nome[])
{
    // O parâmetro `nome` é uma variável local da função, usada apenas aqui
    // Qualquer variável passada como argumento pode ter um nome diferente
    printf("Olá %s!\n", nome);
}

// Função que retorna um inteiro, calcula o quadrado de um número
int quadradoDe(int x)
{
    int res = x * x;  // Calcula o quadrado de x e armazena em res
    return res;  // Retorna o resultado calculado
}

// Função que verifica se um número é par e retorna um valor booleano
bool ehPar(int x)
{
    bool res;
    if (x % 2 == 0)  // Verifica se x é divisível por 2
    {
        res = true;  // Se for, retorna verdadeiro
    }
    else 
    {
        res = false;  // Caso contrário, retorna falso
    }
    return res;  // Retorna o resultado da verificação
}

// Função principal (ponto de entrada do programa)
int main()
{
    // Chamada à função cumprimentar (sem parâmetros)
    cumprimentar();

    // Chamada à função cumprimentarPessoa, passando um *literal* como parâmetro
    cumprimentarPessoa("Rossana");

    // Declaração de variáveis para receber nomes
    char nome[15], banana[15];
    printf("Digite um nome: ");
    scanf("%s", banana);  // Lê o primeiro nome e armazena em banana
    printf("Digite outro nome: ");
    scanf("%s", nome);  // Lê o segundo nome e armazena em nome
    
    // Chamada à função cumprimentarPessoa, passando *variáveis* como parâmetros
    cumprimentarPessoa(banana);
    cumprimentarPessoa(nome);
    // Note que `banana` e `nome` são passados para `cumprimentarPessoa`, mas o nome do parâmetro lá é `nome`
    // Os nomes das variáveis passadas e do parâmetro não precisam ser iguais
 
    // Função que retorna um valor pode ser armazenada em uma variável
    int a = quadradoDe(2);  // Passa o literal 2 como parâmetro
    int b = quadradoDe(a);  // Passa a variável `a` como parâmetro
    printf("%d %d %d\n", a, b, quadradoDe(4));  // Passa o literal 4 diretamente como argumento

    // Usando a função ehPar para verificar se um número é par ou ímpar
    bool res = ehPar(5);  // Passa o literal 5 como parâmetro
    if (res == true) 
        printf("É par!\n");
    else 
        printf("É ímpar!\n");

    // Outra verificação usando diretamente o retorno da função ehPar
    if (ehPar(b) == true)  // Passa a variável `b` como parâmetro
        printf("É par!\n");
    else 
        printf("É ímpar!\n");

    return 0;  // Retorna 0 para indicar que o programa terminou corretamente
}
