//#include <stdio.h>
//#include <math.h>


int main()
{
    //set variables
    int medida_pe;
    
    //enter values
    scanf("%d", &medida_pe);
    
    //set variables
    double polegadas;
    double jardas;
    double milhas;
    
    polegadas = medida_pe * 12;
    jardas = medida_pe/3;
    milhas = medida_pe/1.760;
    
    //print results 
    printf("A médida de %d em polegadas é %2.f", medida_pe,polegadas);
    printf("\nA médida de %d em jardas é %2.f", medida_pe,jardas);
    printf("\nA médida de %d em milhas é %2.f", medida_pe,milhas);
    

    return 0;
}