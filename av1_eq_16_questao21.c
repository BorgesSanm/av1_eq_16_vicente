 #include <stdio.h>
#include <stdlib.h>

int main() {
    int numeros[100]; // Defina o tamanho máximo da sequência
    int tamanho = 0;
    int numero;

    // Leitura da sequência de números
    printf("Digite uma sequência de números (0 para sair):\n");
    while (1) {
        scanf("%d", &numero);
        if (numero == 0) {
            break; // Sai do loop se o número for 0
        }
        numeros[tamanho] = numero;
        tamanho++;
    }

    // Ordenando os números em ordem crescente
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (numeros[j] > numeros[j + 1]) {
                int temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
    }

    // Imprimindo em ordem crescente
    printf("Números em ordem crescente: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", numeros[i]);
    }

    // Ordenando os números em ordem decrescente
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (numeros[j] < numeros[j + 1]) {
                int temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
    }

    // Imprimindo em ordem decrescente
    printf("\nNúmeros em ordem decrescente: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", numeros[i]);
    }

    return 0;
}
