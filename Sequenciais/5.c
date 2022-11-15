#include <stdio.h>
#include <math.h>

int main(){
    double x, y;
    scanf("%lf %lf", &x, &y);
    printf("Soma = %g\n", x+y);
    printf("Produto = %g\n", x*y);
    printf("Quadrado de X = %g\n", x*x);
    printf("Raiz da soma dos quadrados = %g\n", sqrt(x*x + y*y));
    printf("Seno de X-Y = %g\n", sin(x));
    printf("Modulo de X = %g\n", (x>0) ? x : -x);
    return 0;
}
