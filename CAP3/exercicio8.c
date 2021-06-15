//#include <stdio.h>

int main()
{
    //set variables
    int peso;
    
    //enter values
    scanf("%d", &peso);
    
    //set variables
    double peso_gramas;
    
    peso_gramas = peso * 1000;
    
    //print results
    printf("O peso em gramas é %2.f", peso_gramas);
    return 0;
}
