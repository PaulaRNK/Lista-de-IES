#include <stdio.h>
#define MAX 1000

char* primeiro_branco(char* str){
    for(int i=0 ; str[i] ; i++)
        if (str[i]==' ') return &str[i];
    return NULL;
}

int main(){
    char str[MAX];
    scanf("%[^\n]%*c", str);
    printf("Primeiro espaço:<%s>\n", primeiro_branco(str));
    return 0;
}
