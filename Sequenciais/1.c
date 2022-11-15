#include <stdio.h>

int main(){
    double x;
    printf("Valor em metros: ");
    scanf("%lf", &x);
    printf("Decimetros: %.02f\nCentimetros: %.02f\nMilimetros: %.02f\n", x*10, x*100, x*1000);
    return 0;
}
