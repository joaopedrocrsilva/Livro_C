//#include <stdio.h>

int main()
{
    //set variables
    int base;
    int altura;
    
    //enter values
    scanf("%d", &base);
    scanf("%d", &altura);
    
    //set variables
    double area_triangulo;
    
    area_triangulo = (base*altura)/2;
    
    //print values/results
    
    printf("Aréa Triangulo: %2.f", area_triangulo);
    
    
    return 0;
    
}