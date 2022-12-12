#include <stdio.h>

int main(){

    int vetor[20], rep, i, maior, count = 0;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &rep);

    for(i = 0; i < rep; i++){
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }
    maior = vetor[0];
    printf("\nMaior Valor = ");
    for(i = 0; i < rep; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
            count++;
        }}
    printf("%d\n", maior);
    printf("Posicao do maior valor = %d\n", count);

    return 0;
}