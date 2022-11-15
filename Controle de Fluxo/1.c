#include <stdio.h>

int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    if(x==y) printf("Valores iguais");
    else{
        if(x>y)
            for(int i=x ; i>=y ; printf("%d ", i--));

        else
            for(int i=x ; i<=y ; printf("%d ", i++));
    }
    printf("\n");
    return 0;
}
