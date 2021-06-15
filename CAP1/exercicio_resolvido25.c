//#include <stdio.h>
//#include <math.h>

int main()
{
    //set varibles
    float custo;
    float preco_convite;
    
    //enter values
    scanf("%f", &custo);
    scanf("%f", &preco_convite);

    //set variables
    double quantidade_ingressos;
    quantidade_ingressos = custo/preco_convite;
    
    //print results
    printf("A Quantidade de ingressos necessarias para que o custo seja 0 é de: %2.f", quantidade_ingressos);

    
    
}