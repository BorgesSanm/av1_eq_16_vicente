#include <stdio.h>
int main(void) {
    int numero, soma1=0, prod1=1, somatotal=0, prod2=1, soma2=0;
    int i=0;
    
    while (1) {
        
        printf("Digite um número:\n");
        scanf("%d", &numero);
        
        
        somatotal = somatotal+numero;
        i++;
        if (numero==99||numero==14||numero==0) {break;}
        if (numero>50&&numero<150) {soma1=soma1+numero;}
        if (numero!=10&&(numero>5&&numero<70)) {prod1=prod1*numero;}
        if (numero>20&&numero<30) {prod2=prod2*numero;}
        if (numero>16) {soma2=soma2+numero*numero;}
    }
    
    printf("A soma dos números lidos menores do que 150 e maiores do que 50 é %d\n", soma1);
    printf("Alternativa b: %d\n", prod1);
    printf("Alternativa c: %d\n", somatotal/i);
    printf("Alternativa d: %d\n", prod2);
    printf("Alternativa e: %d\n", soma2);
    
    return 0;
}

