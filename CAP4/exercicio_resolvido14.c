//#include <stdio.h>
//#include <math.h>

int main(){

    //set variables
    int salario_inicial;
    double bonificacao;
    double novo_salario;
    double auxilio;


    //enter values
    printf("Digite seu salário: ");
    scanf("%d", &salario_inicial);
    
    //set codition 
    if(salario_inicial <= 500){
        bonificacao = salario_inicial * 5/100;
        novo_salario = salario_inicial + bonificacao;
        printf("Novo salario: %2.f", novo_salario);
    }
    if (salario_inicial > 500 && salario_inicial <= 1200){
        bonificacao = salario_inicial * 12/100;
        novo_salario = salario_inicial + bonificacao;
        printf("Novo salário: %2.f", novo_salario);
    }
    if(salario_inicial > 1200){
        printf("Novo salário: %2.f", novo_salario);
    }

    if(salario_inicial <= 600){
        auxilio = novo_salario + 150;
        printf("\nNovo salário após o auxilio: %2.f", auxilio);
    }
    if(salario_inicial > 600){
        auxilio = novo_salario + 100;
        printf("\nNovo salário após o auxilio: %2.f", auxilio);
    }
    return 0;
}