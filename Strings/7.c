#include <stdio.h>
#define MAX 1000

char* strcopiar(char* str0, char* str1){
    int i;
    for(i=0 ; str1[i] ; i++){
        str0[i] = str1[i];
    }
    str0[i]=0;
    return str0;
}

int main(){
    char str[MAX], copia[MAX];
    scanf("%[^\n]%*c", str);
    strcopiar(copia, str);
    printf("%s\n", copia);
    return 0;
}
