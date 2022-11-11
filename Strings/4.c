#include <stdio.h>

#define MAX 1000

int main(){
    char nome[MAX], ende[MAX], num[20];
    unsigned idade;
    printf("Digite seu nome: ");
    scanf("%[^\n]%*c", nome);
    printf("Digite seu endereco: ");
    scanf("%[^\n]%*c", ende);
    printf("Digite seu telefone: ");
    scanf("%[^\n]%*c", num);
    printf("Digite sua idade: ");
    scanf("%u", &idade);
    printf("Seu nome e %s, voce tem %u anos, mora na rua %s e seu telefone e %s.\n", nome, idade, ende, num);
}
