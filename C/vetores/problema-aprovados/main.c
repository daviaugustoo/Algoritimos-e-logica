#include <stdio.h>
#include <stdlib.h>

int main()
{
    int alunos;
    printf("Quantos alunos serao digitados? ");
    scanf("%i", &alunos);

    char nome[alunos][50];
    float nota1[alunos], nota2[alunos], notaFinal[alunos];
    for(int i = 0; i < alunos; i++){
        printf("Digite o nome do aluno, primeira e segunda nota do %i aluno\n", i+1);
        getchar();
        fgets(nome[i], 50, stdin); // Ler uma string com espaços
        scanf("%f", &nota1[i]);
        scanf("%f", &nota2[i]);
        notaFinal[i] = nota1[i] + nota2[i];
    }
    printf("Alunos aprovados: \n");
    for(int i = 0; i < alunos; i++){
        if(notaFinal[i] >= 6.0){
            printf("%s\n", nome[i]);
        }
    }
    return 0;

}
