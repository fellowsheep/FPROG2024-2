#include <stdio.h>

int main()
{
    int cont = 0;
    while (cont < 5)
    {
        printf("Olá mundo! Cont = %d\n",cont);
        cont++;
    }

    printf("--------------------\n");
    cont = 1;
    while (cont <= 5)
    {
        printf("Olá mundo! Cont = %d\n",cont);
        cont++;
    }

    printf("--------------------\n");
    cont = 1;
    while (cont < 6)
    {
        printf("Olá mundo! Cont = %d\n",cont);
        cont++;
    }


    return 0;
}