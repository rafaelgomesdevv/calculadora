#include <stdio.h>

// Fun��es para opera��es matem�ticas
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
        printf("Erro! Divis�o por zero.\n");
        return 0;
    }
}

int main() {
    int escolha;
    float num1, num2;

    while(1) {
        // Exibindo o menu de opera��es
        printf("\n--- Calculadora ---\n");
        printf("Escolha a opera��o que deseja realizar:\n");
        printf("1. Soma\n");
        printf("2. Subtra��o\n");
        printf("3. Multiplica��o\n");
        printf("4. Divis�o\n");
        printf("5. Sair\n");
        printf("Digite a op��o desejada: ");
        scanf("%d", &escolha);

        // Se a op��o for 5, sai do programa
        if (escolha == 5) {
            printf("Saindo da calculadora...\n");
            break;
        }

        // Solicita os n�meros ao usu�rio
        printf("Digite o primeiro n�mero: ");
        scanf("%f", &num1);
        printf("Digite o segundo n�mero: ");
        scanf("%f", &num2);

        // Realiza a opera��o escolhida
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
                printf("Op��o inv�lida!\n");
        }
    }

    return 0;
}

