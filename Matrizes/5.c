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

void diagonal_p(int dp[], Matriz* m){
    for(int i=0 ; i<m->lin ; i++) dp[i] = m->mx[i][i];
}

int main(){
    Matriz * matriz;
    int dp[4];
    matriz = scan_mx_int(matriz, 4, 4);
    print_mx_int(matriz);
    diagonal_p(dp, matriz);
    printf("Diagonal principal: ");
    for(int i=0 ; i<4 ; i++) printf("%d ", dp[i]);
    printf("\n");
    libera(matriz);
    return 0;
}
