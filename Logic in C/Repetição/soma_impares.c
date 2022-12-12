#include <stdio.h>

int main(){

    int n1, n2, temp, soma = 0;

    printf("Digite dois numeros: \n");
    scanf("%d", &n1);
    scanf("%d", &n2);

    if(n1 > n2){
        temp = n1;   // armazena o maior
        n1 = n2;     // n1 passa a ser o menor
        n2 = temp;   // n2 passa a ser o maior
    }

    for(int i = n1 + 1; i < n2; i++){
        if(i % 2 != 0){
            soma = soma + i;
        }
    }

    printf("Soma dos impares = %d", soma);

    return 0;
}