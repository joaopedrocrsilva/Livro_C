//#include <stdio.h>

int main()
{
    //set variables 
    int preco;
    int perc_lucro;
    int perc_imp;
    
    //enter values
    scanf("%d", &preco);
    scanf("%d", &perc_lucro);
    scanf("%d", &perc_imp);
    
    //set values to variables
    double lucro_destr;
    double valor_impostos;
    double preco_final;
    
    lucro_destr = preco * perc_lucro/100;
    valor_impostos = preco * perc_imp/100;
    preco_final = preco + lucro_destr + valor_impostos;
    
    //print results
    printf("Lucro Da Destribuidora %2.f", lucro_destr);
    printf("\nValor Imposto %2.f", valor_impostos);
    printf("\nPreço Final %2.f", preco_final);
    
    

    return 0;
}