#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *arquivo = fopen("arq.txt", "r");
    int conta = 0;
    char linha[80];

    if(arquivo == NULL){
        printf("Falha ao abrir o arquivo");
        exit(EXIT_FAILURE);
    }
    

    while(fgets(linha, 80, arquivo) != NULL){
        conta++;
    }

    printf("Total de linhas: %i\n", conta);
    fclose(arquivo);
    return 0;
}