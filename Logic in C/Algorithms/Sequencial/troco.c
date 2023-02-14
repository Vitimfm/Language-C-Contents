#include <stdio.h>

int main(){

    double preco, dinheiro, troco;
    int quant;

    printf("Preco unitario do produto: ");
    scanf("%lf", &preco);
    printf("Quantidade comprada: ");
    scanf("%d", &quant);
    printf("Dinheiro recebido: ");
    scanf("%lf", &dinheiro);

    troco =  dinheiro - (preco * quant);

    printf("Troco: %.2lf", troco);

    return 0;
}