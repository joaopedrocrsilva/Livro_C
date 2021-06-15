//#include <stdio.h>

int main()
{
    //declara notas
    int nota1;
    int nota2;
    int nota3;
    
    //recebe as 3 notas
    scanf("%d", &nota1);
    scanf("%d", &nota2);
    scanf("%d", &nota3);
    
    //declara a variavel media
    double media;
    
    media = (nota1 + nota2 + nota3)/3;
    
    //imprimi resultado
    printf("Média das notas %d %d %d é %2.f ", nota1,nota2,nota3,media);
    
    return 0;
}
