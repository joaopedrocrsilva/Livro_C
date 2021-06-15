//#include <stdio.h>
//#include <math.h>


int main()
{
    //set variables
    int raio;

    //enter values
    scanf("%d", &raio);

    //set variables
    double comprimento_esfera;
    double area_esfera;
    double volume_esfera;

    comprimento_esfera = 2 * 3.14 * raio;
    area_esfera = 3.14 * pow(raio,2);
    volume_esfera = 0.75 * 3.14 * pow(raio,3);

    //print results
    printf("Comprimento da Esfera: %f", comprimento_esfera);
    printf("\nArea da Esfera: %f", area_esfera);
    printf("\nVolume da Esfera: %f", volume_esfera);



    return 0;
}
