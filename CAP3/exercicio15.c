//#include <stdio.h>

int main()
{
    //set variables
    int salario;
    int conta1;
    int conta2;

    //enter values
    scanf("%d", &salario);
    scanf("%d", &conta1);
    scanf("%d", &conta2);

    //set variables
    double conta1_multa;
    double conta2_multa;
    double conta1_mais_multa;
    double conta2_mais_multa;
    double resto_salario;

    conta1_multa = conta1 * 2/100;
    conta2_multa = conta2 * 2/100;

    conta1_mais_multa = conta1 + conta1_multa;
    conta2_mais_multa = conta2 + conta2_multa;

    resto_salario = salario - conta1_mais_multa - conta2_mais_multa;

    //print results
    printf("O que restou do salario: %2.f", resto_salario);

    return 0;
}
