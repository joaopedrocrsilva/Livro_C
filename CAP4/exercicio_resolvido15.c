//#include <stdio.h>
//#include <math.h>

int main(){
    //set variables
    int salario_minimo;
    int num_horas_trab;
    int num_dependetes;
    int num_horas_extras;

    //enter values
    printf("Digite seu salário minímo: ");
    scanf("%d", &salario_minimo);
    printf("Digite o número de horas trabalhadas: ");
    scanf("%d", &num_horas_trab);
    printf("Digite o número de dependentes: ");
    scanf("%d", &num_dependetes);
    printf("Digite o número de horas extras trabalhadas: ");
    scanf("%d", &num_horas_extras);

    //set variables
    double salario_final;
    double valor_hora;
    double salario_mes;
    double depedentes;
    double valor_hora_extra;
    double valor_fim_hora_extra;
    double salario_bruto;
    double imposto;
    
    valor_hora = salario_minimo * 1/5;
    salario_mes = num_horas_trab * valor_hora;
    depedentes = num_dependetes * 32;
    valor_hora_extra = valor_hora * 50/100;
    valor_fim_hora_extra = valor_hora + valor_hora_extra;
    salario_bruto = salario_mes + depedentes + valor_fim_hora_extra;

    //set coditions

    if(salario_bruto < 200){
        imposto = 0;
    }
    if(salario_bruto >= 200 && salario_bruto <= 500){
        imposto = salario_bruto *10/100;
    }
    if(salario_bruto > 500){
        imposto = salario_bruto * 20/100;
    }

    //set variables
    double salario_liquido;
    double gratificacao;

    salario_liquido = salario_bruto - imposto;

    //set coditions
    if(salario_liquido <= 350){
        gratificacao = 100;
    }
    if(salario_liquido > 350){
        gratificacao = 50;
    }

    salario_final = salario_liquido + gratificacao;

    //print results

    printf("O salário a receber é de: %2.f", salario_final);

    return 0;

}