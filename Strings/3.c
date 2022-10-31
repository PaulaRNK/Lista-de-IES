#include <stdio.h>

#define MAX 1000

int imprimir(char* str, int i){
    if(str[i]==0) return i;
    printf("%c", str[i]);
    printf("%c", str[imprimir(str, i+1)-1]);
    return i;
}

int main(){
    char str[MAX];
    scanf("%[^\n]", str);
    imprimir(str, 0);
    return 0;
}
