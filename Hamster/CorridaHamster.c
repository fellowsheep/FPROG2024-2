#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h> //para usar o tipo booleano (bool)

int main()
{
    srand(time(0));
    int posHamster1=0, posHamster2=0;
    bool acabou = false; //no inicio ainda n"ao acabou a corrida
    while(acabou == false) //!acabou é igual a acabou == false
    {
        //Movimentação do Hamster 1
        int n = rand() % 5 + 1; //sorteia um valor entre 1 e 5
        if (n == 1)
        {
            posHamster1++; //avança 1 posição
        }
        else if (n == 2)
        {   
            posHamster1 = posHamster1 + 2; //posHamster1 += 2;
        }
        else if (n == 3)
        {
            // Nao faz nada nem precisa ter;
        }
        else if (n == 4)
        {
            posHamster1--; //diminui 1
        }
        else if (n == 5)
        {
            posHamster1 -= 2;
        }
        //Teste para evitar posições negativas
        if (posHamster1 < 0)
        {
            posHamster1 = 0;
        }
        //Testa se chegou no fim 
        if (posHamster1 >= 12)
        {
            acabou = true;
        }

        printf("H1 = %d\n",posHamster1);
        //

    }
    printf("Terminou!\n");

    return 0;
}
