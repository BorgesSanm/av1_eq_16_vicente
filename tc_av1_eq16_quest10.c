#include <stdio.h>

int main(){
    char nome[100];
    int matricula;
    float salario_bruto, salario_liquido, horas_trabalhadas, inss, sindical, planosaude;
    float folha_de_pagamento=0.0;
    float contribuicao=0.0;
    float valor_por_hora=35.0;
    float encargos=0.0;


    printf("-------------------------------------------\n");

    while(1){
        printf("Digite sua matricula (4 digitos apenas, digitando 0 para encerrar): \n");
        scanf("%d", &matricula);

        if(matricula==0){
            break;
        }

        printf("Digite seu nome: \n");
        scanf("%s", &nome);

        printf("Digite suas horas trabalhadas: \n");
        scanf("%f", &horas_trabalhadas);    

        salario_bruto= horas_trabalhadas * valor_por_hora;
        inss=salario_bruto * 0.085;
        sindical=salario_bruto * 0.0102;
        planosaude=salario_bruto * 0.06;

        float imposto= salario_bruto * 0.10;

        salario_liquido=salario_bruto - inss- sindical - planosaude;    
        folha_de_pagamento+= salario_liquido;
        contribuicao+= inss + sindical + planosaude;
        encargos+=imposto;

        printf("Matricula: %d\n", matricula);
        printf("Nome: %s\n", nome);
        printf("Salario bruto: R$ %.2f\n", salario_bruto);
        printf("Salario liquido: R$ %.2f\n", salario_liquido);
        printf("Inss: R$ %.2f\n", inss);
        printf("Contribuicao sindical: R$ %.2f\n", sindical);
        printf("Plano de saude: R$ %.2f\n", planosaude);
        printf("Imposto de renda: R$ %.2f\n", imposto);
        printf("------------------------------------------------------------\n");
    }
        float custo_geral= folha_de_pagamento + encargos;

        printf("Total da folha de pagamento: R$ %.2f\n", folha_de_pagamento);
        printf("Total de contribuicoes: R$ %.2f\n", contribuicao);
        printf("TotaL de encargos: R$ %.2f\n", encargos);
        printf("Custo total da folha de pagamento: R$ %.2f\n", custo_geral);
}