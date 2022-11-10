#include <stdio.h>
#include <stdlib.h>

void function_print(float *vet){
    int i=0;
    printf("Notas dos 3 alunos: ");
    for( ; i<2 ; i++){
        printf("%.2f, ", vet[i]);
    }
    printf("%.2f\n", vet[i]);
}


void function_read(float *vet){
    int i=0;
    for(int i=0 ; i<3 ; i++){
        scanf("%f", &vet[i]);
    }
}

int main(){
    float *vet;

    printf("Insira as notas:");
    vet = (float*)malloc(3*sizeof(float));
    function_read(vet);
    function_print(vet);


    free(vet);
    return 0;
}
