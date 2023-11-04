#include <stdio.h>
#include <math.h>

int main() {
  float a, b, c, delta, x, x1, x2, xigual;
  int raizesnaoreais=0;
  float somadasraizesiguais=0.0;

while(1) {    
  printf("Digite a: \n");
  scanf("%f", &a);

  printf("Digite b: \n");
  scanf("%f", &b);

  printf("Digite c: \n");
  scanf("%f", &c);

if(a==0 && b==0 && c==0){
      printf("programa encerrado\n");
      break;
  }

    delta= b*b - 4*a*c;

    if(delta<0){
      printf("Não possui raízes reais\n");
      raizesnaoreais++;
  } else if(delta==0){
      x1= -b / (2*a);
      printf("Uma raiz real: x= %.2f\n", x1);
      if(x1 == x1){
        somadasraizesiguais = x1 + x1;
        printf("Soma das raízes iguais: %.2f\n", somadasraizesiguais);
        }
  } else if(delta>0){

    x1=(-b +sqrt(delta)) / (2*a);
    x2=(-b -sqrt(delta)) / (2*a);
    printf("Duas raizes reais: x1= %.2f e x2=%.2f\n", x1, x2);

    if(x1 == x2){
        somadasraizesiguais = x1 + x2;
        printf("Soma das raízes iguais: %.2f\n", somadasraizesiguais);
        }
    }
}


    printf("Quantidade de raízes não reais(complexas): %d\n", raizesnaoreais);

    return 0;  
}
