//#include <stdio.h>
//#include <math.h>

int main(){
    //set variables
    int angulo1;
    int angulo2;

    //enter values
    scanf("%d", &angulo1);
    scanf("%d", &angulo2);

    //set variables
    double medida_terceiro_angulo;

    medida_terceiro_angulo = 180 - (angulo1 + angulo2);

    //print results
    printf("Medida Terceiro Angulo: %f", medida_terceiro_angulo);

    return 0;
    
}