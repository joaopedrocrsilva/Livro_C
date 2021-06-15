//#include <stdio.h>

int main()
{
    //declara os valores
    int a;
    int b;
    int c;
    int d; 
    
    //recebe os valores
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    
    //declara variavel soma
    double soma;
    
    soma = (a + b + c + d);
    
    //imprimi o resultado
    printf("Soma %2.f", soma);
    

    return 0;
}