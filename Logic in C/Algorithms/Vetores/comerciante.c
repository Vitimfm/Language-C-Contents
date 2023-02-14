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

    int rep, up = 0, down = 0, btw = 0;
    double totalCompra = 0, totalVenda = 0, totalLucro = 0;

    printf("Serao digitado dados de quantos produtos: ");
    scanf("%d", &rep);

    char produtos[rep][50];
    double compra[rep], venda[rep], lucros[rep];

    for (int i = 0; i < rep; i++){
        printf("Produto %d: \n", i + 1);
        printf("Nome: ");
        limpar_entrada();
        ler_texto(produtos[i], 50);
        printf("Preco de compra: ");
        scanf("%lf", &compra[i]);
        printf("Preco de venda: ");
        scanf("%lf", &venda[i]);
    }
    for(int i = 0; i < rep; i++){
        lucros[i] = (venda[i] - compra[i])/ compra[i] * 100.0;
    }
    for (int i=0; i< rep; i++) {
        if (lucros[i] < 10.0) {
            down++;
        }
        else if (lucros[i] < 20.0) {
            btw++;
        }
        else {
            up++;
        }
    }
    for(int i = 0; i <rep; i++){
        totalCompra = totalCompra + compra[i];
        totalVenda = totalVenda + venda[i];
    }
    totalLucro = totalVenda - totalCompra;
    printf("\nRELATORIO:\n");
	printf("Lucro abaixo de 10%%: %d\n", down);
	printf("Lucro entre 10%% e 20%%: %d\n", btw);
	printf("Lucro acima de 20%%: %d\n", up);
    printf("Valor total de compra: %.2lf\n", totalCompra);
    printf("Valor total de venda: %.2lf\n", totalVenda);
    printf("Lucro total: %.2lf\n", totalLucro);
    return 0;
}