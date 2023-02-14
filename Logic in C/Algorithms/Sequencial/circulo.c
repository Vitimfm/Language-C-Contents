#include <stdio.h>

int main(){

    double area, r;

    printf("Digite o valor do circulo: ");
    scanf("%lf", &r);

    area = (pow(r, 2) * 3.14159);

    printf("Area = %.3lf", area);

    return 0;
}