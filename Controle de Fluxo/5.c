#include <stdio.h>

int main(){
    int a, b;
    scanf("%d", &a);
    while(a!=50){
        scanf("%d", &b);
        printf("Media: %.01f\n", (a+b)/2.0);
        scanf("%d", &a);
    }
    return 0;
}
