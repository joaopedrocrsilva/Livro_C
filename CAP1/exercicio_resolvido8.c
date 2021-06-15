//#include <stdio.h>

int main()
{
    //set variables 
    int valor_deposito;
    int taxa_juros;
    
    //enter values
    scanf("%d", &valor_deposito);
    scanf("%d", &taxa_juros);
    
    //set variables
    double valor_rendimento;
    double valor_final;
    
    valor_rendimento = valor_deposito * taxa_juros/100; 
    valor_final = valor_deposito + valor_rendimento;
    
    //print variables
    printf("valor rendimento %2.f", valor_rendimento);
    
    printf("\nvalor final %2.f", valor_final);
    
    return 0;
    
}