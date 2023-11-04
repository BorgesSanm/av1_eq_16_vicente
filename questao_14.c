#include <stdio.h>

int main () {
	int numero;
	int menorNum = -1;
	int soma = 0;
	int prod = 1;

	do {
		printf("Digite os números (digite 0 para finalizar): ");
		scanf(" %d", &numero);

		if (numero != 0) {
			if (numero < menorNum || menorNum == -1) {
				menorNum = numero;
			} 
			if (numero > 10) {
				soma += numero;
			} 
			if (numero > 200) {
				prod *= numero;	
			}
		}
		
	} while (numero != 0);

	if (menorNum == -1) {
		printf("Nenhum número foi inserido.\n");
	} else {
		printf("Menor número: %d\n", menorNum);
		printf("A soma dos números maiores que 10: %d\n", soma);
        printf("O produto dos números maiores que 200: %d\n", prod);
	}
}