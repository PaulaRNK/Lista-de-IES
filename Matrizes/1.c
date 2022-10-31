#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int** mx;
    int lin;
    int col;
} Matriz;

void print_mx(Matriz* m){
    for(int i=0 ; i<m->lin ; i++){
        for(int j=0 ; j<m->col ; j++){
            printf("%d ", m->mx[i][j]);
        }
        printf("\n");
    }
}

Matriz* scan_mx(Matriz* m, int lin, int col){
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

int soma_impar(Matriz* m){
    int soma=0, x;
    for(int i=0 ; i<m->lin ; i++){
        for(int j=0 ; j<m->col ; j++){
            x = m->mx[i][j];
            soma += x*(x%2);
        }
    }
    return soma;
}

int main(){
    Matriz* matriz;
    matriz = scan_mx(matriz, 3, 3);
    print_mx(matriz);
    printf("Soma dos impares = %d\n", soma_impar(matriz));
    libera(matriz);
    return 0;
}
