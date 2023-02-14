#include <stdio.h>

int main(){

    int rep, i, count = 0, soma = 0;
    double media;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &rep);

    int vetor[rep];

    for(i = 0; i < rep; i++){
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
        if(vetor[i] % 2 == 0){
            soma = soma + vetor[i];
            count++;
        }
    }
    if(count != 0){
        media = (double)soma / count;
        printf("\nMedia do numeros pares = %.2lf\n", media);
    }else{
        printf("Nenhum numero par \n");
    }

    return 0;
}