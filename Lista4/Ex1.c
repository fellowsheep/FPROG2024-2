#include <stdio.h>
#include <stdlib.h> // rand()
#include <time.h> //time()

int main()
{
    srand(time(0)); //Usando a hora do sistema como semente para geração aleatória
    //1 e)
    int cont = 0;
    int n; //nro que vai ser lido
    int soma = 0; //inicialização do acumulador
    float media;
    int max = 1 + rand() % 15; //Sorteia um nro de 1 a 15
    printf("Quantidade de nros a serem lidos/gerados = %d\n",max);
    while (cont < max)
    {
        //Ler o nro do usuário
        //printf("Digite um nro: ");
        //scanf("%d",&n);

        //Ideia 2: Sortear ao invés de ler
        n = rand() % 11; //Sorteia um nro de 0 a 10
        printf("Nro sorteado = %d\n",n);

        soma = soma + n;

        cont++;
    }

    printf("Soma é %d\n", soma);

    //media = soma / 5.0;
    media = soma / (float) max;

    printf("A média é %.2f\n", media);

    return 0;
}

