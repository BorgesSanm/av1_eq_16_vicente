#include <stdio.h>

int main(void) {
    
    int numero, ordem=1;
    int produto=1, somadosquadrados=0;
    
    printf("Digite os n�meros: \n");
    
    do{
     printf("N�mero %d: ", ordem);
     scanf("%d", &numero);
    
    
    if(numero!=0){
    produto*=numero;
    somadosquadrados += numero * numero;
    ordem++;
    }
    } while (numero!=0);
    
    printf("O produto dos n�meros de acordo com sua ordem de digita��o: %d \n", produto);
    printf("a soma dos quadrados: %d\n", somadosquadrados);
    
    return 0;
}
