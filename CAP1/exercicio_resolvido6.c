//#include <stdio.h>

int main()
{
    //set variables
    int salario_base;
    
    //enter values
    scanf("%d", &salario_base);
    
    //set variables
    double gratificacao;
    double imposto;
    double salario_final;
    
    gratificacao = salario_base * 0.05;
    imposto = salario_base * 0.07;
    
    salario_final = salario_base + gratificacao - imposto;
    
    //print values
    printf("Salario Final %2.f", salario_final);
    
    
    return 0;
}