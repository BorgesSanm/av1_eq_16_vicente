#include <stdio.h>

int main () {
	int numero;
	int maiorNum = 0;

	do {
		printf("Digite os n�meros (digite 0 para finalizar): ");
		scanf(" %d", &numero);

		if (numero > maiorNum) {
			maiorNum = numero;
		}
	} while (numero != 0);
	printf("Maior n�mero: %d\n", maiorNum);
}
