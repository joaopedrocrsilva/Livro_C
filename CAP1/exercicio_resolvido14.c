//#include <stdio.h>
//#include <math.h>


int main()
{
    //set variables
    int ano_nascimento;
    int ano_atual;
    
    //enter values
    scanf("%d", &ano_nascimento);
    scanf("%d", &ano_atual);
    
    //set variables
    double idade;
    double idade_futura;
    
    idade = ano_atual - ano_nascimento;
    idade_futura = 2050 - ano_nascimento;
    
    //print results
    printf("Idade atual %2.f", idade);
    printf("\nIdade em 2050 %2.f", idade_futura);
    
    return 0;
}