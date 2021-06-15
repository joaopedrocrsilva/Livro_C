//#include <stdio.h>
//#include <math.h>

int main()
{
    //set variables
    float trabalho_lab;
    float aval_simestral;
    float exame_final;

    //enter values
    printf("Digite a nota do Trabalho de Laboratorio:");
    scanf("%f", &trabalho_lab);
    printf("Digite a nota da Avaliação Semestral");
    scanf("%f", &aval_simestral);
    printf("Digite a nota do Exame Final");
    scanf("%f", &exame_final);

    //set variables
    double media;

    media = (trabalho_lab * 2 + aval_simestral * 3 + exame_final * 5)/10;

    //print results
    printf("A média das notas foi de %f", media);

    //condition 
    if(media >= 8 && media <= 10){
        printf("\nObteve conceito A");
    }
    if(media >=7 && media <8){
        printf("\nObteve conceito B");
    }
    if(media >= 6 && media < 7){
        printf("\nObteve conceito C");
    }
    if(media >= 5 && media < 6){
        printf("\nObteve conceito D");
    }
    if(media >= 0 && media < 5){
        printf("\nObteve conceito E");
    }

    return 0;

}