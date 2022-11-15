#include <stdio.h>

int main(){
    double p;
    scanf("%lf", &p);
    printf("Novo preco = R$%.02f\n", (p<100)*(p*1.1) + (p>=100)*(p*1.2)  );
    return 0;
}
