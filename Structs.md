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

#### Opção 1: Usando Apenas `struct`

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
 
#### Opção 2: Usando `typedef struct`

Podemos simplificar a declaração das variáveis do tipo `Pessoa` usando `typedef struct`, como no exemplo abaixo:

```c
// Declaração de uma struct com typedef
typedef struct {
    char nome[50];
    int idade;
    float altura;
} Pessoa;
```
### Explicação

- **Sem `typedef`**: Ao declarar uma variável, precisamos usar `struct` como prefixo. Exemplo: `struct Pessoa pessoa1;`
- **Com `typedef`**: Criamos um alias, `Pessoa`, então podemos declarar variáveis diretamente, sem `struct`. Exemplo: `Pessoa pessoa1;`

---
 
## Como Utilizar uma Variável do Tipo da Struct

Após declarar uma `struct`, podemos criar variáveis desse novo tipo.

### Exemplo

```c
int main() {
    // Criação de uma variável do tipo 'Pessoa' (com ou sem typedef, dependendo da definição)
    Pessoa pessoa1;

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

- Criamos a variável `pessoa1` do tipo `Pessoa`, e podemos usar diretamente (sem `struct` na frente) se utilizarmos `typedef struct` na declaração.
- Para acessar um campo da `struct`, usamos a notação `.` (ponto), como em `pessoa1.nome`.

---

## Arrays de Structs

Assim como usamos arrays para tipos básicos (`int`, `float`), podemos criar arrays de `structs` para armazenar várias instâncias de uma estrutura.

### Exemplo: Array de Structs `Pessoa`

```c
#include <stdio.h>
#include <string.h>

// Declaração da struct com typedef
typedef struct {
    char nome[50];
    int idade;
    float altura;
} Pessoa;

int main() {
    // Criação de um array de structs do tipo 'Pessoa'
    Pessoa grupo[3];

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

- **Array de `structs`**: Criamos `grupo`, um array de `Pessoa` (se `typedef` for usado) que pode armazenar dados de três pessoas.
- **Inicialização e acesso**: Cada elemento do array `grupo[i]` é uma `Pessoa`, e podemos acessar os campos usando `grupo[i].campo`.

Esse exemplo é útil para armazenar e manipular múltiplas instâncias de uma mesma `struct`, como uma lista de pessoas.

---

## Exemplo de Função que Retorna uma Struct

É possível criar uma função que retorna uma `struct` inteira, o que pode ser útil para inicializar objetos complexos de forma organizada. No exemplo abaixo, temos uma função chamada `inicializarPessoa` que recebe parâmetros e retorna uma nova `Pessoa` com os valores preenchidos.

### Exemplo de Função

```c
#include <stdio.h>
#include <string.h>

// Declaração da struct com typedef
typedef struct {
    char nome[50];
    int idade;
    float altura;
} Pessoa;

// Função que inicializa uma struct Pessoa
Pessoa inicializarPessoa(char nome[], int idade, float altura) {
    Pessoa p;
    strcpy(p.nome, nome);  // Copia o nome para o campo nome da struct
    p.idade = idade;       // Atribui a idade
    p.altura = altura;     // Atribui a altura
    return p;              // Retorna a struct preenchida
}

int main() {
    // Chama a função para inicializar uma pessoa
    Pessoa pessoa1 = inicializarPessoa("Ana", 25, 1.65);

    // Exibe os dados da pessoa inicializada
    printf("Nome: %s\n", pessoa1.nome);
    printf("Idade: %d\n", pessoa1.idade);
    printf("Altura: %.2f\n", pessoa1.altura);

    return 0;
}
```

### Explicação

- **Função `inicializarPessoa`**: Esta função recebe o nome, idade, e altura como parâmetros e retorna uma nova `Pessoa` com esses valores.
- **Uso de `strcpy`**: Como `nome` é uma string, usamos `strcpy` para copiar o valor para o campo `nome` da struct `Pessoa`.
- **Retorno da `struct`**: A função retorna a struct preenchida, permitindo que o chamador armazene o valor retornado em uma variável `Pessoa`.
- **Exemplo de uso**: No `main`, chamamos `inicializarPessoa` para criar uma nova `Pessoa` e exibir seus dados.

Esse padrão de função é útil para inicializar structs de forma modular e organizada!

---

## Função que Exibe os Dados de uma Struct

Além de inicializar structs, é comum criar funções para exibir os dados de uma `struct`. No exemplo abaixo, a função `exibirDados` recebe uma `Pessoa` e imprime suas informações. Neste caso, utilizamos a função `inicializarPessoa` para criar e preencher a struct antes de exibir.

### Exemplo de Função

```c
#include <stdio.h>
#include <string.h>

// Declaração da struct com typedef
typedef struct {
    char nome[50];
    int idade;
    float altura;
} Pessoa;

// Função que inicializa uma struct Pessoa
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
    // Inicialização de uma pessoa usando a função inicializarPessoa
    Pessoa pessoa1 = inicializarPessoa("Carlos", 30, 1.75);

    // Chamada da função para exibir os dados da pessoa
    exibirDados(pessoa1);

    return 0;
}
```

### Explicação

- **Função `inicializarPessoa`**: Esta função recebe o nome, idade, e altura como parâmetros e retorna uma nova `Pessoa` com esses valores.
- **Função `exibirDados`**: Recebe uma `Pessoa` como parâmetro e imprime seus campos `nome`, `idade`, e `altura`.
- **Uso no `main`**:
  - Chamamos `inicializarPessoa` para criar e inicializar a struct `Pessoa`.
  - Em seguida, `exibirDados` é utilizada para exibir os dados da `Pessoa` inicializada.

Essa abordagem modulariza o código, facilitando tanto a criação quanto a exibição dos dados de uma struct.

---

## Exemplo Completo: Arrays de Structs com Funções

Neste exemplo, vamos combinar tudo o que aprendemos até agora:

- Criar um **array de `struct Pessoa`**.
- **Inicializar** cada elemento do array usando a função `inicializarPessoa`.
- **Exibir** os dados de cada pessoa usando a função `exibirDados`.

### Código Exemplo

```c
#include <stdio.h>
#include <string.h>

// Declaração da struct com typedef
typedef struct {
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
```

### Explicação

- **Array de structs**: Criamos um array `grupo` com 5 elementos do tipo `Pessoa`.
- **Inicialização com `inicializarPessoa`**:
  - Para cada posição do array, chamamos a função `inicializarPessoa`, passando os dados de cada pessoa.
  - A função retorna uma `Pessoa` com os dados preenchidos, que é armazenada no array.
- **Exibição com `exibirDados`**:
  - Utilizamos um loop `for` para percorrer o array.
  - Em cada iteração, chamamos `exibirDados` para o elemento atual do array, exibindo as informações da pessoa.

Este exemplo mostra como usar arrays de structs e funções para modularizar e organizar o código de forma clara e eficiente.



