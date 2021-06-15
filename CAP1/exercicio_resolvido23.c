//#include <stdio.h>
//#include <math.h>

int main()
{
    //set variable
    float num;
    
    //enter values
    scanf("%f", &num);
    
    //set variables
    double inteiro;
    double fracao;
    double arredondamento;

    fracao = modf(num, &inteiro);
    arredondamento = ceil(num);
    
    //print values
    printf("Parte inteira do número: %2.f", inteiro);
    printf("\nParte fracionada: %f", fracao);
    printf("\nNúmero arrendodado: %f", arredondamento);
    
    return 0;
    
}