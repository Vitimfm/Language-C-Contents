#include <stdio.h>

int main(){
    
    double a, b, c, areaQ, areaT, areaP;

    printf("Medida A: ");
    scanf("%lf", &a);
    printf("Medida B: ");
    scanf("%lf", &b);
    printf("Medida C: ");
    scanf("%lf", &c);

    areaQ = a * a;
    areaT = (a * b) / 2;
    areaP = ((a + b) * c) / 2;

    printf("========================\n");
    printf("Area quadrado: %.4lf\n", areaQ);
    printf("Area triangulo: %.4lf\n", areaT);
    printf("Area trapezio: %.4lf\n", areaP);
    printf("========================");

    return 0;
}
