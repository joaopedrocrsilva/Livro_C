//#include <stdio.h>

int main()
{
    //set variables
    int salario_base;
    
    //enter values
    scanf("%d", &salario_base);
    
    //set variables
    double imposto;
    double salario_final;
    
    imposto = salario_base * 0.10;
    salario_final = salario_base + 50 - imposto; 
    
    //print results
    printf("salario final %2.f", salario_final);

    return 0;
}
