#include <stdio.h>

int function_div(int *x, int *y, int *raz){
    int num_1 = (*x), num_2 = (*y);
    if(num_2 == 0) return 0;
    else{
         (*raz) = num_1/num_2;
         printf("A razao entre os numeros: %d", (*raz));
            return 1;
    }
}

int main(){
    int num1, num2, razao;
    printf("Valor 1: ");
    scanf("%d", &num1);
    printf("Valor 2: ");
    scanf("%d", &num2);

    function_div(&num1,&num2,&razao);


    return 0;
}
