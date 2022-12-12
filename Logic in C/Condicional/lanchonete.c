#include <stdio.h>

int main(){

    int codigo, quant;
    double pagar;

    printf("Codigo do produto comprado: ");
    scanf("%d", &codigo);
    printf("Quantidade comprada: ");
    scanf("%d", &quant);

    if(codigo == 1){
        pagar = quant * 5.0;
        printf("Valor a pagar: %.2lf", pagar);
    }else if(codigo == 2){
        pagar = quant * 3.5;
        printf("Valor a pagar: %.2lf", pagar);
    }else if(codigo == 3){
        pagar = quant * 4.8;
        printf("Valor a pagar: %.2lf", pagar);
    }else if(codigo == 4){
        pagar = quant * 8.9;
        printf("Valor a pagar: %.2lf", pagar);
    }else{
        pagar = quant * 7.32;
        printf("Valor a pagar: %.2lf", pagar);
    }

    return 0;
}