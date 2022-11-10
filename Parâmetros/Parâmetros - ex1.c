#include <stdio.h>

void function_all(int x, int y){
    int soma=0, dif=0 , prod=1;
    soma = x+y;
    dif = x-y;
    prod = x*y;

    printf("\nSoma: %d\n", soma);
    printf("Diferenca: %d\n", dif);
    printf("Produto: %d\n", prod);
}


int main(){
    int num1, num2;
    printf("Valor 1: ");
    scanf("%d", &num1);
    printf("Valor 2: ");
    scanf("%d", &num2);

    function_all(num1,num2);

    return 0;
}
