//   Arvores Binarias
//Grafos conexos e aciclicos 
//Folhas (Pai / filho)
//Folhas (Grau)
//Elementos menores à esquerda e maior à direita

#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int valor;
    struct no *direito, *esquerdo;     
}NO;

typedef struct{
    NO *raiz;       //ArvB é uma struct que contem um ponteiro do tipo NO que será a raiz
}ArvB;

void addEsquerda(NO *no,int valor){
    if(no->esquerdo == NULL){   //caso não tenha um NO na esquerda
        NO *novo = (NO*) malloc(sizeof(NO));
        novo->valor = valor;
        novo->direito = NULL;
        novo->esquerdo = NULL;
        no->esquerdo = novo;   //novo é criado e adicinado na esquerda
    }else{  //caso tenha um No na esquerda
        if(valor < no->esquerdo->valor){  
            addEsquerda(no->esquerdo, valor);
            //chamada recursiva para adicinonar na esquerda do NO analisado
        }else{                            
            addDireita(no->esquerdo, valor);
            //chamada recursiva para adicinonar na direita do NO analisado
        } 
    }

}

void addDireita(NO *no,int valor){
    if(no->direito == NULL){   //caso não tenha um NO na direita
        NO *novo = (NO*) malloc(sizeof(NO));
        novo->valor = valor;
        novo->direito = NULL;
        novo->esquerdo = NULL;
        no->direito = novo;   //novo é criado e adicinado na esquerda
    }else{  //caso tenha um No na direita
        if(valor < no->direito->valor){  
            addEsquerda(no->direito, valor);
            //chamada recursiva para adicinonar na esquerda do NO analisado
        }else{                            
            addDireita(no->direito, valor);
            //chamada recursiva para adicinonar na direita do NO analisado
        } 
    }
}

void adicionar(ArvB *arv, int valor){
    if(arv->raiz == NULL){
        NO *novo = (NO*) malloc(sizeof(NO));
        novo->valor = valor;
        novo->direito = NULL;
        novo->esquerdo = NULL;
        arv->raiz = novo;           //raiz agora é novo
    }
    else{ //arvore não nula

        if(valor < arv->raiz->valor){  //se valor menor do que o valor do NO raiz, adiciona na esquerda
            addEsquerda(arv->raiz, valor);
        }

        //else(){}  //esse else não será necessario pois adicionaria valores iguais na arvore

        if(valor > arv->raiz->valor){  //se valor maior do que o valor do NO raiz, adiciona na direita
            addDireita(arv->raiz, valor);
        }
    }
}

void imprimirPreOrdem(NO *raiz){
    if(raiz != NULL){
        printf("%d ", raiz->valor);   
        imprimirPreOrdem(raiz->esquerdo);     //chamada recursiva para os No à esquerda
        imprimirPreOrdem(raiz->direito);      //chamada recursiva para os No à direita 
    }
}

void imprimirInOrdem(NO *raiz){
    if(raiz != NULL){
        //imprime os valores de cada No de forma ordenada
        imprimirInOrdem(raiz->esquerdo);     //chamada recursiva para os No à esquerda
        printf("%d ", raiz->valor);   
        imprimirInOrdem(raiz->direito);      //chamada recursiva para os No à direita 
    }
}

void imprimirPosOrdem(NO *raiz){
    if(raiz != NULL){
        imprimirPosOrdem(raiz->esquerdo);     //chamada recursiva para os No à esquerda
        imprimirPosOrdem(raiz->direito);      //chamada recursiva para os No à direita 
        printf("%d ", raiz->valor);   
    }
}        

int tamanho(NO *raiz){
    if(raiz == NULL) return 0; //Sem elementos ou Null == 0; 
    else{
        return 1 + tamanho(raiz->direito) + tamanho(raiz->esquerdo);
        //recursividade para contar cada NO esquerda-direita da arvore
    }
}

