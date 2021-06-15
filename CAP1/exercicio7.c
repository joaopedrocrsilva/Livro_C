//#include <stdio.h>

int main()
{
    //set variables
    int peso_atual;
    
    //enter values to variables
    scanf("%d", &peso_atual);
    
    //set variables
    double peso_emagrecer;
    double peso_engordar;
    double porcentagem_emagrecer;
    double porcentagem_engordar;
    
    porcentagem_engordar = peso_atual * 15/100;
    porcentagem_emagrecer = peso_atual * 20/100;
    
    peso_engordar = peso_atual + porcentagem_engordar;
    peso_emagrecer = peso_atual - porcentagem_emagrecer;
    
    //print values
    printf("Peso Novo se Engordar %2.f", peso_engordar);
    printf("Peso Novo se Emagrecer %2.f", peso_emagrecer);
    
    return 0;
}