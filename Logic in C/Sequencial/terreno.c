#include <stdio.h>

int main () {

        double lar, comp, valor, area, preco;

        printf("Digite a largura do terreno: ");
        scanf("%lf", &lar);
        
        printf("Digite o comprimento do terreno: ");
        scanf("%lf", &comp);
        
        printf("Digite o valor do metro: ");
        scanf("%lf", &valor);

        printf("\n");

        area = lar * comp;

        printf("Area do terreno = %.2lf\n", area);

        preco = area * valor;

        printf("Preco do terreno = %.2lf\n", preco);

        return 0;
}