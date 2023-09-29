#include <stdio.h>

int main(){
    int v1, v2;

    int armazenador;

    scanf("%d", &v1);
    scanf("%d", &v2);

    if(v1 == v2){
        printf("Os dois valores sao iguais\n");
    }else if(v1 > v2){
        printf("%d maior que %d\n",v1, v2);
        armazenador = v1;
    }else if(v1 < v2){
        printf("%d maior que %d\n",v2, v1);
         armazenador = v2;
    }

    if(armazenador == v1){
        if(v1 % v2 == 0){
            printf("%d e multiplo de %d\n", v1, v2);
        }else{
            printf("%d nao e multiplo de %d\n", v1, v2);
        }
    }

    if(armazenador == v2){
        if(v1 % v2 == 0){
            printf("%d eh multiplo de %d\n", v2, v1);
        }else{
            printf("%d nao eh multiplo de %d\n", v2, v1);
        }
    }
    
    return 0;
}