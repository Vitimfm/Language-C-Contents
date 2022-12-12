#include <stdio.h>

int main(){

    int idade, count, soma;
    double media;

    printf("Digite as idades: \n");
    scanf("%d", &idade);

    if(idade < 0){
        printf("Impossivel calcular");
    }else{
        soma = 0;
        count = 0;
        while(idade >= 0){
            soma = soma + idade;
            count++;
            scanf("%d", &idade);
        }
        media = (double)soma / count;
        printf("Media = %.2lf", media);
    }
    return 0;
}