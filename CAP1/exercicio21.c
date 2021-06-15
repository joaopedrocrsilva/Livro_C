//#include <stdio.h>
//#include <math.h>

int main()
{
    //set variables
    int num_horas_trabalhadas;
    int salario_minimo;
    int num_horas_extras;

    //enter values
    scanf("%d", &num_horas_trabalhadas);
    scanf("%d", &salario_minimo);
    scanf("%d", &num_horas_extras);

    //set variables
    double valor_hora_trabalhada;
    double valor_hora_extra;
    double salario_bruto;
    double valor_recebido_extra;
    double salario_total;

    valor_hora_trabalhada = salario_minimo / 8;
    valor_hora_extra = salario_minimo / 4;

    salario_bruto = num_horas_trabalhadas * valor_hora_trabalhada;
    valor_recebido_extra = num_horas_extras * valor_hora_extra;
    salario_total = salario_bruto + valor_recebido_extra;

    //print results
    printf("Salario Total: %f", salario_total);
    
    return 0;
}