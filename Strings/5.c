#include <stdio.h>
#include <string.h>

int sim_ou_nao(char* str){
    if(strcmp(str, "SIM")==0) return 1;
    if(strcmp(str, "NAO")==0) return 0;
    return -1;
}

int main(){
    char str[4];
    scanf("%s%*c", str);
    printf("%d\n", sim_ou_nao(str));
    return 0;
}
