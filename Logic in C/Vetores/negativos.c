#include <stdio.h>

int main(){

    int vetor[20], rep, i;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &rep);

    for(i = 0; i < rep; i++){
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }
    printf("Numeros Negativos: \n");
    for(i = 0; i < rep; i++){
        if(vetor[i] < 0){
            printf("%d\n", vetor[i]);
        }
    } 
    return 0;
    }                         