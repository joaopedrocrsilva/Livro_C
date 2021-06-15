//#include <stdio.h>

int main()
{
    //set variables
    int salario;
    int cheque1;
    int cheque2;
    
    //enter values
    scanf("%d", &salario);
    scanf("%d", &cheque1);
    scanf("%d", &cheque2);
    
    //set variables
    double cpmf1;
    double cpmf2;
    double saldo_atual;
    
    cpmf1 = cheque1 * 0.38/100;
    cpmf2 = cheque2 * 0.38/100;
    saldo_atual = salario - cheque1 - cheque2 - cpmf1 - cpmf2;
    
    //print results 
    printf("Saldo atual: %f", saldo_atual);
    
    return 0;
}