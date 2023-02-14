#include <stdio.h>

void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}
void ler_texto(char *buffer, int length) {
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}

int main(){
    int rep, menor16 = 0;
    double media, soma = 0, menores;

    printf("Quantas pessoas serao digitadas: ");
    scanf("%d", &rep);

    int idade[rep];
    char nomes[rep][50];
    double altura[rep];

    for (int i = 0; i < rep; i++){
        printf("Dados da %d pessoa: \n", i + 1);
        printf("Nome: ");
        limpar_entrada();
        ler_texto(nomes[i], 50);
        printf("Idade: ");
        scanf("%d", &idade[i]);
        printf("Altura: ");
        scanf("%lf", &altura[i]);
    }
    for (int i = 0; i < rep; i++){
        soma = soma + altura[i];
        if(idade[i] < 16){
            menor16++;
        }
    }
    media = soma / rep;
    menores = ((double)menor16 / rep) * 100.0;
    printf("\nAltura media: %.2lf\n", media);
    printf("Pessoas com menos de 16 anos: %.1lf%%\n", menores);
    for (int i = 0; i < rep; i++){
        if(idade[i] < 16){
            printf("%s\n", nomes[i]);
        }
    }
    return 0;
}