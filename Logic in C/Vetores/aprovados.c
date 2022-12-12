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
    int rep;
    double media;

    printf("Quantos alunos serao digitadas: ");
    scanf("%d", &rep);

    char nomes[rep][50];
    double n1[rep], n2[rep];

    for (int i=1; i <= rep; i++){
        printf("Digite nome, primeira e segunda nota do %do aluno:\n", i);
        limpar_entrada();
        ler_texto(nomes[i], 50);
        scanf("%lf", &n1[i]);
        scanf("%lf", &n2[i]);
    }
    printf("\nAlunos Aprovados: \n");
    for (int i=1; i <= rep; i++){
        media = (n1[i] + n2[i]) / 2;
        if(media >= 6.0){
            printf("%s\n", nomes[i]);
        }
    }
    return 0;
}
