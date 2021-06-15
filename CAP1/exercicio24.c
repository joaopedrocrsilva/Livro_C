//#include <stdio.h>
//#include <math.h>

int main()
{
    //set variables
    int valor;

    //enter values
    scanf("%d", &valor);

    //set variables
    double dolar;
    double marco_alemao;
    double libra;

    dolar = valor * 1.80;
    marco_alemao = valor * 2;
    libra = valor * 3.57;

    //print results 
    printf("O valor em Dolar: %f", dolar);
    printf("\nO valor em Marco Alemão: %f", marco_alemao);
    printf("\nO valor em Libras:  %f", libra);

    return 0;
}