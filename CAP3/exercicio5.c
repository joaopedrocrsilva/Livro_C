//#include <stdio.h>
//#include <math.h>

int main()
{
    //set variables
    int preco;
    
    //enter value
    scanf("%d", &preco);
    
    //set variables
    double desconto;
    double preco_final;
    
    desconto = preco * 10/100;
    preco_final = preco - desconto;
    
    //print results
    printf("Valor do Produto com Desconto: %f", preco_final);
    
 

}