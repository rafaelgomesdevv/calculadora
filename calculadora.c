#include <stdio.h>

// Funções para operações matemáticas
float somar(float num1, float num2) {
    return num1 + num2;
}

float subtrair(float num1, float num2) {
    return num1 - num2;
}

float multiplicar(float num1, float num2) {
    return num1 * num2;
}

float dividir(float num1, float num2) {
    if (num2 != 0) {
        return num1 / num2;
    } else {
        printf("Erro! Divisão por zero.\n");
        return 0;
    }
}

int main() {
    int escolha;
    float num1, num2;

    while(1) {
        // Exibindo o menu de operações
        printf("\n--- Calculadora ---\n");
        printf("Escolha a operação que deseja realizar:\n");
        printf("1. Soma\n");
        printf("2. Subtração\n");
        printf("3. Multiplicação\n");
        printf("4. Divisão\n");
        printf("5. Sair\n");
        printf("Digite a opção desejada: ");
        scanf("%d", &escolha);

        // Se a opção for 5, sai do programa
        if (escolha == 5) {
            printf("Saindo da calculadora...\n");
            break;
        }

        // Solicita os números ao usuário
        printf("Digite o primeiro número: ");
        scanf("%f", &num1);
        printf("Digite o segundo número: ");
        scanf("%f", &num2);

        // Realiza a operação escolhida
        switch(escolha) {
            case 1:
                printf("Resultado: %.2f + %.2f = %.2f\n", num1, num2, somar(num1, num2));
                break;
            case 2:
                printf("Resultado: %.2f - %.2f = %.2f\n", num1, num2, subtrair(num1, num2));
                break;
            case 3:
                printf("Resultado: %.2f * %.2f = %.2f\n", num1, num2, multiplicar(num1, num2));
                break;
            case 4:
                printf("Resultado: %.2f / %.2f = %.2f\n", num1, num2, dividir(num1, num2));
                break;
            default:
                printf("Opção inválida!\n");
        }
    }

    return 0;
}

