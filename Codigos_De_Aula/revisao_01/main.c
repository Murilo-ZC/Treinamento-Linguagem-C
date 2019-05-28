#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arquivo;
    char entrada;

    arquivo = fopen("texto.grey", "w");

    if(arquivo == NULL){
        printf("Arquivo nao pode ser criado");
        exit(EXIT_FAILURE);
    }

    do{
        entrada = getchar();
        fprintf(arquivo, "%c", entrada);
    }while(entrada != '0');

    fclose(arquivo);
    return 0;
}
