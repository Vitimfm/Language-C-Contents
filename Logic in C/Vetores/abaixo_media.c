#include <stdio.h>

int main(){

    int rep, i;
    double media, soma = 0;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &rep);

    double vetor[rep];

    for(i = 0; i < rep; i++){
        printf("Digite um numero: ");
        scanf("%lf", &vetor[i]);
        soma = soma + vetor[i];
    }
    media = soma / (double)rep;

    printf("\nMedia do vetor = %.3lf\n", media);
    printf("Elementos abaixo da media: \n");
    for(i = 0; i < rep; i++){
        if(vetor[i] < media){
            printf("%.1lf\n", vetor[i]);
        }
    }
    return 0;
}