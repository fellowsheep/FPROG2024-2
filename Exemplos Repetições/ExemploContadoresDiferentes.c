#include <stdio.h>

int main()
{
    printf("--------WHILE-----------\n");
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
    //----------------------------------------------
    printf("---------FOR----------\n");
    for (cont = -10; cont <=10; cont++)
    {
        printf("Olá mundo! Cont = %d\n",cont);
    }
    printf("-------------------\n");
    for (cont=0; cont <=10; cont+=2)//cont=cont+2
    {
        printf("Olá mundo! Cont = %d\n",cont);
    }
    printf("-------------------\n");
    for (cont = 10; cont >=0; cont--)
    {
        printf("Olá mundo! Cont = %d\n",cont);
    }

    return 0;
}