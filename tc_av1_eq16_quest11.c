#include <stdio.h>

int main () {
	int numero;
	
	do {
		printf("Digite o n�mero a ser analisado: ");
		scanf(" %d", &numero);

		if ((numero/2)*2 == numero) {
			printf("O n�mero � par.\n");
		} else if ((numero/2)*2 != numero) {
			printf("O n�mero � �mpar.\n");
		} 
	} while (numero != 0);
}
