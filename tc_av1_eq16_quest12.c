#include <stdio.h>

int main () {
	int numeros;
	int somaPares = 0;
	int prodImpares = 1;
	int somaTotal = 0;
	
	do {
		printf("Digite os n�meros (digite 0 para finalizar): ");
		scanf(" %d", &numeros);

		somaTotal += numeros;

		if ((numeros/2)*2 == numeros) {
			printf("O n�mero � par.\n");
			somaPares += numeros;
		} else if ((numeros/2)*2 != numeros) {
			printf("O n�mero � �mpar.\n");
			prodImpares *= numeros;
		} 
	} while (numeros != 0);

	printf("A soma total �: %d\n", somaTotal);
	printf("A soma dos n�meros pares �: %d\n", somaPares);
	printf("O produto dos n�meros �mpares �: %d\n", prodImpares);
}
