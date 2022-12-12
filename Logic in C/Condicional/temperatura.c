#include <stdio.h>

int main(){

    double cel, far;
    char escolha;

    printf("Voce vai digitar a temperatura em qual escala (C/F)? ");
    scanf("%c", &escolha);

    if(escolha == 'F'){
        printf("Digite a temperatura em Fahrenheit: ");
        scanf("%lf", &far);
        cel = 5.0 / 9.0 * (far - 32.0);
        printf("Temperatura equivalente em Celsius: %.2lf", cel);
    }else if(escolha == 'C'){
        printf("Digite a temperatura em Celsius: ");
        scanf("%lf", &cel);
        far = cel * 9.0 / 5.0 + 32.0;
        printf("Temperatura equivalente em Fahrenheit: %.2lf", far);

    }

    return 0;
}