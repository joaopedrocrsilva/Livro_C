//#include <stdio.h>
//#include <math.h>

int main(){
    //set variables
    int nota1;
    int nota2;
    int nota3;
    int nota4;

    //enter values
    printf("Digite a primeira nota: ");
    scanf("%d", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%d", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%d", &nota3);
    printf("Digite a quarta nota: ");
    scanf("%d", &nota4);

    //set variables
    double media;

    media = (nota1 + nota2 + nota3 + nota4)/4;

    //set coditions
    if(media < 7){
        printf("Reprovado");
    }
    else{
        printf("Aprovado");
    }

    return 0;
}