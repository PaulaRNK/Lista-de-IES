#include <stdio.h>
#include <stdlib.h>

void print_vet(int vet[], int n){
    printf("Vetor: [");
    for(int i=0 ; i<n-1 ; i++){
        printf("%d ,", vet[i]);
    }
    printf("%d]\n", vet[n-1]);
}


void function_vet(int *vet, int *n){
    int i=0, media=0, num;

    printf("Insira um valor: ");
    scanf("%d", &num);

    while(num > 0){
        vet[i] = num;
        printf("Vetor: %d\n", vet[i]);
        i++;
        scanf("%d", &num);
    }
    *n = i;
}

void function_media(int vet[], int n){
    int media=0, soma=0;
    for(int i=0 ; i<n ; i++){
        soma += vet[i];
    }
    printf("Media dos valores do vetor: %d\n", soma/n);
}

void function_menor(int vet[], int n){
    int valor_inicial = vet[0];

    for(int i=0 ; i<n ; i++){
        if(vet[i] < valor_inicial){
            valor_inicial = vet[i];
        }
    }
    printf("O menor valor do vetor: %d\n", valor_inicial);
}

void function_maior(int vet[], int n){
    int valor_inicial = vet[0];

    for(int i=0 ; i<n ; i++){
        if(vet[i] > valor_inicial){
            valor_inicial = vet[i];
        }
    }
    printf("O maior valor do vetor: %d\n", valor_inicial);
}

int main(){
    int *vet, n;

    vet = (int*)malloc(100*sizeof(int));
    function_vet(vet, &n);
    print_vet(vet, n);
    function_media(vet, n);
    function_menor(vet,n);
    function_maior(vet,n);

    free(vet);

    return 0;
}




