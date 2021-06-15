//#include <stdio.h>
//#include <math.h>

int main()
{
    //set variables
    int cateto_menor;
    int cateto_maior;

    //enter values
    scanf("%d", &cateto_menor);
    scanf("%d", &cateto_maior);

    //set variables
    double hipotenusa;
    double valor_hipotenusa;

    hipotenusa = pow(cateto_menor,2) + pow(cateto_maior,2);
    valor_hipotenusa = sqrt(hipotenusa);

    //print results
    printf("Valor da Hipotenusa é: %f", valor_hipotenusa);


    return 0;
}
