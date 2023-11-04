#include <stdio.h>

int main () {
	int numero;
	int maiorNum = 0;

	do {
		printf("Digite os números (digite 0 para finalizar): ");
		scanf(" %d", &numero);

		if (numero > maiorNum) {
			maiorNum = numero;
		}
	} while (numero != 0);
	printf("Maior número: %d\n", maiorNum);
}
