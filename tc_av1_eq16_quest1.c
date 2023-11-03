#include <stdio.h>
#define T 10
int main(void) {
    int cat1=0, cat2=0, cat3=0, qtelidos=0;
    int numero;
    
    while (1) {
        printf("Digite um número:\n");
        scanf("%d", &numero);
        qtelidos++;
        
        if (numero==0) {
            break;
        }
        
        else if (numero>100) {
            cat1++;
        }
        
        else if (numero<10) {
            cat2++;
        }
        
        else if (numero==20||numero==30||numero==40) {
            cat3++;
        }
        
    }
    
    printf("A quantidade total de números lidos é: %d\n", qtelidos);
    printf("O total de números lidos maiores que 100: %d\n", cat1);
    printf("O total de números lidos menores que 10: %d\n", cat2);
    printf("O total de números lidos iguais a 20, 30 e 40: %d\n", cat3);

    return 0;
    
}

