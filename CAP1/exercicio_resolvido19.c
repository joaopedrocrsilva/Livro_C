//#include <stdio.h>

int main()
{
    //set variables
    int alt_degrau;
    int alt_alcancar;
    
    //enter values
    scanf("%d", &alt_degrau);
    scanf("%d", &alt_alcancar);
    
    //set variables
    double quantidade_degraus;
    
    quantidade_degraus = alt_alcancar/alt_degrau;

    //print results 
    printf("Quantidade de Degraus para alcançar a altura desejada é %2.f", quantidade_degraus);
    
    
    return 0;
}
