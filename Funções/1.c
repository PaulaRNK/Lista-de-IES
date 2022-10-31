#include <stdio.h>

double potencia(double x, int n){
    if(n==0) return 1;
    return x*potencia(x, n-1);
}

int main(){
    double x; int n;
    scanf("%lf %d", &x, &n);
    printf("%g^%d = %g\n", x, n, potencia(x, n));
}
