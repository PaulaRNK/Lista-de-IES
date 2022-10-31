#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int** mx;
    int lin;
    int col;
} Matriz;

void print_mx_int(Matriz* m){
    for(int i=0 ; i<m->lin ; i++){
        for(int j=0 ; j<m->col ; j++){
            printf("%d ", m->mx[i][j]);
        }
        printf("\n");
    }
}

Matriz* scan_mx_int(Matriz* m, int lin, int col){
    int x;
    m = (Matriz*) malloc(sizeof(Matriz));
    m->lin = lin;
    m->col = col;
    m->mx = (int**) malloc(sizeof(int*) * m->lin);

    for(int i=0 ; i<m->lin ; i++){
        m->mx[i] = (int*) malloc(sizeof(int) * m->col);
        for(int j=0 ; j<m->col ; j++){
            scanf("%d", &x);
            m->mx[i][j] = x;
        }
    }

    return m;
}

void libera(Matriz* m){
    for(int i=0 ; i<m->lin ; i++) free(m->mx[i]);
    free(m->mx);
    free(m);
}

void maior_menor_mx(int* maior, int* menor, Matriz* m){
    *maior = *menor = m->mx[0][0];
    int x;
    for(int i=0 ; i<m->lin ; i++){
        for(int j=0 ; j<m->col ; j++){
            x = m->mx[i][j];
            if(x<*menor) *menor = x;
            if(x>*maior) *maior = x;
        }
    }
}

int main(){
    Matriz * matriz;
    int maior, menor;
    matriz = scan_mx_int(matriz, 3, 3);
    print_mx_int(matriz);
    maior_menor_mx(&maior, &menor, matriz);
    printf("Menor elemento: %d\nMaior elemenro: %d\n", menor, maior);
    libera(matriz);
    return 0;
}
