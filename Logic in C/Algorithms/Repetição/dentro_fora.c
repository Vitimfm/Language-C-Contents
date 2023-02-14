#include <stdio.h>

int main(){

    int rep, num, dentro = 0, fora = 0;

    printf("Quantos numeros voce vai digitar: ");
    scanf("%d", &rep);

    for(int i = 0; i < rep; i++){
        printf("Digite um numero: ");
        scanf("%d", &num);
        if(num >= 10 && num <= 20){
            dentro++;
        }else{
            fora++;
        }
    }
    printf("Dentro = %d\n", dentro);
    printf("Fora = %d", fora);
    return 0;
}