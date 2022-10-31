#include <stdio.h>

double ex(double n){
    double soma = 1, topo=n, base = 1, termo = n;
    while(termo>10E-6){
        soma+=termo;
        base *= (base+1);
        topo += n;
        termo = topo/base;
    }
    return soma;
}

int main(){
    double n;
    scanf("%lf", &n);
    printf("ex(%g) = %g\n", n, ex(n));
}

