#include <iostream>

int main() {
    int num1, num2, sum;

    // Lê dois números inteiros
    std::cout << "Digite o primeiro número: ";
    std::cin >> num1;
    std::cout << "Digite o segundo número: ";
    std::cin >> num2;

    // Calcula a soma
    sum = num1 + num2;

    // Exibe o resultado
    std::cout << "A soma é: " << sum << std::endl;;

    return 0;
}
