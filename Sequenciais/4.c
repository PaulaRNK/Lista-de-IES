#include <stdio.h>

int main(){
    double v1;
    int v2;
    printf("Valor em Fahrenheit: ");
    scanf("%lf", &v1);
    v2 = v1;
    printf("Celsius: %.01f | %.01f\n", (v1-32)*(5.0/9.0), (v2-32)*(5.0/9));
    return 0;
}
