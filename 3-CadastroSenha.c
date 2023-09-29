#include <stdio.h>

int main(){
    int cadastro_senha,  validacao;

    scanf("%4d", &cadastro_senha);
    printf("senha cadastrada: %d\n", cadastro_senha);

    while (getchar() != '\n');
    
    while(1){

        scanf("%d", &validacao);
        if(validacao == cadastro_senha){
            printf("senha valida!\n");
            break;
        }else{
            printf("senha invalida!\n");
        }
    }

}