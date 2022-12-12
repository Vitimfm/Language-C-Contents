#include <stdio.h>

int main(){

    int min;
    double taxa = 50, n_min;

    printf("Digite a quantidade de minutos: ");
    scanf("%d", &min);

    if(min < 100){
        printf("Valor a pagar: %.2lf", taxa);
    }else if(min > 100){
        n_min = (min - 100) * 2 + 50;
        printf("Valor a pagar: %.2lf", n_min);
    }

    return 0; 
}