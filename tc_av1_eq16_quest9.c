#include <stdio.h>

int main() {
    char nome[50];
    int matricula;
    float nota1, nota2, nota3;
    float mediaaluno, mediaturma = 0;
    int numalunos = 0;
    float mediaGlobal = 0;

    printf("Digite o nome do aluno (ou 'fim' para encerrar): ");
    scanf("%s", nome);

    while (strcmp(nome, "fim") != 0) {
        printf("Digite a matr�cula do aluno: ");
        scanf("%d", &matricula);

        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);

        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);

        printf("Digite a terceira nota: ");
        scanf("%f", &nota3);

        mediaaluno = (nota1 + nota2 + nota3) / 3.0;
        mediaturma += mediaaluno;
        numalunos++;

        printf("Aluno: %s\n", nome);
        printf("Matr�cula: %d\n", matricula);
        printf("Notas: %.2f, %.2f, %.2f\n", nota1, nota2, nota3);
        printf("M�dia: %.2f\n", mediaaluno);
        if (mediaaluno >= 7.0) {
            printf("Situa��o: Aprovado\n");
        } else {
            printf("Situa��o: Reprovado\n");
        }

        printf("\nDigite o nome do pr�ximo aluno (ou 'fim' para encerrar): ");
        scanf("%s", nome);
    }

    if (numalunos > 0) {
        mediaGlobal = mediaturma / numalunos;
        printf("\nM�dia de notas da turma: %.2f\n", mediaGlobal);
    } else {
        printf("Nenhum aluno inserido.\n");
    }

    return 0;
}
