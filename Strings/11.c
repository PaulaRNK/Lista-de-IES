#include <stdio.h>
#include <string.h>
#define MAX 1000

char* adicionar(char*str, char c, int pos){
    if(pos>strlen(str)) return NULL;
    char aux[MAX];
    strcpy(aux, &str[pos-1]);
    str[pos-1] = c;
    strcpy(&str[pos], aux);
    return str;
}

int main(){
    char str[MAX], c;
    int pos;
    printf("Insira string, char e a posicao:\n");
    scanf("%[^\n]%*c%c%d", str, &c, &pos);
    adicionar(str, c, pos);
    printf("Nova string: %s\n", str);
    return 0;
}
