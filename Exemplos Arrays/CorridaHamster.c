#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h> //para usar o tipo booleano (bool)

const int NB_HAMSTERS = 30; //constante que armazena o número de hamsters na corrida

int main()
{
    srand(time(0));
    int posHamsters[NB_HAMSTERS];

    for (int i=0; i < NB_HAMSTERS; i++)
    {
        posHamsters[i] = 0;
    }

    bool acabou = false;    // no inicio ainda n"ao acabou a corrida
    while (acabou == false) //! acabou é igual a acabou == false
    {
        // Limpa a tela - Só usar se for rodar em terminal FORA do VIsual Studio
        //#ifdef _WIN32
        //system("cls"); // Windows
        //#else
        //system("clear"); // Linux/macOS
        //#endif

        // Movimentação dos hamsters
        for (int i = 0; i < NB_HAMSTERS; i++) //percorre o array das posições dos hamsters
        {
            int n = rand() % 5 + 1; // sorteia um valor entre 1 e 5
            if (n == 1)
            {
                posHamsters[i]++; // avança 1 posição
            }
            else if (n == 2)
            {
                posHamsters[i] = posHamsters[i] + 2; // posHamster1 += 2;
            }
            else if (n == 3)
            {
                // Nao faz nada nem precisa ter;
            }
            else if (n == 4)
            {
                posHamsters[i]--; // diminui 1
            }
            else if (n == 5)
            {
                posHamsters[i] -= 2;
            }
            // Teste para evitar posições negativas
            if (posHamsters[i] < 0)
            {
                posHamsters[i] = 0;
            }
            // Testa se chegou no fim
            if (posHamsters[i] >= 12)
            {
                acabou = true;
            }
        }

        //Desenhar o caminho dos hamsters
        for (int i=0; i<NB_HAMSTERS; i++) //percorre o array das posições dos hamsters
        {
            printf("Hamster %d: ", i+1);
            for(int j=0; j < posHamsters[i]; j++) //repete o número de vezes correspondente à posição dos hamsters
            {
                printf("* ");
            }
            printf("\n");
        }
        getchar();
    }
    printf("Terminou!\n");
    //Desafio: como descobrimos o vencedor? Como descobrimos se houve empate?

    return 0;
}