int buscar(NO *raiz, int chave){
    if(raiz == NULL) return 0;  //caso não ache na busca
    else{
        if(raiz->valor == chave){  //se for a chave for o mesmo valor contido na raiz;
            return 1;  //caso ache na busca
        }
        else{ //se nao for o valor contido na raiz

            if(chave < raiz->valor){  //"50%" da arvore
                return buscar(raiz->esquerdo, chave);
                //Se chave for menor do que o valor da raiz, anda esquerda da sub-arvore recursivamente
            }
            else{   //"50%" da arvore
                return buscar(raiz->direito, chave);
                //Se chave for maior do que o valor da raiz, anda direita da sub-arvore recursivamente
            }
        }
    }
}

NO* remover(NO *raiz, int chave){
    if(raiz == NULL){  //Não acha o valor a ser removido (raiz nula ou sem valores)
        printf("Valor n encontrado");
        return 0;
    }   
    else{ //raiz não nula
        if(raiz->valor == chave){ //achou a chave a ser removida sendo o mesmo valor da raiz em questão
            if(raiz->esquerdo == NULL && raiz->direito == NULL){  //remoçaõ sem filhos 
                free(raiz);
                return NULL; //retorna NULL após remoção 
            }else{ //remoção com filhos
                if(raiz->direito == NULL || raiz->esquerdo == NULL){ //direito ou esquerdo com filho
                    NO *aux;
                    if(raiz->esquerdo != NULL){     //se o filho for na esquerda
                        aux = raiz->esquerdo;       
                    }else{                          //se o filho for na direita
                        aux = raiz->direito;
                    }
                    free(raiz);  //remove o NO em questao
                    return aux;  //salva o filho 
                }else{ //direito e esquerdo com filhos
                    //vai na sub-arvore esquerda procurar o No mais direita possivel
                    NO *aux = raiz->esquerdo;
                    while(aux->direito != NULL){
                        aux = aux->direito;
                    }
                    //aux sera o No mais a direita da sub-arvore esquerda
                    raiz->valor = aux->valor;  //altera o valor da raiz
                    aux->valor = chave;  //No aux vira uma folha 
                    raiz->esquerdo = remover(raiz->esquerdo, chave);  
                    //remove o aux com a chave pedida recursivamente, agora aux sendo folha
                    return raiz;
                }
            }
        }
        else{ //chave diferente do valor da raiz em questão 
            if(chave < raiz->valor){ //valor da raiz menor que a chave (sub-arvore esquerda)
                raiz->esquerdo = remover(raiz->esquerdo, chave);  
            }else{ //valor da raiz maior que a chave (sub-arvore direita)
                raiz->direito = remover(raiz->direito, chave);
            }  
            // raiz->esquerdo/raiz->direito receberão a remoção no devido lugar
            // (recursivamente) e apontarão para NULL após a remoção do NO pedido
            return raiz;
        }
    }
}

int main(){

    int opcao, valor;
    ArvB arvore;    
    arvore.raiz = NULL; 

    do{
        printf("\n[0] - Sair\n[1] - Adicionar\n[2] - Imprimir\n[3] - Buscar\n[4] - Remover\nEscolha: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 0:
            printf("\nSaindo...\n");
            break;
        case 1:
            printf("Digite um valor: ");
            scanf("%d", &valor);
            adicionar(&arvore, valor);
            break;
        case 2:
            imprimirInOrdem(arvore.raiz);
            printf("\nTamanho da arvore: %d\n", tamanho(arvore.raiz));
            break;
        case 3:
            printf("Valor que deseja buscar: ");
            scanf("%d", &valor);
            printf("Resultado da busca: %d", buscar(arvore.raiz, valor));
            break;
        case 4: 
            printf("Valor que deseja remover: ");
            scanf("%d", &valor);
            remover(arvore.raiz, valor);
            break;

        default:
            printf("\nOpcao Invalida\n");
        }

    }while(opcao != 0);

    return 0;
}