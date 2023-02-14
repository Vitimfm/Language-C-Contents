#include <stdio.h>

typedef struct No{    
    int valor;
    struct No *prox;   //ponteiro de uniao de Nos
    struct No *ant;    //ponteiro de uniao dupla de Nos
}No;

No *inicio = NULL;
No *fim = NULL;     
int tamanho = 0;       //variavel para o tamanho da lista

void adicionar(int valor, int posicao){

    if(posicao >= 0 && posicao <= tamanho){   //verificando posicao

        No *Novo = malloc(sizeof(No));   
        Novo->valor = valor;
        Novo->prox = NULL;
        Novo->ant = NULL;

        if(inicio == NULL){ //lista vazia (Constante)
            inicio = Novo;
            fim = Novo;

        }else if(posicao == 0){         //adicionar no inicio (Constante)
            Novo->prox = inicio;        //Novo aponta pro inicio da lista
            inicio->ant = Novo;         //Ponteiro ant do Inicio aponta para o Novo que sera incerido em posicao -1
            inicio = Novo;              //inicio aponta pro Novo (agora o inicio da lista)

        }else if(posicao == tamanho){   //adicionar no fim (Constante)
            fim->prox = Novo;           //proximo laço depois do fim é o Novo
            Novo->ant = fim;            //Novo->ant vai ser apontar pro ultimo da lista
            fim = Novo;                 //fim agora é o novo adicionado

        }else{                          //adicionar no meio-fim (Linear)
            No *aux = inicio;
            for(int i = 0; i < posicao; i++){   //aux na exata posicao pedida
                aux = aux->prox;
            }                          
            Novo->prox = aux;          //Novo->prox aponta para o No da posicao desejada tornando ele o proximo No
            Novo->ant = aux->ant;      //Novo->ant aponta para o No anterior a ele de endereço aux->ant
            aux->ant->prox = Novo;     //o ->prox do No anterior ao Aux agora vai apontar para Novo
            aux->ant = Novo;           //aux->ant aponta para seu novo No anterior
        }
        tamanho++;
    }

}

int remover(int posicao){

    int retorno = -1;
    if(posicao >= 0 && posicao < tamanho){
        if(posicao == 0){                   //Remover do inicio (Constante)
            No *lixo = inicio;
            retorno = inicio->valor;   //armazena o valor
            inicio = inicio->prox;     //atualiza o inicio para o ->prox
            inicio->ant = NULL;        //atualiza o ->ant do novo inicio
            free(lixo);
        }else if(posicao = tamanho - 1){    //remover fim (Constante)
            No *lixo = fim;
            retorno = lixo->valor;     //armazena valor
            fim->ant->prox = NULL;     //penultimo No aponta pra NULL
            fim = fim->ant;            //
            free(lixo);    
        }else{                              //remover meio (Linear)
            No *aux = inicio;   
            for(int i = 0; i < posicao; i++){  //aux na exata posiçao pedida
                aux=aux->prox;
            }
            retorno = aux->valor;           //armazena valor
            aux->ant->prox = aux->prox;     //->prox do No anterior liga com No posterior a aux
            aux->prox->ant = aux->ant;      //->ant do No posteiror liga com No anterior a aux
            free(aux);
        }
        tamanho--;
    }

    return retorno;
}

/* ==== Funções de Imprimir Dados da lista Recursivamente ==== */

int imprimir_Recursivo_direto(No *aux){
    if(tamanho = 0) return 0;
    else if(aux != NULL){
        printf("%d\n", aux->valor);
        imprimir_Recursivo_direto(aux->prox);
    }
}

void imprimir_Reverso_Recursivo(No *aux){
    if(tamanho = 0) return 0;
    else if(aux != NULL){
        imprimir_Reverso_Recursivo(aux->prox);
        printf("%d\n", aux->valor);
        
    }
}

int main(){
    adicionar(10, 0);
    adicionar(20, 1);
    adicionar(30, 2);
    adicionar(40, 3);
    adicionar(50, 4);
    remover(4);
    imprimir_Recursivo_direto(inicio);
    return 0;
}