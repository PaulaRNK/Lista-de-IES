#include <stdio.h>
#include <ctype.h>

#define MAX 80

void contagem(char str[], int* tam, int* pont, int* num, int* min){
    *tam=*pont=*num=*min=0;
    char c=str[0];
    while(c){
        (*tam)++;
        (*pont)+= (ispunct(c)!=0);
        (*num)+= (isdigit(c)!=0);
        (*min)+= (islower(c)!=0);
        c = str[*tam];
    }
}

int main(){
    char str[80];
    int tam, pont, num, min;
    scanf("%[^\n]", str);
    contagem(str, &tam, &pont, &num, &min);
    printf("Tamanho = %d\nCarac. de pontuacao = %d\nDigitos = %d\nLetras minusculas = %d\n", tam, pont, num, min);
    return 0;
}
