//#include <stdio.h>
//#include <math.h>

int main()
{
    //set variables
    int nota1;
    int nota2;
    
    //enter value
    scanf("%d", &nota1);
    scanf("%d", &nota2);
    
    //set variables
    double soma;
    double media;
    
    soma = nota1 + 2 + nota2 + 3;
    media = soma/2;
    
    //print results
    printf("Média das Notas: %f", media);

}