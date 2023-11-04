#include <stdio.h>
#include <math.h>

int main () {
	int numero;
	double media = 0.0;
	int soma = 0;
	int contador = 1;
	double somaDosQuadrados = 0.0;
	double prodDosCubos = 1.0;

	do {
		printf("Digite os números (digite 0 para finalizar): ");
		scanf(" %d", &numero);

		if (numero > 200) {
			// cálculo média
			soma += numero;
			contador++;
			media = (double)soma/(contador - 1);

			// cálculo soma dos quadrados
			somaDosQuadrados += (double)(numero * numero);

			// cálculo produto dos cubos
			prodDosCubos *= (double)(numero * numero * numero);

			printf("Números maiores que 200: %d\n", numero++);
		}
		
	} while (numero != 0);

	printf("Média: %.1lf\n", media);
	printf("A soma dos quadrados: %.1lf\n", somaDosQuadrados);
    printf("O produto dos cubos: %.1lf\n", prodDosCubos);
}