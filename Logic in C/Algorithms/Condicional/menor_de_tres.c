#include <stdio.h>

int main(){
    
    int a, b, c;

    printf("Primeiro numero: ");
    scanf("%d", &a);
    printf("Segundo numero: ");
    scanf("%d", &b);
    printf("Terceiro numero: ");
    scanf("%d", &c);

    if(a < b && a < c){
        printf("Menor Numero: %d", a);
    }else if(b < a && b < c){
        printf("Menor numero: %d", b);
    }else{
        printf("Menor numero: %d", c);
    }

    return 0;
} 