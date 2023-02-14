#include <stdio.h>

int main(){

    int rep;
    double n1, n2, n3, media;

    printf("Quantos casos voce ira digitar: ");
    scanf("%d", &rep);

    for(int i = 0; i < rep; i++){
        printf("Digite 3 numeros: \n");
        scanf("%lf", &n1);
        scanf("%lf", &n2);
        scanf("%lf", &n3);
        media = ((n1 * 2) + (n2 * 3) + (n3 * 5)) / 10.0;
        printf("Media = %.1lf\n", media);
    }
    return 0;
}