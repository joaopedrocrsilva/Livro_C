//#include <stdio.h>

int main()
{
    //declara variaveis
    int salario;
    double aumento;
    
    //recebe valor
    scanf("%d", &salario);
    
    //variavel
    aumento = salario * 1.25;
    
    //imprimi resultado
    printf("Novo salario com aumento %2.f", aumento);
    
    
    
    return 0;
}
