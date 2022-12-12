#include <stdio.h>

int main(){

    int rep, num;

    printf("Quantos numeros ira digitar: ");
    scanf("%d", &rep);

    for(int i = 0; i < rep; i++){
        printf("Digite um numero: ");
        scanf("%d", &num);
        if(num % 2 == 0 && num > 0){
            printf("Par positivo\n");
        }else if(num % 2 != 0 && num > 0){
            printf("Impar positivo\n");
        }else if(num % 2 != 0 && num < 0){
            printf("Impar negativo\n");
        }else if(num % 2 != 0 && num > 0){
            printf("Par negativo\n");
        }else{
            printf("Nulo");
        }
    }
    return 0;
}