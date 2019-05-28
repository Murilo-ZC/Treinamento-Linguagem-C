#include <stdio.h>
#include <stdlib.h>
#include<string.h>

typedef struct{
    char nome[80];
    float preco;
} Produto;

const char *NOME_ARQUIVO = "banco.csv";

Produto lerProduto(char s[]);
int procurarProduto(char nome[], Produto *p);

int main()
{
    Produto teste;
    if(procurarProduto("KY", &teste))
        printf("%s %f", teste.nome, teste.preco);
    return 0;
}

Produto lerProduto(char s[]){
    Produto temp;
    sscanf(s, "%f;%s", &(temp.preco),temp.nome);
    return temp;
}

int procurarProduto(char nome[], Produto *p){
    FILE *arquivo = fopen(NOME_ARQUIVO, "r");
    int achei = 0;
    char linha[80];
    if (arquivo != NULL){
        while(fgets(linha,80,arquivo) != NULL){
            Produto temp = lerProduto(linha);
            if(strcmp(temp.nome, nome) == 0){
                (*p) = temp;
                achei = 1;
            }
        }
    }
    fclose(arquivo);
    return achei;
}








