#include <stdio.h>

int main(){
    int n1, soma = 0;
    scanf("%d", &n1);

    int armazenamento = n1;

    if(n1 % 2 == 0){
        printf("%d e par\n", n1);
    }else{
        printf("%d e impar\n", n1);
    }

    while (n1 > 0) {
        int digito = n1 % 10;
        soma += digito;
        n1 /= 10;
    }

    printf("A soma dos numero de %d e igual a %d\n", armazenamento, soma);


    return 0;
}