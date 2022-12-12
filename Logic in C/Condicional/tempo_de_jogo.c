#include <stdio.h>

int main(){

    int ini, final, duracao;

    printf("Hora inicial: ");
    scanf("%d", &ini);
    printf("Hora final: ");
    scanf("%d", &final);

    if(final > ini){
        duracao = final - ini;
        printf("Duracao do jogo: %d horas", duracao);
    }else{
        duracao = (ini - 24) * -1 + final;
        printf("Duracao do jogo: %d horas", duracao);
    }
    return 0;
}