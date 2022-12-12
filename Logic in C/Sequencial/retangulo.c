#include <stdio.h>
#include <math.h>

int main() {

    double base, alt, area, peri, diag;

    printf("Base do retangulo: ");
    scanf("%lf", &base);

    printf("Altura do retangulo: ");
    scanf("%lf", &alt);

    area = base * alt;
    printf("\nArea do retangulo: %.4lf\n", area);

    peri = (base + alt) * 2;
    printf("Perimetro do retangulo: %.4lf\n", peri);   

    diag = sqrt((pow(base, 2)) + (pow(alt, 2)));
    printf("Diagonal do retangulo: %.4lf\n", diag);
   
    return 0;
}