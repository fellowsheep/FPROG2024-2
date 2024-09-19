#include <stdio.h>

int main()
{
    int cont = -10;
    while (cont <= 10)
    {
        printf("Olá mundo! Cont = %d\n",cont);
        cont++;
    }

    printf("-------------------\n");
    cont = 0;
    while (cont <= 10)
    {
        printf("Olá mundo! Cont = %d\n",cont);
        cont = cont + 2; //cont += 2;
    }
    printf("-------------------\n");
    cont = 10;
    while (cont >= 0)
    {
        printf("Olá mundo! Cont = %d\n",cont);
        cont--; 
    }


    return 0;
}