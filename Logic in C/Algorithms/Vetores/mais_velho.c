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
    int rep, maior, posicao;

    printf("Quantas pessoas seram digitadas: ");
    scanf("%d", &rep);

    char nomes[rep][50];
    int idade[rep];

    for (int i=0; i < rep; i++){
       printf("Dados da %d pessoa: \n", i+1);
       printf("Nome: ");
       limpar_entrada();
       ler_texto(nomes[i], 50);
       printf("Idade: ");
       scanf("%d", &idade[i]);
    }
    maior = idade[0];
    printf("\nPessoa mais velha: ");
    for (int i=0; i < rep; i++){
        if(idade[i] > maior){
            maior = idade[i];
            posicao = i;
        }
    }
    printf("%s\n",nomes[posicao]);
    return 0;
}
