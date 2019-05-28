#include <stdio.h>
#include <stdlib.h>

//Definição da estrutura
typedef struct{
    char nome[80];
    char numero_matricula[80];
    char nome_curso[80];
} Aluno;

Aluno lerAluno(){
    Aluno temp;
    printf("Informe o nome do aluno, seu numero de matricula e o nome do curso:");
    gets(temp.nome);
    gets(temp.numero_matricula);
    gets(temp.nome_curso);
    return temp;
}

int main(){
    int i;
    Aluno alunos[5];
    for(i = 0; i < 5; i++){
        printf("Informe os dados do aluno %i", i);
        alunos[i] = lerAluno();
    }

    for(i = 0; i < 5; i++)
        printf("%s %s %s\n", alunos[i].nome, alunos[i].numero_matricula, alunos[i].nome_curso );
    return 0;
}
