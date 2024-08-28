import java.util.Scanner;

public class SomaNumeros {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Lê dois números inteiros
        System.out.print("Digite o primeiro número: ");
        int num1 = scanner.nextInt();
        System.out.print("Digite o segundo número: ");
        int num2 = scanner.nextInt();

        // Calcula a soma
        int sum = num1 + num2;

        // Exibe o resultado
        System.out.println("A soma é: " + sum);
    }
}
