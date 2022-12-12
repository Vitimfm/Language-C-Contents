#include <stdio.h>

typedef struct No{    //declaracao da Struct (ainda não na memoria)
    int valor;
    struct No *prox;   //ponteiro de uniao de Nos
}No;

No *inicio = NULL;
No *fim = NULL;     
int tamanho = 0;

void adicionar(int valor, int posicao){

    if(posicao >= 0 && posicao <= tamanho){   //verificando posicao

        No *Novo = malloc(sizeof(No));  //aloca memoria 
        Novo->valor = valor;
        Novo->prox = NULL;

        if(inicio == NULL){ //adicionar quando lista vazia (Constante)
            inicio = Novo;
            fim = Novo;
        }else if(posicao == 0){   //adicionar no inicio (Constante)
            Novo->prox = inicio;  //Novo aponta pro inicio da lista
            inicio = Novo;        //inicio aponta pro Novo (agora o inicio da lista)
        }else if(posicao == tamanho){ //(Constante)
            fim->prox = Novo;   //proximo laço depois do fim é o Novo
            fim = Novo;         //fim agora é o novo adicionado
        }else{  //adicionar no meio-fim (Linear)
            No *aux = inicio;
            for(int i = 0; i < posicao - 1; i++){  //posicao - 1 pois vai caminhar até chegar uma posicao a menos da posicao desejada.
                aux = aux->prox;
            }
            Novo->prox = aux->prox;    //Novo aponta para o No da posicao deseja
            aux->prox = Novo;  //No da posicao - 1 aponta para o Novo, colocando esse No na posicao desejada.
        }
        tamanho++;
    }

}

int remover(int posicao){
    No *lixo;
    int retorno;
    if(posicao >= 0 && posicao < tamanho){
        fim = inicio;
        if(posicao == 0){ //(Constante)
            lixo = inicio;           //lixo vira o primeiro da lista
            inicio = inicio->prox;  //inicio passa ser o proximo No da lista depois do No removido
        }else{
            No *aux = inicio;
            for(int i = 0; i < posicao - 1; i++){  //percorre até posicao - 1 pois o *aux tem q parar no No antes da posicao deseja para que aux->prox seja excluido.
                aux = aux->prox; 
            }
            lixo = aux->prox;
            aux->prox = aux->prox->prox;
        }
    }
    retorno = lixo->valor;
    free(lixo); //desaloca memoria do No removido
    tamanho--;
    return retorno;
}

/* ==== Funções de Imprimir Dados da lista ==== */

void imprimir_Todos(){
    No *aux = inicio;   //recebe o inicio da lista 
    for(int i = 0; i < tamanho; i++){ 
        //percorre até tamanho - 1, pois:
        //lista    [0][1][2][3]
        //tamanho  [1][2][3][4]
        printf("%d\n", aux->valor);
        aux = aux->prox;
    }
}

void imprimir_ate_posicao(posicao){
    No *aux = inicio;    
    for(int i = 0; i <= posicao; i++){ 
        printf("%d\n", aux->valor);
        aux = aux->prox;
    }
}

int main(){
    adicionar(10, 0);
    adicionar(20, 1);
    adicionar(30, 2);
    adicionar(40, 3);
    adicionar(50, 4);
    remover(4);
    imprimir_Todos();
    return 0;
}