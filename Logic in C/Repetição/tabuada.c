#include <stdio.h>

int main(){

    int n, resultado;

    printf("Deseja a tabuada para qual valor? ");
    scanf("%d", &n);

    for(int i = 1; i < 11; i++){
        resultado = n * i;
        printf("%d * %d = %d\n", n, i, resultado);
    }

    return 0;
}