#include <stdio.h>
#include <stdlib.h>

typedef struct{
    double** mx;
    int lin;
    int col;
} Matriz;

void print_mx(Matriz* m){
    for(int i=0 ; i<m->lin ; i++){
        for(int j=0 ; j<m->col ; j++){
            printf("%.02lf ", m->mx[i][j]);
        }
        printf("\n");
    }
}

Matriz* scan_mx(Matriz* m, int lin, int col){
    double x;
    m = (Matriz*) malloc(sizeof(Matriz));
    m->lin = lin;
    m->col = col;
    m->mx = (double**) malloc(sizeof(double*) * m->lin);

    for(int i=0 ; i<m->lin ; i++){
        m->mx[i] = (double*) malloc(sizeof(double) * m->col);
        for(int j=0 ; j<m->col ; j++){
            scanf("%lf", &x);
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

double soma_linha_mx(double soma[], Matriz* m){
    for(int i=0 ; i<m->lin ; i++){
        for(int j=0 ; j<m->col ; j++){
            soma[i] += m->mx[i][j];
        }
    }
}

int main(){
    Matriz* matriz;
    double soma[3]={};
    matriz = scan_mx(matriz, 3, 4);
    print_mx(matriz);
    soma_linha_mx(soma, matriz);
    for(int i=0 ; i<3 ; i++) printf("Soma linha %d = %.02lf\n", i+1, soma[i]);
    free(matriz);
    return 0;
}
