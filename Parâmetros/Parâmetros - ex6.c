#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 3

typedef struct{
    char* nome;
    double preco;
} Produto;

void scanProdutos(Produto* lista[], int n){
    char str[100];
    double p;
    for(int i=0 ; i<n ; i++){
        lista[i] = (Produto*) malloc(sizeof(Produto));
        scanf("%[^\n]%lf%*c", str, &p);
        lista[i]->nome = (char*) malloc(strlen(str)+1);
        strcpy(lista[i]->nome, str);
        lista[i]->preco = p;
    }
}

void printProdutos(Produto* lista[], int n){
    for(int i=0 ; i<n ; i++){
        printf("Nome: %s | R$%.02f\n", lista[i]->nome, lista[i]->preco);
    }
}

void atualizaProdutos(Produto* lista[], int n){
    for(int i=0 ; i<n ; i++)
        if(lista[i]->preco<100) lista[i]->preco*=1.05;
}

int comparaProduto(const void* a, const void* b){
    return strcmp( (*((Produto**)a))->nome, (*((Produto**)b))->nome );
}

int main(){
    Produto* lista[MAX];
    scanProdutos(lista, MAX);
    atualizaProdutos(lista, MAX);
    qsort(lista, MAX, sizeof(Produto*), comparaProduto);
    printProdutos(lista, MAX);
}
