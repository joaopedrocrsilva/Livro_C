//#include <stdio.h>

int main()
{
    //set variables
    int peso_racao;
    int racao_gato1;
    int racao_gato2;
    
    //enter values
    scanf("%d", &peso_racao);
    scanf("%d", &racao_gato1);
    scanf("%d", &racao_gato2);
    
    //set variables
    double gato1;
    double gato2;
    double racao5;
    double total_final;
    
    gato1 = racao_gato1/1000;
    gato2 = racao_gato2/1000;
    total_final =  5 * (gato1 + gato2) - peso_racao;
    
    //print results 
    printf("O peso do saco após 5 dias é de %f", total_final);
    
    return 0;
}