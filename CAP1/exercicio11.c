//#include <stdio.h>

int main()
{
    //set variables
    int diagonal_maior;
    int diagonal_menor;

    //enter values
    scanf("%d", &diagonal_maior);
    scanf("%d", &diagonal_menor);

    //set variable
    double area;
    
    area = (diagonal_maior * diagonal_menor)/2;

    //print results
    printf("Area é igual a %2.f", area);


    return 0;
}
