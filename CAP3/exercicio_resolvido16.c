//#include <stdio.h>

int main()
{
    //set variables 
    int horas_trabalhadas;
    int salario;
    
    //enter values
    scanf("%d", &horas_trabalhadas);
    scanf("%d", &salario);
    
    //set variables
    double valor_h_trabalhada;
    double salario_bruto;
    double imposto;
    double salario_receber;
    
    valor_h_trabalhada = salario/2;
    salario_bruto = horas_trabalhadas * valor_h_trabalhada;
    imposto = salario * 3/100;
    salario_receber = salario_bruto - imposto;
    
    //print resoults 
    printf("Salario a receber %2.f", salario_receber);
    
    return 0;
}