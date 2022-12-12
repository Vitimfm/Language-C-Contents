#include <stdio.h>
#include <stdlib.h>

//MODELO DE EXEMPLO

int main(){
   
   	//VariÃ¡veis que podem ser usadas
   	unsigned int x[200];
   	int y;
   	int z;
   	int k;
   	int w;
   	int j;
   	int i;
   	
   	//################################################
   	for(y = 0; y <= 200; y++){
        x[y]=0;
    }
    while(1){
        printf("Valor: ");
        scanf("%d", &k);
        if(k >= 0 && k <= 5000){
            x[k / 32] = x[k / 32] | (1 << (k % 32));
        }else if(k == -1){
            break;
        }else{
            printf("Digite valores validos.\n");
            continue;
        }
    }
   	printf("Valores digitados: \n");
    for(i = 0; i <= 5000; i++){
        if((x[i / 32]) >> (i % 32) & 1){
            printf("%d \n", i);
        }
    }
   	//################################################ 
	return 0;  
}
