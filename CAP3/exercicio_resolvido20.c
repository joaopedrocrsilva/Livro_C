//#include <stdio.h>
//#include <math.h>

int main()
{
    //set variables
    int angulo;
    int altura;
    
    //enter values
    scanf("%d", &angulo);
    scanf("%d", &altura);

    //set variables
    double radiano;
    double escada;
    
    radiano = angulo * 3.14/180;
    escada = altura / sin(radiano);

    //print results 
    printf("A medida da escada é %2.f",escada);

    return 0;
}