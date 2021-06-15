//#include <stdio.h>

int main()
{
    //set variables
    int base_maior;
    int base_menor;
    int altura;
    
    //enter values
    scanf("%d", &base_maior);
    scanf("%d", &base_menor);
    scanf("%d", &altura);
    
    //set variables
    double area;
    
    area = ((base_maior + base_menor) * altura)/2;
    
    //print results
    printf("A aréa é: %2.f", area);
    return 0;
}
