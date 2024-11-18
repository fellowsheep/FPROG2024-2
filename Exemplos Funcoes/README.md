# Exemplos de Funções em C

⚠️ **Nota Importante:** Este diretório contém exemplos sobre o uso de funções em C, explorando desde conceitos básicos até a organização de código utilizando cabeçalhos e a separação em múltiplos arquivos. Ele faz parte do repositório **FPROG2024-2**, voltado para a disciplina "Algoritmos e Programação: Fundamentos".

---

## Arquivos Disponíveis

### 1. **Exemplo1.c**
Este arquivo apresenta um exemplo básico sobre funções em C, abordando:

- Declaração e implementação de funções.
- Uso de parâmetros e retorno de valores.
- Estrutura básica para chamada de funções no `main`.

---

### 2. **ExemploMenu.c**
Este exemplo demonstra a implementação de um menu interativo em C, com foco em:

- Uso de funções para modularizar o programa.
- Implementação de um loop para exibir o menu até que o usuário opte por sair.

---

### 3. **ExemploMenuComCabecalhos.c**
Neste arquivo, o mesmo menu do exemplo anterior é implementado, mas utilizando cabeçalhos para declarar as funções no início do código. Isso organiza o programa e permite que as funções principais sejam implementadas após o `main`.

---

### 4. **main.c**, **menu.h**, **menu.c**
Este conjunto de arquivos demonstra a separação do programa em múltiplos arquivos, simulando uma **biblioteca de código**. A tarefa do menu interativo é dividida em:

- **`menu.h`**: Define os cabeçalhos das funções utilizadas no menu, funcionando como uma interface.
- **`menu.c`**: Contém as implementações das funções declaradas em `menu.h`.
- **`main.c`**: Faz uso das funções do menu, chamando-as a partir do cabeçalho `menu.h`.

### O que é uma Biblioteca de Código?
Uma biblioteca de código é uma forma de organizar e reutilizar funções e outros elementos em diferentes programas. Em C, isso é feito separando a interface (arquivos `.h`) da implementação (arquivos `.c`). O uso de bibliotecas permite:
- Melhor organização do código.
- Reaproveitamento de funcionalidades em outros projetos.
- Facilitação da manutenção e leitura do código.

---

## Objetivo do Diretório

Este diretório tem como objetivo:

- Demonstrar a criação e uso de funções em C.
- Apresentar boas práticas para modularização de código.
- Introduzir a separação de código em múltiplos arquivos com o uso de cabeçalhos.

---

## Como Utilizar os Exemplos

1. **Clonar o Diretório:**
   - Baixe ou clone o repositório para seu ambiente de desenvolvimento.

2. **Compilar e Executar os Códigos:**
   - Para os arquivos individuais:
     ```bash
     gcc nome_do_arquivo.c -o nome_do_arquivo
     ./nome_do_arquivo
     ```

   - Para o conjunto `main.c`, `menu.h`, e `menu.c`, compile todos juntos:
     ```bash
     gcc -o programa main.c menu.c
     ./programa
     ```

     Isso irá gerar um executável chamado `programa`. Para executar o programa, utilize o comando acima.

3. **Explorar os Códigos:**
   - Compare os diferentes exemplos para entender como organizar e modularizar seu programa.

---

## Referências

- [Funções em C - GeeksForGeeks](https://www.geeksforgeeks.org/functions-in-c/)
