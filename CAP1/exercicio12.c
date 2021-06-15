//#include <stdio.h>

int main()
{
    //set variables
    int salario_minimo;
    int salario;

    //enter values
    scanf("%d", &salario_minimo);
    scanf("%d", &salario);

    //set variables
    double diferenca;

    diferenca = salario/salario_minimo;

    //print results;
    printf("A quantidade de salarios minimos que você ganha é %2.f", diferenca);

    return 0;
}
