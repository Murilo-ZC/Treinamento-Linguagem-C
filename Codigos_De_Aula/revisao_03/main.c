#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arquivo;
    char nome[80];
    arquivo = fopen("dados.txt", "r");

    if(arquivo == NULL){
        arquivo = fopen("dados.txt", "w");
        printf("Digite seu nick:");
        gets(nome);
        fprintf(arquivo,"%s", nome);
    } else {
        while(fgets(nome,80, arquivo) != NULL){
            printf("Bem vindo: %s", nome);
        }
    }
    fclose(arquivo);
    return 0;
}
