# Passo a Passo para Configuração e Uso do CMake no Visual Studio Code

Este guia mostra como configurar e compilar um projeto C/C++ no Visual Studio Code usando o **CMake**. Vamos utilizar um exemplo básico com os arquivos `main.c`, `biblioteca.h`, e `biblioteca.c`.

---

## Pré-requisitos

1. **Visual Studio Code (VSCode)** instalado.
2. **Extensões necessárias**:
   - **C/C++** (para suporte ao código C/C++).
   - **CMake Tools** (para integração com CMake).
3. **Compilador C/C++** (como GCC no Linux/macOS ou MinGW no Windows).
4. **CMake** instalado. 

---

## Estrutura do Projeto

Para este exemplo, organize o projeto da seguinte forma:

```plaintext
meu_projeto/
├── CMakeLists.txt
├── main.c
├── biblioteca.h
└── biblioteca.c
```

### Explicação da Estrutura

- **CMakeLists.txt**: Arquivo de configuração do CMake, onde são definidas as instruções de compilação e as dependências do projeto.
- **main.c**: Arquivo principal do programa, onde a função `main()` será implementada.
- **biblioteca.h**: Arquivo de cabeçalho que declara as funções e variáveis compartilhadas na biblioteca.
- **biblioteca.c**: Arquivo de implementação da biblioteca, onde as funções declaradas em `biblioteca.h` são definidas.

Essa estrutura ajuda a organizar o código e facilita o uso do CMake para compilar o projeto.


## Passo 1: Criar o Arquivo `CMakeLists.txt`

No diretório raiz do projeto (`meu_projeto/`), crie um arquivo chamado **`CMakeLists.txt`** com o seguinte conteúdo:

```cmake
# Define a versão mínima do CMake
cmake_minimum_required(VERSION 3.10)

# Nome do projeto
project(meu_projeto)

# Define o padrão de compilação
set(CMAKE_C_STANDARD 99)

# Adiciona os arquivos do projeto ao executável
add_executable(meu_projeto main.c biblioteca.c)
```
### Explicação do `CMakeLists.txt`

O arquivo `CMakeLists.txt` contém as configurações necessárias para que o CMake possa compilar o projeto. Cada linha no arquivo tem uma função específica:

- **`cmake_minimum_required(VERSION 3.10)`**: Define a versão mínima do CMake necessária para compilar o projeto. Neste caso, estamos exigindo a versão 3.10 ou superior.

- **`project(meu_projeto)`**: Define o nome do projeto. Esse nome será usado no CMake e também pode aparecer como o nome do executável gerado.

- **`set(CMAKE_C_STANDARD 99)`**: Especifica o padrão de C a ser utilizado na compilação. Aqui, escolhemos o padrão C99, que é compatível com várias funcionalidades modernas do C.

- **`add_executable(meu_projeto main.c biblioteca.c)`**: Define os arquivos-fonte que serão usados para criar o executável. Neste exemplo, `main.c` e `biblioteca.c` são os arquivos incluídos. O nome `meu_projeto` indica o nome do executável gerado.

Essas linhas configuram as informações essenciais para que o CMake gere um arquivo executável a partir dos arquivos `main.c` e `biblioteca.c`.

## Passo 2: Abrir o Projeto no Visual Studio Code

1. Abra o **Visual Studio Code**.
2. Selecione **File > Open Folder** (ou **Arquivo > Abrir Pasta**) e escolha a pasta raiz do projeto (`meu_projeto/`).
   > **Atenção:** É essencial abrir a pasta do projeto e não apenas os arquivos individualmente, para que o CMake funcione corretamente.

Ao abrir a pasta raiz, o VSCode reconhece o arquivo `CMakeLists.txt`, permitindo que o CMake Tools funcione adequadamente e encontre todas as dependências do projeto.

## Passo 3: Configurar o CMake no VSCode

1. **Selecionar o Kit de Compilação**:
   - Na barra de status do VSCode (parte inferior), você verá a opção **[No Kit Selected]**.
   - Clique nela e selecione o compilador C/C++ que você tem instalado (por exemplo, **GCC** ou **MinGW**).

2. **Configurar o Projeto**:
   - Após selecionar o kit, clique em **[CMake: Configure]** na barra de status ou pressione `Ctrl + Shift + P` (ou `Cmd + Shift + P` no macOS) para abrir a paleta de comandos.
   - Digite **CMake: Configure** e selecione essa opção.
   - O CMake irá configurar o projeto e gerar uma pasta `build` com os arquivos necessários para compilação.

> **Dica:** A pasta `build` criada pelo CMake armazenará os arquivos de configuração e outros arquivos temporários gerados durante a compilação.

## Passo 4: Compilar o Projeto

1. **Compilar com o CMake Tools**:
   - Na barra de status do CMake (na parte inferior do VSCode), clique em **[CMake: Build]** ou use o comando `Ctrl + Shift + P` (ou `Cmd + Shift + P` no macOS) para abrir a paleta de comandos e selecione **CMake: Build**.
   - O VSCode irá compilar o projeto e gerar um executável na pasta `build`.

> **Nota:** O nome do executável gerado será o mesmo definido no arquivo `CMakeLists.txt`. Nesse caso, será `meu_projeto`.

## Passo 5: Executar o Programa

1. **Abrir o Terminal Integrado**:
   - No VSCode, abra o terminal integrado com `Ctrl + `` (ou vá em **Terminal > New Terminal**).

2. **Executar o Executável**:
   - No terminal, navegue até a pasta `build`:
     ```bash
     cd build
     ```
   - Execute o programa:
     - No Linux/macOS:
       ```bash
       ./meu_projeto
       ```
     - No Windows:
       ```cmd
       .\meu_projeto.exe
       ```

E pronto! Agora seu programa deve estar em execução no terminal.


