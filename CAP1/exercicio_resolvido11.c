//#include <stdio.h>
//#include <math.h>


int main()
{
    //set variables
    int numero_positivo;
    
    //enter values
    scanf("%d", &numero_positivo);
    
    //set variables
    double quadrado;
    double cubo;
    double raiz_quadrada;
    double raiz_cubica;
    
    quadrado = pow(numero_positivo,2);
    cubo = pow(numero_positivo,3);
    raiz_quadrada = sqrt(numero_positivo);
    raiz_cubica = pow(numero_positivo,1.0/3.0);
    
    //print results
    printf("Quadrado de %d é %2.f",numero_positivo,quadrado);
    printf("\nCubo de %d é %2.f",numero_positivo,cubo);
    printf("\nRaiz quadrada de %d é %2.f",numero_positivo,raiz_quadrada);
    printf("\nRaiz cubica de %d é %2.f",numero_positivo,raiz_cubica);


    return 0;
}