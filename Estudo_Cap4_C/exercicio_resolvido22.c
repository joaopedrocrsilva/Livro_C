//#include <stdio.h>
//#include <math.h>

int main(){
    //set variables
    int salario_base;
    int tempo_servico;

    //enter values
    printf("Digite o salário base: ");
    scanf("%d", &salario_base);
    printf("Digite o tempo de serviço: ");
    scanf("%d", &tempo_servico);


    //set variables
    double imposto;
    double gratificacao;

    //set coditions
    if(salario_base < 200){
        imposto = 0;
        printf("Valor do imposto: %2.f", imposto);
    }
    if(salario_base >= 200 && salario_base <= 450){
        imposto = salario_base * 3/100;
        printf("Valor do imposto: %2.f", imposto);
    }
    if(salario_base > 450 && salario_base < 750){
        imposto = salario_base * 8/100;
        printf("Valor do imposto: %2.f", imposto);
    }
    if(salario_base >= 750){
        imposto = salario_base * 12/100;
        printf("Valor do imposto: %2.f", imposto);
    }

    if(salario_base <= 500){
        if(tempo_servico <= 3){
            gratificacao = 23;
            printf("\nValor da gratificação: %2.f", gratificacao);
        }
        if(tempo_servico > 3 && tempo_servico <= 6){
            gratificacao = 35;
            printf("\nValor da gratificação: %2.f", gratificacao);
        }
        if(tempo_servico > 6){
            gratificacao = 33;
            printf("\nValor da gratificação: %2.f", gratificacao);
        }
    }
    if(salario_base > 500){
        if(tempo_servico <= 3){
            gratificacao = 20;
            printf("\nValor da gratificação: %2.f", gratificacao);
        }
        if(tempo_servico >3){
            gratificacao = 30;
            printf("\nValor da gratificacao: %2.f", gratificacao);
        }
    }

    //set variables
    double salario_liquido;

    salario_liquido = salario_base - imposto + gratificacao;

    //set coditions
    if(salario_liquido <= 350){
        printf("\nClassificação: A");
    }
    if(salario_liquido > 350 && salario_liquido <= 600){
        printf("\nClassificação: B");
    }
    if(salario_liquido > 600){
        printf("\nClassificação: C");
    }

    return 0;


}