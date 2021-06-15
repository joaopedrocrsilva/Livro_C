//#include <stdio.h>

int main()
{
    //declaração variaveis 
    int nota1;
    int nota2;
    int nota3;
    int peso1;
    int peso2;
    int peso3;

    
    //recebe valores
    scanf("%d", &nota1);
    scanf("%d", &nota2);
    scanf("%d", &nota3);
    scanf("%d", &peso1);
    scanf("%d", &peso2);
    scanf("%d", &peso3);
    
    //declara media
    double media;
        
    media = (nota1*peso1 + nota2*peso2 + nota3*peso3)/(peso1+peso2+peso3);
    
    //imprimi media
    printf("media %2.f", media);
    
    return 0;
}
