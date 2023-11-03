#include <stdio.h>
int main(void) {
    int numero, soma=0, i=0;
    
    while(1) {
        printf("Digite um número: \n");
        scanf("%d", &numero);
        
        soma+=numero;
        i++;
        
        if (numero==0) {break;}
    }
    
    printf("A soma de todos os números lidos é:  %d\n", soma);
    printf("O total de números lidos é:  %d\n", i);
}

