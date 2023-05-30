#include <stdio.h>

int main()
{
    int i, n = 0;
    float num1, num2, soma, multi, divi, subtra;
    float resultados[5];

    do {
        printf("CALCULADORA\n");
        printf("Selecione a opcao de acordo com a operacao (entre dois numeros) que deseja realizar:\n");
        printf("Soma (1)\n");
        printf("Subtracao (2)\n");
        printf("Multiplicacao (3)\n");
        printf("Divisao (4)\n");
        printf("Sair do programa (5)\n");
        scanf("%d", &i);

        switch (i) {
            case 1:
                printf("Digite um número:\n");
                scanf("%f", &num1);
                printf("Digite outro número:\n");
                scanf("%f", &num2);
                soma = num1 + num2;

                if (n == 5) {
                    n = 0;
                }
                resultados[n] = soma;
                n++;

                printf("A soma e: %f\n", soma);
                printf("Sair (5)  Continuar (0):\n");
                scanf("%d", &i);
                break;

            case 2:
                printf("Digite um número:\n");
                scanf("%f", &num1);
                printf("Digite outro número:\n");
                scanf("%f", &num2);
                subtra = num1 - num2;

                if (n == 5) {
                    n = 0;
                }
                resultados[n] = subtra;
                n++;

                printf("A subtracao e: %f\n", subtra);
                printf("Sair (5)  Continuar (0):\n");
                scanf("%d", &i);
                break;

            case 3:
                printf("Digite um número:\n");
                scanf("%f", &num1);
                printf("Digite outro número:\n");
                scanf("%f", &num2);
                multi = num1 * num2;

                if (n == 5) {
                    n = 0;
                }
                resultados[n] = multi;
                n++;

                printf("A multiplicacao e: %f\n", multi);
                printf("Sair (5)  Continuar (0):\n");
                scanf("%d", &i);
                break;

            case 4:
                printf("Digite um número:\n");
                scanf("%f", &num1);
                printf("Digite outro número:\n");
                scanf("%f", &num2);
                divi = num1 / num2;

                if (n == 5) {
                    n = 0;
                }
                resultados[n] = divi;
                n++;

                printf("A divisao e: %f\n", divi);
                printf("Sair (5)  Continuar (0):\n");
                scanf("%d", &i);
                break;
        }
    } while (i < 5);

    printf("Últimas 5 operações realizadas:\n");
    int start_index = (n >= 5) ? n - 5 : 0;
    for (int a = start_index; a < n; a++) {
        printf("%d. %f\n", a + 1, resultados[a]);
    }

    return 0;
}
