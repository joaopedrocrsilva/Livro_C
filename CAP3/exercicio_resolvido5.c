//#include <stdio.h>

int main()
{
    //declara variaveis
    int salario;
    int percentual;
    
    //recebe valores
    scanf("%d", &salario);
    scanf("%d", &percentual);
    
    //declara 
    double salario_final;
    double aumento;
    
    aumento = salario *percentual/100;
    salario_final = salario + aumento;
    
    //imprimi valores
    printf("O salario com aumento é %2.f ", salario_final);
    
    
    
    
    return 0;
}