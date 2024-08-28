# Configurando projetos em C++ com OpenGL no Visual Studio Code
## Um mini-tutorial

### Algumas considerações
- Este passo-a-passo foi feito utilizando Sistema Operacional Windows (10, 11), configuração da IDE C++ no Visual Studio Code(https://code.visualstudio.com/download) e utilizando o compilador MinGW, via MSys2 - https://www.msys2.org/).
- Uma alternativa a este passo-a-passo é o uso de um arquivo de Makefile, criado a partir do CMake ou similar. Aqui mostro como foi a experiência no meu setup.

## Adicionando suporte à linguagem C++ no Visual Studio Code

1 - Baixar o VS Code: https://code.visualstudio.com/download

2 - Baixar extensão C++: https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools

3 - Escolher qual compilador C++ baixar: MSVC (Microsoft, o mesmo do Visual Studio) ou MinGW (open source): https://code.visualstudio.com/docs/languages/cpp

 - Se estiver usando o Windows e escolher o MinGW:
   - Baixar e instalar o MSys2: https://github.com/msys2/msys2-installer/releases/download/2024-01-13/msys2-x86_64-20240113.exe 
   - No terminal do MSys2, digitar:
     
    `pacman -S --needed base-devel mingw-w64-ucrt-x86_64-toolchain`


4 - Se estiver em um computador que não tenha acesso de adm, adicionar temporariamente ao path com este comando (via terminal CMD): 

   `set PATH=%PATH%;C:\msys64\ucrt64\bin` 
     
5 - Realizados estes passos, entre no Visual Studio Code, entre em uma pasta (ou crie uma), e crie o seguinte arquivo de código em C++:
```cpp
#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    cout << "Teste" << endl;
    return 0;
}
```

6 - Depois disso, vá em Debug C/C++ File

![image](https://github.com/fellowsheep/FCG2024-1/assets/2465857/90da6ff2-653f-47e2-8800-15de70e8ef99)

No terminal que aparecer, deverá aparecer a mensagem `Teste`.

![image](https://github.com/fellowsheep/FCG2024-1/assets/2465857/0dcbc3cc-4545-4b5a-8416-c9b9bcec442e)


## Configurando um projeto com OpenGL, GLAD e GLFW

Para começar, acho importante explicar o que são arquivos de cabeçalhos, bibliotecas estáticas e bibliotecas dinâmicas.

1 - *Arquivos de cabeçalho (.h):* os arquivos de cabeçalho são arquivos de texto que contêm declarações de funções, variáveis, estruturas de dados e outras informações necessárias para utilizar uma biblioteca ou conjunto de funções. Eles geralmente acompanham bibliotecas e são incluídos nos programas para fornecer informações sobre como usar as funcionalidades contidas na biblioteca correspondente. Os arquivos de cabeçalho são incluídos nos programas com a diretiva #include no início do código-fonte.

2 - *Bibliotecas estáticas (.lib, .a):* as bibliotecas estáticas são conjuntos de código compilado e pré-linkado que contêm funções, classes e outros recursos que podem ser utilizados por programas. Elas são chamadas de "estáticas" porque o código contido nelas é copiado diretamente para o executável final do programa durante a fase de ligação. As extensões de arquivos comuns para bibliotecas estáticas são .lib no Windows e .a em sistemas Unix-like.

3 - *Bibliotecas dinâmicas:* as bibliotecas dinâmicas, também conhecidas como bibliotecas compartilhadas ou DLLs (Dynamic Link Libraries) no Windows, são arquivos que contêm código compilado e pré-linkado que podem ser carregados e utilizados por programas em tempo de execução. Ao contrário das bibliotecas estáticas, o código contido em bibliotecas dinâmicas não é copiado diretamente para o executável do programa. Em vez disso, o executável faz referência aos símbolos contidos na biblioteca e o sistema operacional carrega a biblioteca em memória quando o programa é executado. Isso permite que várias aplicações compartilhem a mesma biblioteca em memória, reduzindo o consumo de memória total do sistema e facilitando a atualização e manutenção de bibliotecas compartilhadas. As bibliotecas dinâmicas são amplamente utilizadas em sistemas Unix-like, onde têm extensões de arquivo como .so (Shared Object), e no Windows, onde têm extensões .dll.

Tendo isso em vista, precisamos especificar em um arquivo de configuração, o `tasks.jason`, onde ficam os diretórios com essas bibliotecas, e no caso de bibliotecas estáticas, mencionar o nome da mesma.

Aqui está como ficou o meu .json depois de configurado o projeto Hello Triangle:

```json
{
    "tasks": [
        {
            "type": "cppbuild",
            "label": "C/C++: g++.exe build active file",
            "command": "C:\\msys64\\ucrt64\\bin\\g++.exe",
            "args": [
                "-fdiagnostics-color=always",
                "-g",
                // Aqui você inclui os caminhos para os diretórios que contém os cabeçalhos das funções
                "-I${workspaceFolder}/../Dependencies/GLAD/include", //GLAD
                "-I${workspaceFolder}/../Dependencies/glfw-3.4.bin.WIN64/include", //GLFW
                "${file}",
                // Aqui você inclui o caminho para os outros arquivos .c ou .cpp
                "${workspaceFolder}/glad.c",  //GLAD
                "-o",
                "${fileDirname}\\${fileBasenameNoExtension}.exe",
                // Aqui você inclui o caminho para os diretórios que possuem as bibliotecas estáticas
                "-L${workspaceFolder}/../Dependencies/glfw-3.4.bin.WIN64/lib-mingw-w64",
                // Aqui você inclui o nome das biblioteca estáticas (.lib ou .a), com -l na frente
                "-lglfw3dll"
            ],
            "options": {
                "cwd": "C:\\msys64\\ucrt64\\bin"
            },
            "problemMatcher": [
                "$gcc"
            ],
            "group": {
                "kind": "build",
                "isDefault": true
            },
            "detail": "Task generated by Debugger."
        }
    ],
    "version": "2.0.0"
}
```
Como você pode ver, no campo `"args"`, precisamos colocar o caminho dos arquivos de cabeçalho das bibliotecas GLAD (https://glad.dav1d.de/) e GLFW (https://www.glfw.org/download.html). No caso da GLAD, que é uma biblioteca só de cabeçalho, você precisa também colocar o caminho onde o arquivo `glad.c` fica. Neste projeto, deixei ele no próprio diretório do projeto, junto com o `Source.cpp`. Recomenda-se, a medida que os projetos aumentarem, criar uma pasta `src` contendo os arquivos c/cpp e `include` contendo os arquivos .h, .hpp de sua implementação. Além disso, a GLFW possui a biblioteca estática. Precisamos colocar o caminho do diretório onde ela está e também precisamos colocar o nome dela (que no caso é libglfw3dll.a), tirando o 'lib' e colocando '-l'. Como você pode ver, ficou `-lglfw3dll`. A GLFW ainda possui a biblioteca dinâmica glfw.dll, que você deve colocar no diretório.

Para o Visual Studio Code ainda encontrar os locais dos cabeçalhos das bibliotecas na hora de fazer o highlight no editor, ainda recomendo editar um arquivo chamado `c_cpp_properties.json`, que no projeto ficou assim:

```json
{
    "configurations": [
        {
            "name": "Win32",
            "includePath": [
                "${workspaceFolder}/**",
                // Aqui você inclui os caminhos para os diretórios que contém os cabeçalhos das funções
                "${workspaceFolder}/../Dependencies/GLAD/include",
                "${workspaceFolder}/../Dependencies/glfw-3.4.bin.WIN64/include"
            ],
            "defines": [
                "_DEBUG",
                "UNICODE",
                "_UNICODE"
            ],
            "compilerPath": "C:\\msys64\\ucrt64\\bin\\g++.exe",
            "cStandard": "c17",
            "cppStandard": "c++17",
            "intelliSenseMode": "gcc-x64"
        }
    ],
    "version": 4
}
```

A execução correta do projeto HelloTriangle deve resultar na seguinte janela: 
![image](https://github.com/user-attachments/assets/7d96677b-e695-489f-a66a-b4982ba2ce86)

