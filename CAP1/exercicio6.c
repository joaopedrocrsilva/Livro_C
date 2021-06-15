//#include <stdio.h>

int main()
{
    //set variables
    int salario;
    int valor_vendas;
    
    //enter values 
    scanf("%d", &salario);
    scanf("%d", &valor_vendas);
    
    //set variables
    double comissao;
    double salario_total;
    
    comissao = valor_vendas * 4/100;
    salario_total = salario + comissao;
    
    //print results
    
    printf("O salário total é %2.f ",salario_total);

    return 0;
}
