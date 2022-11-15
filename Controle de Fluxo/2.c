#include <stdio.h>

int main(){
    printf("DEC |  HEX | CHAR\n");
    for(int i=0 ; i<=127 ; i++){
        printf("%3d | %#4X | %3c\n", i, i, i);
    }
}
