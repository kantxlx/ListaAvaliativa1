#include <stdio.h>

int main(){
    char experiencia;
    float salario_atual, salario_aumento;
    
    scanf("%c", &experiencia);
    scanf("%f", &salario_atual);
    
    if(experiencia == 'a'){
        salario_aumento = salario_atual + (salario_atual * 0.05);
    }else if(experiencia == 'b'){
        salario_aumento = salario_atual + (salario_atual * 0.07);
    }else if(experiencia == 'c'){
        salario_aumento = salario_atual + (salario_atual * 0.08);
    }

    printf("R$ %.2f", salario_aumento);

    return 0;

    
}