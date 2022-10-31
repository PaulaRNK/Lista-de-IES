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

void soma_coluna_mx(int soma[], Matriz* m){
    for(int i=0 ; i<m->lin ; i++){
        for(int j=0 ; j<m->col ; j++){
            soma[j] += m->mx[i][j];
        }
    }
}

int main(){
    Matriz* matriz;
    int soma[4]={};
    matriz = scan_mx(matriz, 4, 4);
    print_mx(matriz);
    soma_coluna_mx(soma, matriz);
    for(int i=0 ; i<4 ; i++) printf("Soma coluna %d = %d\n", i+1, soma[i]);
    libera(matriz);
    return 0;
}
