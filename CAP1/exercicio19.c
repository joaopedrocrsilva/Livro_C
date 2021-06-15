//#include <stdio.h>
//#include <math.h>


int main()
{
    //set variables
    int comprimento;
    int largura;

    //enter values
    scanf("%d", &comprimento);
    scanf("%d", &largura);

    //set variables
    double dimensao;
    double potencia;

    dimensao = comprimento * largura;
    potencia = dimensao * 18;

    //print results 
    printf("A potência de Iluminação que deve ser utilizada nesse cômodo é de %f", potencia);

    return 0;
}