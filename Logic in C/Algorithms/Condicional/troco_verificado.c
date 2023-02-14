#include <stdio.h>

int main(){

    int quant;
    double preco, recebido, troco;

    printf("Preco unitario do produto: ");
    scanf("%lf", &preco);
    printf("Quantidade comprada: ");
    scanf("%d", &quant);
    printf("Dinheiro recebido: ");
    scanf("%lf", &recebido);

    troco = recebido - (preco * quant);

    if(troco > 0){
        printf("Troco = %.2lf", troco);
    }else{
        troco = troco * -1;
        printf("Dinheiro insuficiente, faltam %.2lf R$", troco);
    }

    return 0;
}
