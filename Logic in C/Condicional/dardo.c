#include <stdio.h>

int main(){

    double d1,d2,d3;

    printf("Digite as tres distancias:\n");
    scanf("%lf", &d1);
    scanf("%lf", &d2);
    scanf("%lf", &d3);

    if(d1 > d2 && d1 > d3){
        printf("Maior distancia: %.2lf", d1);
    }else if(d2 > d1 && d2 > d3){
        printf("Maior distancia: %.2lf", d2);
    }else{
        printf("Maior distancia: %.2lf", d3);
    }

    return 0;
}