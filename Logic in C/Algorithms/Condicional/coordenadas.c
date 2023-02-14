#include <stdio.h>

int main(){

    double x, y;

    printf("Digite o valor de X: ");
    scanf("%lf", &x);
    printf("Digite o valor de Y: ");
    scanf("%lf", &y);

    if(x > 0 && y > 0){
        printf("Primeiro quadrante!");
    }else if(x > 0 && y < 0){
        printf("Quarto quadrante!");
    }else if(x < 0 && y < 0){
        printf("Terceiro quadrante!");
    }else if(x < 0 && y > 0){
        printf("Segundo quadrante!");
    }else if(x == 0 && y == 0){
        printf("Origem");
    }else if(x == 0 && y != 0){
        printf("Eixo Y");
    }else if(x != 0 && y == 0){
        printf("Eixo X");
    }
    return 0;
}