#include <stdio.h>

int main(){
    int rep, nHomem = 0, nMulher = 0;
    double menor, maior, media, soma = 0;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &rep);

    double alturas[rep];
    char generos[rep];

    for (int i=0; i<rep; i++) {
        printf("Altura da %da pessoa: ", i + 1);
        scanf("%lf", &alturas[i]);
        printf("Genero da %da pessoa: ", i + 1);
        scanf(" %c", &generos[i]);
    }
    menor = alturas[0];
    maior = alturas[0];
    for (int i=1; i<rep; i++) {
        if (alturas[i] > maior) {
            maior = alturas[i];
        }
        if (alturas[i] < menor) {
            menor = alturas[i];
        }
    }
    for (int i=0; i<rep; i++) {
        if (generos[i]=='F') {
            nMulher++;
            soma = soma + alturas[i];
        }
        else if(generos[i] == 'M'){
            nHomem++;
        }
    }
    media = soma / nMulher;
    printf("Menor altura = %.2lf\n", menor);
    printf("Maior altura = %.2lf\n", maior);
    printf("Media das alturas das mulheres = %.2lf\n", media);
	printf("Numero de homens = %d\n", nHomem);
    return 0;
}