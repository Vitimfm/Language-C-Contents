#include <stdio.h>

int main(){

    double salario, n_salario, aumento;

    printf("Digite o salario da pessoa: ");
    scanf("%lf", &salario);

    if(salario <= 1000){
        n_salario = salario + (salario * 20 / 100);
        aumento = n_salario - salario;
        printf("Novo salario = R$ %.2lf \n", n_salario);
        printf("Aumento = R$ %.2lf \n", aumento);
        printf("Porcentagem = 20 \n"); 
    }else if(salario > 1000 && salario <= 3000){
        n_salario = salario + (salario * 15 / 100);
        aumento = n_salario - salario;
        printf("Novo salario = R$ %.2lf \n", n_salario);
        printf("Aumento = R$ %.2lf \n", aumento);
        printf("Porcentagem = 15 \n");
    }else if(salario > 3000 && salario <= 8000){
        n_salario = salario + (salario * 10 / 100);
        aumento = n_salario - salario;
        printf("Novo salario = R$ %.2lf \n", n_salario);
        printf("Aumento = R$ %.2lf \n", aumento);
        printf("Porcentagem = 10 \n");
    }else{
        n_salario = salario + (salario * 5 / 100);
        aumento = n_salario - salario;
        printf("Novo salario = R$ %.2lf \n", n_salario);
        printf("Aumento = R$ %.2lf \n", aumento);
        printf("Porcentagem = 5 \n");
    }
    return 0;
}