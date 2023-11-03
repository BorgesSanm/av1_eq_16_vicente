#include <stdio.h>

int main(void)
{
    int numero1, div1, td1, iC = 0;

    while (1) {
        printf("Digite um número:\n");
        scanf("%d", &numero1);
        if (numero1 == 0) {
            break;
        }

        if (numero1 < 2) {
            printf("Não é primo!\n");
        } else {
            td1 = 0;
            for (div1 = 2; div1 * div1 <= numero1; div1++) {
                if (numero1 - (numero1 / div1 * div1) == 0) {
                    td1++;
                    break;
                }
            }

            if (td1 == 0) {
                printf("É primo!\n");
                iC++;
            } else {
                printf("Não é primo!\n");
            }
        }
    }

    printf("\nA quantidade de números primos lidos: %d\n", iC);
    return 0;
}


