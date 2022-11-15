#include <stdio.h>

int main(){
    int i, j;
    for(int i=1; i<=9 ; i++){
        for(int j=1 ; j<=9 ; j++){
            printf("%dx%d=%02d\n", i, j, i*j);
        }
    }
    return 0;
}
