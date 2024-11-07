#include <stdio.h>
#include <string.h>

const int MAX_STRING=30;

int main()
{
    char palavra[MAX_STRING]; //o string é, na verdade, um array de caracteres
   
    //Atribuição de um valor a uma variável string - usar função strcpy
    strcpy(palavra,"banana");

    //Imprimir o conteúdo de uma string
    printf("%s\n",palavra);

    //Leitura de uma variável string
    printf("Digite uma palavra: ");
    scanf("%s",&palavra);

    //Imprimir o conteúdo de uma string
    printf("%s\n",palavra);

    //Descobrir o tamanho da string
    int tam = strlen(palavra);

    printf("A palavra %s possui %d caracteres.\n",palavra,tam);

    //Percorrendo o array e contando a ocorrência de letras 'a'
    int cont = 0;
    for(int i=0; i< tam; i++)
    {
        if (palavra[i] == 'a')
        {
            cont++;
        } 
    }
    printf("Quantidade de letras \'a\'s: %d\n",cont);

    char senhaSalva[15], senhaDigitada[15];
    strcpy(senhaSalva,"12345ABC");
    printf("Digite sua senha: ");
    scanf("%s",&senhaDigitada);
    printf("%d\n",strcmp(senhaSalva,senhaDigitada));
    if (strcmp(senhaSalva,senhaDigitada)==0 ) //Atenção! Retorna ZERO quando são iguais!!
    {
        printf("Acertou a senha!\n");
    }
    else
    {
        printf("Errou a senha!\n");
    }

    return 0;
}