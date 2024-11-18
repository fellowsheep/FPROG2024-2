# Exemplo de Manipulação de Strings em C 

Este diretório contém dois exemplos (que fizemos em aula) que demonstram o uso e manipulação de strings em **C** e **C++**, destacando as diferenças entre as abordagens de ambas as linguagens. 
O conteúdo é parte do repositório **FPROG2024-2**, voltado para a disciplina "Algoritmos e Programação: Fundamentos".

---

## Arquivos Disponíveis

### 1. **ExemploStrings.c**
Este arquivo apresenta exemplos básicos de manipulação de strings em **C puro**, utilizando funções da biblioteca padrão `string.h`. 

- **Conceitos abordados**:
  - Declaração e inicialização de strings como arrays de caracteres.
  - Uso de funções como `strlen`, `strcpy`, `strcat` e `strcmp`.
  - Entrada de strings pelo usuário com `scanf`.

### 2. **ExemploStringsPlus.cpp**
Este arquivo explora o uso de strings em **C++**, aproveitando as facilidades oferecidas pela biblioteca padrão `std::string`.

- **Conceitos abordados**:
  - Comparação entre strings em C (`char[]`) e strings em C++ (`std::string`).
  - Entrada e saída com `cin` e `cout`.
  - Operações como leitura, comparação e obtenção do tamanho.

---

## Objetivo do Diretório

A finalidade é demonstrar como strings são tratadas em ambas as linguagens e destacar as vantagens e desvantagens de cada abordagem. Embora o foco do semestre seja em C, a inclusão do exemplo em C++ serve para expandir a compreensão dos alunos sobre manipulação de strings em diferentes contextos.

---

## Como Utilizar os Exemplos

1. **Clonar o Diretório:**
   - Baixe ou clone o repositório para seu ambiente de desenvolvimento.

2. **Compilar e Executar os Códigos:**
   - Para o exemplo em C:
     ```bash
     gcc ExemploStrings.c -o ExemploStrings
     ./ExemploStrings
     ```
   - Para o exemplo em C++:
     ```bash
     g++ ExemploStringsPlus.cpp -o ExemploStringsPlus
     ./ExemploStringsPlus
     ```

3. **Explorar as Diferenças:**
   - Compare os outputs e os códigos para entender as diferentes formas de trabalhar com strings em C e C++.

---

## Referências

- [Guia de Strings em C (Programiz)](https://www.programiz.com/c-programming/c-strings): Explicação detalhada sobre manipulação de strings em C, com exemplos práticos.
- [Documentação de std::string em C++ (CppReference)](https://en.cppreference.com/w/cpp/string/basic_string): Guia sobre a classe `std::string` da biblioteca padrão do C++.
