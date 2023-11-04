#include <stdio.h>
#include <math.h>

int main() {
int nums[3], complexo=0, real=0, contsoma=0, contmult=0;
double delta, x1 , x2, soma, mult;
    
printf("Digite 3 números que vao ser a 'a, b, c' em ordem (Digite 0 para finalizar)\n");

for(int i=0; i<3; i++){
    scanf("%d", &nums[i]);
    if (nums[i]== 0){
    break;
}
}

int a= nums[0];
int b= nums[1];
int c= nums[2];


   delta= b*b - 4 *a*c;

    printf("delta e: %lf\n", delta);



if(delta>0){
    x1=(-b + sqrt(delta)) / (2*a);
    x2=(-b - sqrt(delta)) / (2*a);
    
    printf("as raizes sao: %lf %lf\n", x1, x2);
    
    if(x1<0){
        printf("x1 e uma raiz complexa: %f\n", x1); 
        complexo++;
    }
    
        
    if(x2<0){
        printf("x2 e uma raiz complexa: %f\n", x2); 
        complexo++;
    }
    
    if(x1>0){
        printf("x1 e uma raiz real: %f\n", x1); 
        real++;
    }
    
        
    if(x2>0){
        printf("x2 e uma raiz real: %f\n", x2); 
        real++;
    }

    if(x1<2){
        contmult++;
    }
    
    if(x2<2){
        contmult++;
    }

    if(x1>5 && x1<10){
        contsoma++;
    }
    
    if(x2>5 && x2<10){
        contsoma++;
    }

    if(x1<=2 && x2<=2){
        mult= x1 * x2;
        printf("a multiplic. de x1 e x2 deu: %lf\n", mult);
    }
    if(x1>5 && x1<10 || x2>5 && x2<10){
        soma= x1 + x2;
        printf("a soma de  x1 e x2 deu: %lf\n", soma); 
    }
    
    printf("raizes maior que 5 e menor que 10: %d\n", contsoma);
    printf("raizes menor que 2: %d\n", contmult);
    printf("raizes reais: %d\n", real);
    printf("raizes complexas: %d\n", complexo);
    
    if(x1<=2 && x2<=2){
        mult= x1 * x2;
        printf("a multiplic. de x1 e x2 deu: %lf\n", mult);
    }
    
    }else if(delta<0){
        printf("Raízes nulas\n");
        return 0;
        
    } 
    return 0;
}
