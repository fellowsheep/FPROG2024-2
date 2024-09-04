# Configurando projetos em C/C++ no Visual Studio Code
## Um mini-tutorial

### Algumas considerações

- Este passo-a-passo foi feito utilizando Sistema Operacional Windows (10, 11), configuração da IDE C/C++ no Visual Studio Code (https://code.visualstudio.com/download) e utilizando o compilador MinGW, via MSys2 - https://www.msys2.org/).
  
- Uma alternativa a este passo-a-passo é o uso de um arquivo de Makefile, criado a partir do CMake ou similar. Aqui mostro como foi a experiência no meu setup, que é o mesmo que uso nos laboratórios da Unisinos.
  
- Quem quiser saber mais detalhes ou ver como instalar em Linux ou Mac, recomendo este link: https://code.visualstudio.com/docs/languages/cpp

## Adicionando suporte à linguagem C++ no Visual Studio Code

### Baixando a IDE VS Code e a extensão para C++

1 - Baixar o VS Code: https://code.visualstudio.com/download e instalar

2 - Baixar extensão C++: https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools e instalar (pode procurá-la de dentro do VS Code (menu View > Extensions) ou:

![image](https://github.com/user-attachments/assets/a1d9b776-9a41-4514-b360-b854c3f5ac6d)

### Baixando o compilador C++ - MinGW

3 - Escolher qual compilador C++ baixar: MSVC (Microsoft, o mesmo do Visual Studio) ou MinGW (open source). Em aula, estamos usando o MinGW.

 - Uma das maneiras de baixar o MinGW no Windows é usando um gerenciador de pacotes chamado MSys2:
   - Baixar e instalar o MSys2: https://github.com/msys2/msys2-installer/releases/download/2024-01-13/msys2-x86_64-20240113.exe
   - Provavelmente ao terminar de instalar, abrirá um terminal. Caso isso não aconteça, digite "msys" na barra de pesquisa do Windows e entre neste aplicativo:

   ![image](https://github.com/user-attachments/assets/9a9844d8-5200-4ac7-a27e-9bf68e653303)
   
   - No terminal do MSys2, digitar:
     
    `pacman -S --needed base-devel mingw-w64-ucrt-x86_64-toolchain`

   - Na primeira escolha que o terminal apresentar, apenas aperte `ENTER`, na segunda, digite `Y`. Vai levar uns minutinhos pra ele instalar tudo.

### Configurando a variável de ambiente no Sistema Operacional (Windows)

4 - Esse passo é necessário para que, de qualquer diretório, o sistema operacional encontre o executável do compilador. A forma mais simples de fazer isso (se você tiver permissão de administrador do sistema) é a seguinte:
 - Edite a variável de caminhos do sistema operacional (`PATH`), acrescentando o caminho onde ficaram os executáveis do compilador (provavelmente ficaram em `C:\msys64\ucrt64\bin` - ou onde você escolheu instalar)

![image](https://github.com/user-attachments/assets/645846a5-38e2-4a26-a307-a961afb80116)
![image](https://github.com/user-attachments/assets/89bc66d1-c269-45ac-9f5f-e528325a9e95)
![image](https://github.com/user-attachments/assets/25c305fa-239c-4119-afd3-20d8dbf318e6)

 - Se estiver em um computador que não tenha acesso de adm, adicionar temporariamente ao path com este comando (via terminal CMD): 

   `set PATH=%PATH%;C:\msys64\ucrt64\bin`

### Testando o VS com C
     
5 - Realizados estes passos, entre no Visual Studio Code, entre em uma pasta (ou crie uma), e crie o seguinte arquivo de código em C++:
```c
#include <stdio.h>  
int main()
{
    printf("Ola, Mundo!\n"); 
    return 0;  
}
```

6 - Depois disso, vá em Debug C/C++ File

![image](https://github.com/fellowsheep/FCG2024-1/assets/2465857/90da6ff2-653f-47e2-8800-15de70e8ef99)

- Na primeira vez, aparecerá para você selecionar qual o compilador C/C++ será usado. Se o programa estiver em C, escolha o `gcc.exe`. Se for em C++, escolha o `g++.exe`.

![image](https://github.com/user-attachments/assets/f39f97ea-0096-4f76-b7bc-48ac1616c83c)

- Selecionado o compilador, você vai ver um terminal `DEBUG CONSOLE` com várias mensagens (debug, compilação, linkagem...). Como o programa acima está correto, não deverá ocorrer erros. Ao final, troque para a aba do terminal `TERMINAL`. Nele, deverá aparecer a mensagem `Ola mundo!`.

![image](https://github.com/user-attachments/assets/1ff7f165-d729-4c82-bfe8-bbeaff94b8ac)

