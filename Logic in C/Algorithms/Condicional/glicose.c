#include <stdio.h>

int main(){

    double medida;

    printf("Digite a medida da glicose: ");
    scanf("%lf", &medida);

    if(medida <=100){
        printf("Clasificacao: Normal");
    }else if(medida > 100 && medida <= 140){
        printf("Classificacao: Elevado");
    }else{
        printf("Classificacao: Diabetes");
    }

    return 0;
}