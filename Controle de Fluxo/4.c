#include <stdio.h>

int main(){
    int x, y;
    char c;
    scanf("%d %c %d", &x, &c, &y);
    switch(c){
    case '+':
        printf("%d+%d=%d\n", x, y, x+y);
        break;
    case '-':
        printf("%d-%d=%d\n", x, y, x-y);
        break;
    case '*':
        printf("%d*%d=%d\n", x, y, x*y);
        break;
    case '/':
        printf("%d/%d=%d\n", x, y, (y==0) ? -1 : x/y);
        break;
    default:
        printf("Operacao invalida\n");
    }
    return 0;
}
