#include <stdio.h>
#include <string.h>

#define MAX 1000

int main(){
    char str[MAX];
    scanf("%[^\n]", str);
    for(int i=0 ; str[i] ; i++){
        if(str[i]==' ') printf("\n");
        else printf("%c", str[i]);
    }
    return 0;
}
