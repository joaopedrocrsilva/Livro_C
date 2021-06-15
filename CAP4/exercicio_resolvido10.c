//#include <stdio.h>
//#include <math.h>

int main()
{
    //set variables
    float dia1;
    float mes1;
    float ano1;
    float dia2;
    float mes2;
    float ano2;

    //enter values
    printf("Digite a primeira data: ");
    printf("\n Dia: ");
    scanf("%f", &dia1);
    printf("\n Mês: ");
    scanf("%f", &mes1);
    printf("\n Ano: ");
    scanf("%f", &ano1);

    printf("Digite a segunda data:");
    printf("\nDia: ");
    scanf("%f", &dia2);
    printf("Mês: ");
    scanf("%f", &mes2);
    printf("Ano: ");
    scanf("%f", &ano2);

    //set coditions
    if (ano1 > ano2)
    {
        printf("A data maior: %2.f/%2.f/%2.f", dia1, mes1, ano1); 
    }
    
    else if (ano2 > ano1){
        printf("A data maior: %2.f/%2.f/%2.f", dia2, mes2, ano2);
    }

    if (mes1 > mes2){
         printf("A data maior: %2.f/%2.f/%2.f", dia1, mes1, ano1);
    }
    else if (mes2 > mes1){
        printf("A data maior: %2.f/%2.f/%2.f", dia2, mes2, ano2);
    }

    if (dia1 > dia2){
        printf("A data maior: %2.f/%2.f/%2.f", dia1, mes1, ano1);
    }
    else if (dia2 > dia1){
        printf("A data maior: %2.f/%2.f/%2.f", dia2, mes2, ano2);
    }

    else{
        printf("As datas são iguais");
    }

    return 0;
}
