#include <stdio.h>

int main(){

    int rep, soma = 0;
    double media;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &rep);
    int vetor[rep];

    for(int i = 0; i < rep; i++){
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
        soma = soma + vetor[i];
    }
    media = (double)soma / rep;
    printf("Valores = ");
    for(int i = 0; i < rep; i++){
        printf("%d ",vetor[i]);
    }
    printf("\n");
    printf("Soma = %d\n", soma);
    printf("Media = %.2lf\n", media);
    return 0;
}