//#include <stdio.h>
//#include <math.h>

int main()
{
    //set variables
    int numero_lados;

    //enter values
    scanf("%d", &numero_lados);

    //set variables
    double numero_diagonais;

    numero_diagonais = numero_lados * (numero_lados - 3)/2;
    
    //print results
    printf("Número de Diagonais: %f", numero_diagonais);
    return 0;

}