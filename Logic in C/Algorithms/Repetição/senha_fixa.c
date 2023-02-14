#include <stdio.h>

int main(){

    int senha;

    printf("Digite a senha: ");
    scanf("%d", &senha);

    while(senha != 2002){
        printf("Senha Invalida! Tente novamente: ");
        canf("%d", &senha);
    }
    printf("Acesso Permitido");
    
    return 0;
}