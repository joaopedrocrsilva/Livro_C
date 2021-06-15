//#include <stdio.h>
//#include <math.h>


int main()
{
    //set variables
    int numero1;
    int numero2;
    
    //enter values
    scanf("%d", &numero1);
    scanf("%d", &numero2);
    
    //set variables
    double elevado;
    
    elevado = pow(numero1, numero2);
    
    //print results
    printf("O valor de %d elevado à %d é %2.f", numero1,numero2,elevado);


    return 0;
}