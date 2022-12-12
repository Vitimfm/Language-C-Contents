#include <stdio.h>

int main(){
    
    double n1, n2, soma;

    printf("Digite a primeira nota: ");
    scanf("%lf", &n1);
    printf("Digite a segunda nota: ");
    scanf("%lf", &n2);

    soma = n1 + n2;

    if(soma < 60.0){
        printf("Nota final: %.1lf\n", soma);
        printf("Reprovado");
    }
    else{
        printf("Nota final: %.1lf", soma);
    }
    return 0;
}