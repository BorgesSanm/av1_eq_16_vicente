#include <stdio.h>

int main () {
	int numero;
	
	do {
		printf("Digite o número a ser analisado: ");
		scanf(" %d", &numero);

		if ((numero/2)*2 == numero) {
			printf("O número é par.\n");
		} else if ((numero/2)*2 != numero) {
			printf("O número é ímpar.\n");
		} 
	} while (numero != 0);
}
