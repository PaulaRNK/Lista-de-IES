#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 1000

typedef struct{
    char* prenome;
    char* sobrenome;
    int letras;
} Pessoa;

void scanNomes(char* lista[], int* n){
    char str[MAX];
    *n = 0;
    scanf("%[^\n]%*c", str);
    while(strcmp(str, "FIM")!=0 && (*n)<20){
        lista[*n] = (char*) malloc(strlen(str)+1);
        strcpy(lista[*n], str);
        printf("%d | %s \n", *n, lista[*n]);
        (*n)++;
        if(*n<20) scanf("%[^\n]%*c", str);
    }

}

void separaNomes(Pessoa* p[], char* lista[], int n){
    char* aux;
    for(int i=0 ; i<n ; i++){
        p[i] = (Pessoa*) malloc(sizeof(Pessoa));
        for(int j=0 ; j<strlen(lista[i]) ; j++){
            if(lista[i][j]==' '){
                p[i]->prenome = (char*) malloc(j+1);
                strncpy(p[i]->prenome, lista[i], j);
                p[i]->prenome[j]=0;
                p[i]->sobrenome = (char*) malloc(strlen(&(lista[i][j+1]))+1);
                strcpy(p[i]->sobrenome, &lista[i][j+1]);
                p[i]->letras = strlen(p[i]->prenome) + strlen(p[i]->sobrenome);
                break;
            }

        }
    }
}

void printPessoas(Pessoa* p[], int n){
    for (int i=0 ; i<n ; i++){
        printf("%s %s\n", p[i]->prenome, p[i]->sobrenome);
    }
}

int comparaPrenome(const void* a, const void* b){
    Pessoa p1 = *((Pessoa*) a);
    Pessoa p2 = *((Pessoa*) b);
    printf("%s | %s\n", p1.prenome, p2.prenome);
    return strcmp( p1.prenome, p2.prenome );
}

int main(){
    char* lista[20];
    Pessoa* p[20];
    int n;
    scanNomes(lista, &n);
    separaNomes(p, lista, n);
    qsort(p, n, sizeof(Pessoa*), comparaPrenome);
    printPessoas(p, n);
    return 0;
}

