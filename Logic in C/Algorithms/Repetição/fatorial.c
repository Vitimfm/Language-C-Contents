#include <stdio.h>

int main(){

    int n, fat= 1;

    printf("Digite o valor de N: ");
    scanf("%d", &n);

    for(int i = n; i > 0; i--){
        fat = fat * i;
    }
    printf("Fatorial = %d", fat);
    return 0;
}