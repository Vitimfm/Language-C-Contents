#include <stdio.h>

int main(){

    int rep;
    double divisao, num, deno;

    printf("Quantos casos voce vai digitar: ");
    scanf("%d", &rep);

    for(int i = 0; i < rep; i++){
        printf("Entre com o numerador: ");
        scanf("%lf", &num);
        printf("Entre com o denominador: ");
        scanf("%lf", &deno);

        if(deno == 0){
            printf("Divisao Impossivel \n");
        }else{
            divisao = num / deno;
            printf("Divisao = %.2lf\n", divisao);
        }
    }
    return 0;
}