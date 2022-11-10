#include <stdio.h>
#include <math.h>
#include <string.h>
#define MAX 1000

int converte2decimal(char* str, double base){
    int total=0, tam = strlen(str);
    for(int i=0 ; str[i] ; i++){
        total+= ( (int) str[i]-'0' ) * pow(base, tam-1-i);
        printf("%d\n", total);
    }
    return total;
}

int main(){
    char str[MAX];
    double base;
    int convertido;
    scanf("%s%*c%lf", str, &base);
    convertido = converte2decimal(str, base);
    printf("%s -> %d\n", str, convertido);
    return 0;
}
