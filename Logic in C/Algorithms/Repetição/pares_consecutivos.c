#include <stdio.h>

int main(){

    int x, soma;

    printf("Digite o valor inteiro de X: ");
    scanf("%d", &x);

    while(x != 0){
        if(x % 2 == 0){
            soma = 5 * x + 20;
            printf("SOMA = %d\n", soma);
        }else{
            x++;
            soma = 5 * x + 20;
            printf("SOMA = %d\n", soma);
        }
        printf("Digite o valor inteiro de X: ");
		scanf("%d", &x);
    }

    return 0;
}