#include <stdio.h>
#include <string.h>
#define MAX 1000

char* removechar(char* str, char c){
    for(int i=0 ; str[i] ; i++){
        if(str[i]==c){
          9  strcpy(&str[i], &str[i+1]);
        }
    }
    return str;
}

int main(){
    char str[MAX], c;
    printf("Insira a string e o char a ser eliminado:\n");
    scanf("%[^\n]%*c%c", str, &c);
    removechar(str, c);
    printf("%s\n", str);
}
