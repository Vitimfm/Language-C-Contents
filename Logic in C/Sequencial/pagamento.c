#include <stdio.h>

int main(){

    int horas;
    double valor, pag;
    char nome[50];

    printf("Nome: ");
    gets(nome);
    printf("Valor da horas: ");
    scanf("%lf", &valor);
    printf("Horas trabalhadas: ");
    scanf("%d", &horas);

    pag = (double)valor * horas;

    printf("\nO pagamento para %s deve ser %.2lf", nome, pag);

    return 0;
}
