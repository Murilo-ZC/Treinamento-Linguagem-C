#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Definição da estrutura
typedef struct{
    char nome[80];
    char endereco[80];
    char telefone[80];
} Contato;

Contato lerContato(){
    Contato temp;
    printf("Informe o nome do contato, seu nendereco e o numero do telefone:");
    gets(temp.nome);
    gets(temp.endereco);
    gets(temp.telefone);
    return temp;
}

void exibirContato(Contato c[], int tamanho){
    int i;
    printf("%10s%20s%10s\n", "Nome", "Endereco", "Telefone");
    for(i = 0; i < tamanho; i++)
        printf("%10s%20s%10s\n", c[i].nome, c[i].endereco, c[i].telefone);
}

void trocarContato(Contato c[], int posicao){
    Contato temp = c[posicao];
    c[posicao] = c[posicao + 1];
    c[posicao+1] = temp;
}

void ordenar(Contato c[], int tamanho){
    int i, trocado;
    do{
        trocado = 0;
        for(i = 0; i < tamanho -1; i++){
            if(strcmp(c[i].nome, c[i+1].nome) > 0){
                trocado = 1;
                trocarContato(c, i);
            }
        }
    }while(trocado);
}

int main(){
    Contato contatos[5];
    int i;
    for(i = 0; i < 5; i++)
        contatos[i] = lerContato();
    ordenar(contatos, 5);
    exibirContato(contatos, 5);
    return 0;
}