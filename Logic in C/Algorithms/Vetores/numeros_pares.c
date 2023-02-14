#include <stdio.h>

int main(){

    int vetor[20], rep, i, count = 0;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &rep);

    for(i = 0; i < rep; i++){
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }
    printf("Numeros pares: \n");
     for(i = 0; i < rep; i++){
        if(vetor[i] % 2 == 0){
            printf("%d ", vetor[i]);
            count++;
        }
    }
    printf("\nQuantidade de numeros pares = %d\n", count);
    return 0;
}