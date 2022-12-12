#include <stdio.h>

int main(){
    
    int dist;
    double gasto, media;

    printf("Distancia percorrida: ");
    scanf("%d", &dist);
    printf("Cobustivel gasto: ");
    scanf("%lf", &gasto);

    media = (double)dist / gasto;

    printf("\nConsumo medio = %.3lf", media);

    return 0;
}
