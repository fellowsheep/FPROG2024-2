# Introdução às Structs em C

As **structs** são uma maneira de agrupar dados de diferentes tipos em uma única estrutura. Isso é útil para organizar dados que estão relacionados entre si. Por exemplo, em vez de armazenar o nome, idade e altura de uma pessoa em variáveis separadas, você pode criar uma `struct` chamada `Pessoa` que contém todas essas informações.

---

## Para que Servem as Structs?

As structs permitem agrupar informações relacionadas, facilitando o uso e organização dos dados. Elas são especialmente úteis em programas que lidam com dados complexos, pois permitem que dados de tipos diferentes sejam tratados como um único tipo.

Exemplo:
- Ao invés de armazenar dados de uma pessoa (nome, idade, altura) em variáveis separadas, podemos criar uma `struct` `Pessoa` para agrupar todos esses atributos em uma única estrutura.

---

## Como Criar uma Struct

Para declarar uma `struct`, usamos a palavra-chave `struct` seguida do nome da estrutura e das variáveis (campos) que ela conterá.

### Exemplo Básico de Declaração de uma `struct`

```c
// Declaração de uma struct chamada 'Pessoa'
struct Pessoa {
    char nome[50];   // Nome da pessoa
    int idade;       // Idade da pessoa
    float altura;    // Altura da pessoa
};
```
### Explicação

- **`struct Pessoa`**: Define um novo tipo de dado chamado `Pessoa`.
- Dentro da estrutura, definimos os campos **nome**, **idade**, e **altura**.
  - **`char nome[50];`** armazena o nome da pessoa (até 50 caracteres).
  - **`int idade;`** armazena a idade da pessoa.
  - **`float altura;`** armazena a altura da pessoa em metros.
 
## Como Utilizar uma Variável do Tipo da Struct

Após declarar uma `struct`, podemos criar variáveis desse novo tipo.

### Exemplo

```c
int main() {
    // Criação de uma variável do tipo 'Pessoa'
    struct Pessoa pessoa1;

    // Atribuição de valores aos campos da struct
    strcpy(pessoa1.nome, "Ana");
    pessoa1.idade = 25;
    pessoa1.altura = 1.65;

    // Acesso e exibição dos valores
    printf("Nome: %s\n", pessoa1.nome);
    printf("Idade: %d\n", pessoa1.idade);
    printf("Altura: %.2f\n", pessoa1.altura);

    return 0;
}
```
### Explicação

- Criamos a variável `pessoa1` do tipo `struct Pessoa`.
- Usamos `strcpy` para atribuir um valor ao campo `nome`, pois `nome` é uma string.
- Os campos `idade` e `altura` são atribuídos diretamente, pois são variáveis `int` e `float`.
- Para acessar um campo da `struct`, usamos a notação `.` (ponto), como em `pessoa1.nome`.

## Arrays de Structs

Assim como usamos arrays para tipos básicos (`int`, `float`), podemos criar arrays de `structs` para armazenar várias instâncias de uma estrutura.

### Exemplo: Array de Structs `Pessoa`

```c
#include <stdio.h>
#include <string.h>

// Declaração da struct
struct Pessoa {
    char nome[50];
    int idade;
    float altura;
};

int main() {
    // Criação de um array de structs do tipo 'Pessoa'
    struct Pessoa grupo[3];

    // Inicialização dos valores
    strcpy(grupo[0].nome, "Carlos");
    grupo[0].idade = 30;
    grupo[0].altura = 1.80;

    strcpy(grupo[1].nome, "Maria");
    grupo[1].idade = 22;
    grupo[1].altura = 1.60;

    strcpy(grupo[2].nome, "Lucas");
    grupo[2].idade = 28;
    grupo[2].altura = 1.75;

    // Exibição dos valores
    for (int i = 0; i < 3; i++) {
        printf("Nome: %s\n", grupo[i].nome);
        printf("Idade: %d\n", grupo[i].idade);
        printf("Altura: %.2f\n\n", grupo[i].altura);
    }

    return 0;
}
```
### Explicação

- **Array de `structs`**: Criamos `grupo`, um array de `struct Pessoa` que pode armazenar dados de três pessoas.
- **Inicialização e acesso**: Cada elemento do array `grupo[i]` é uma `struct Pessoa`, e podemos acessar os campos usando `grupo[i].campo`.

Esse exemplo é útil para armazenar e manipular múltiplas instâncias de uma mesma `struct`, como uma lista de pessoas.



