#include <stdio.h>

void op1(double x){
    printf("\nSelecionado: pagamento a vista\n"
           "Total: R$%.02lf\n", 0.9*x);
}

void op2(double x){
    printf("\nSelecionado: pagamento em duas vezes\n"
           "Parcela 1: R$%.02lf\n"
           "Parcela 2: R$%.02lf\n"
           "Total: R$%g\n", x/2, x/2, x);
}

void op3(double x){
    int parcelas; double total, juros, div;

    printf("\nSelecionado: pagamento de 3 a 10 vezes\n"
           "Insira numero de parcelas: ");
    scanf("%d", &parcelas);
    if(parcelas>10 || parcelas<2){
        printf("\nNumero de parcelas invalido, insira novamente\n");
        op3(x);
    }

    juros = x*0.03
    div = x/parcelas;
    total = x + juros*parcelas;

    for(int i=1; i<=parcelas ; i++)
        printf("Parcela %d: R$.02lf\n", div+juros);

    printf("Total: R$.02lf\n", total);
}

int pagamento(){
    int op;
    printf("\nSelecione a opcao de pagamento:\n"
           "Opcao 1: a vista com 10%% de desconto\n"
           "Opcao 2: em duas vezes (preco da etiqueta)\n"
           "Opcao 3: de 3 ate 10 vezes com 3%% de juros ao mes (somente para compras acima de R$ 100,00)\n");
    scanf("%d", &op);
    return op;
}

int main(){
    double gasto;
    int op;
    printf("Insira gasto total: ");
    scanf("%lf", &gasto);
    while(op=pagamento()){
        if(op==1){
            op1(gasto);
            break;
        }
        if(op==2){
            op2(gasto);
            break;
        }
        if(op==3){
            if(gasto>100){
                op3(gasto);
                break;
            }
            printf("\nEssa opcao eh apenas para compras acima de R$ 100,00, insira novamente\n");
            continue;
        }
        printf("\nOpcao invalida, insira novamente\n");
    }

    return 0;
}
