#include <stdio.h>
#define MAX 1000

void soletrar(char* str){
    int i;
    for(i=0 ; str[i] ; i++){
        switch(str[i]){
        case '0':
            printf("zero ");
            break;
        case '1':
            printf("um ");
            break;
        case '2':
            printf("dois ");
            break;
        case '3':
            printf("tres ");
            break;
        case '4':
            printf("quatro ");
            break;
        case '5':
            printf("cinco ");
            break;
        case '6':
            printf("seis ");
            break;
        case '7':
            printf("sete ");
            break;
        case '8':
            printf("oito ");
            break;
        case '9':
            printf("nove ");
            break;
        default:
            printf("nao eh digito ");
        }
    }
    printf("\n");
}

int main(){
    char str[MAX];
    scanf("%[^\n]", str);
    soletrar(str);
    return 0;
}
