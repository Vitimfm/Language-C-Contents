#include <stdio.h>

int main(){

    int rep, rato=0, coelho=0, sapo=0, quant, totalCobaia = 0;
    char tipo;
    double pR, pS, pC;

    printf("Digite a quantidade de casos teste: ");
    scanf("%d", &rep);

    for(int i = 0; i < rep; i++){
        printf("Quantidade de Cobaias: ");
        scanf("%d", &quant);
        printf("Tipo de cobaia: ");
        scanf(" %c", &tipo);

        totalCobaia = totalCobaia + quant;

        if(tipo == 'C'){
            coelho = coelho + quant;
        }else if(tipo == 'R'){
            rato = rato + quant;
        }else if(tipo == 'S'){
            sapo = sapo + quant;
        }
        pR = ((double)rato / totalCobaia) * 100;
        pC = ((double)coelho / totalCobaia) * 100;
        pS = ((double)sapo / totalCobaia) * 100;
    }
    printf("\n RELATORIO FINAL:\n");
    printf("Total: %d cobaias\n", totalCobaia);
    printf("Total de coelhos: %d\n", coelho);
    printf("Total de ratos: %d\n", rato);
    printf("Total de sapos: %d\n", sapo);
    printf("Porcentagem de coelhos: %.2lf\n", pC);
    printf("Porcentagem de ratos: %.2lf\n", pR);
    printf("Porcentagem de sapos: %.2lf\n", pS);
    return 0;
}