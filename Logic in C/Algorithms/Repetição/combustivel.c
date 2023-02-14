#include <stdio.h>

int main(){

    int escolha, alcool=0, gasolina=0, diesel=0;

    printf("Informe um codigo (1, 2, 3) ou 4 para parar:");
    scanf("%d", &escolha);
    
    while(escolha != 4){
        printf("Informe um codigo (1, 2, 3) ou 4 para parar:");
        scanf("%d", &escolha);
        
        if(escolha == 1){
            alcool++;
        }else if(escolha == 2){
            gasolina++;
        }else if(escolha == 3){
            diesel++;
        }
    }
    printf("Muito Obrigado \n");
    printf("Alcool = %d\n", alcool);
    printf("Gasolina = %d\n", gasolina);
    printf("Diesel = %d\n", diesel);

    return 0;
}