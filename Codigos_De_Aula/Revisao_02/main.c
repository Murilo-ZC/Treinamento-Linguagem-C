#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arquivo;
    char linha[80];
    int conta_linha;
    arquivo = fopen("../revisao_01/texto.grey", "r");

    if(arquivo == NULL){
        printf("Arquivo nao existe");
        exit(EXIT_FAILURE);
    }

    conta_linha = 0;

    while(fgets(linha, 80, arquivo) != NULL){
        conta_linha++;
    }
    printf("%i", conta_linha);
    return 0;
}






