#include <stdio.h>
int main(void) {
    int numero, soma=0, i=0;
    
    while(1) {
        printf("Digite um n�mero: \n");
        scanf("%d", &numero);
        
        soma+=numero;
        i++;
        
        if (numero==0) {break;}
    }
    
    printf("A soma de todos os n�meros lidos �:  %d\n", soma);
    printf("O total de n�meros lidos �:  %d\n", i);
}

