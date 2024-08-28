#include <stdio.h>

int main() {
    int num1, num2, sum;

    // Lê dois números inteiros
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    // Calcula a soma
    sum = num1 + num2;

    // Exibe o resultado
    printf("A soma é: %d\n", sum);

    return 0;
}
