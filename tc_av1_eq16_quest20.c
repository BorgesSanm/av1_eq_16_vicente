#include <stdio.h>
#define TAM 50
int main(void) {
    int array[TAM], i=0, j=0;
    
    while (i<TAM) {
        printf("Digite um número para colocar na sequência (ou 0 para finalizar)\n");
        scanf("%d", &array[i]);
        if (array[i] == 0) {break;}
        i++;
    }

    while (i>=0) {
        if (array[i]!=0) {
            printf("%d ", array[i]);
        }
        
        i--;
    }

    return 0;
    
}



