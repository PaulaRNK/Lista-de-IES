#include <stdio.h>
#define MAX 1000

int palavras(char* str){
    int soma=0;
    int ischar=0;
    for(int i=0 ; str[i]; i++){
        if(str[i]==' '){
            soma += (ischar>0);
            ischar = 0;
        }
        else ischar++;
    }
    soma += (ischar>0);
    return soma;
}

int main(){
    char str[MAX];
    scanf("%[^\n]", str);
    printf("Quantidade de palavras: %d\n", palavras(str));
    return 0;
}
