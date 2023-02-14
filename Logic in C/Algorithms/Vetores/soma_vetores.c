#include <stdio.h>

int main(){

    int rep;

    printf("Quantos valores vai ter cada vetor: ");
    scanf("%d", &rep);

    int vetor1[rep], vetor2[rep], vetor3[rep];
    printf("Digite os valores do vetor A: \n");
    for(int i = 0; i < rep; i++){
        scanf("%d", &vetor1[i]);  
    }
    printf("Digite os valores do vetor B: \n");
    for(int i = 0; i < rep; i++){
        scanf("%d", &vetor2[i]);
        vetor3[i] = vetor1[i] + vetor2[i];
    }
    printf("Vetor criado: \n");
    for(int i = 0; i < rep; i++){
        printf("%d\n", vetor3[i]);
    }
    return 0;
}