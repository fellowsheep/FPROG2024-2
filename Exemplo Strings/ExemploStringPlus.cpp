#include <iostream>
#include <string>

using namespace std;

int main()
{
    string palavra;

    //Atribuição
    palavra = "banana";

    //Pegar o tamanho
    int tam = palavra.size();

    //Leitura
    string palavra2; 
    cin >> palavra2;

    //Comparação
    if (palavra == palavra2)
    {
        cout << "São iguais!" << endl;
    }
    else
    {
        cout << "São diferentes!" << endl;
    }

    return 0;
}
