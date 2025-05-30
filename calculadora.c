#include <stdio.h>
#include <stdlib.h>

int main() {
    float num1, num2, resultado;
    int operador;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segunfo numero: ");
    scanf("%f", &num2);

    printf("Selecione o primeiro operador:\n");
    printf("1 - Adicao\n");
    printf("2 - Subtacao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");

    scanf("%d", &operador);

    switch (operador)
    {
    case 1:
        resultado = num1 + num2;
        printf("Resultado = %.2f\n", resultado);
        break;
    case 2:
        resultado = num1 - num2;
        printf("Resultado = %.2f\n", resultado);
        break;
    case 3:
        resultado = num1 * num2;
        printf("Resultado = %.2f\n", resultado);
        break;
    case 4:
        resultado = num1 / num2;
        printf("Resultado = %.2f\n", resultado);
        break;
    
    default:
        printf("Operador invalido.\n");
        break;
    } 
    system("pause");
    return 0;
}
