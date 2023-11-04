#include <stdio.h>

int main () {
	int numeros;
	int somaPares = 0;
	int prodImpares = 1;
	int somaTotal = 0;
	
	do {
		printf("Digite os números (digite 0 para finalizar): ");
		scanf(" %d", &numeros);

		somaTotal += numeros;

		if ((numeros/2)*2 == numeros) {
			printf("O número é par.\n");
			somaPares += numeros;
		} else if ((numeros/2)*2 != numeros) {
			printf("O número é ímpar.\n");
			prodImpares *= numeros;
		} 
	} while (numeros != 0);

	printf("A soma total é: %d\n", somaTotal);
	printf("A soma dos números pares é: %d\n", somaPares);
	printf("O produto dos números ímpares é: %d\n", prodImpares);
}
