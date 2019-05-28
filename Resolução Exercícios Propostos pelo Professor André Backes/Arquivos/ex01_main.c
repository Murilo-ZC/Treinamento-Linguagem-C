#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *arquivo = fopen("arq.txt", "w");
    char letra;
    if (arquivo == NULL){
        printf("Não foi possível abrir o arquivo");
        exit(EXIT_FAILURE);
    }

    do{

        letra = getchar();
        fprintf(arquivo, "%c", letra);

    }while(letra != '0');
    fclose(arquivo);
    return 0;
}