#include <stdio.h>

int fat_rec(int n){
    if(n==1 || n==0) return n;
    return n*fat_rec(n-1);
}

int fat_ite(int n){
    int total=n;
    while(--n) total*=n;
    return total;
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d! = %d (recursivo) | %d (iterativo)\n", n, fat_rec(n), fat_ite(n));
}
