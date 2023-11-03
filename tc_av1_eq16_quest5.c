#include <stdio.h>
int main(void) {
    int soma=0, produto=1, numero, produto2=1;
    while(1) {
        printf("Digite um número:\n");
        scanf("%d", &numero);
        if (numero!=0) {produto2=produto2*numero;}
        if (numero==0) {break;}
        else if(numero>2&&numero<100) {
            
            if (numero!=10&&numero!=20&&numero!=32) {
                        soma = soma + numero;
                        produto = produto*numero;
            }
        }
        printf("A soma de x lido tal que 2<x<100: %d\n", soma);
        printf("O produto de x lido tal que 2<x<100: %d\n", produto);
    }
    printf("O produto de todos os x lidos: %d", produto2);
    
    return 0;
}

