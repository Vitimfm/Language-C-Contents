#include <stdio.h>

int main(){
    
    int tempo, s, min, horas, sobra;

    printf("Digite a duracao em segundos: ");
    scanf("%d", &tempo);

    horas = tempo / 3600;
    sobra = tempo % 3600;

    min = sobra / 60;
    s = sobra % 60;

    printf("%d:%d:%d", horas, min, s);

    return 0;
}