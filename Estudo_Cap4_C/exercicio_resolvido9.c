//#include <stdio.h>
//#include <math.h>

int main(){
    //set variables
    float dia;
    float mes;
    float ano;
    float hora;
    float minuto;

    //enter values
    printf("Digite o dia: ");
    scanf("%f", &dia);
    printf("Digite o mês: ");
    scanf("%f", &mes);
    printf("Digite o ano: ");
    scanf("%f", &ano);
    printf("Digite a hora: ");
    scanf("%f", &hora);
    printf("Digite o minuto: ");
    scanf("%f", &minuto);

    //set coditions
    if(mes == 1){
        printf("Data: %2.f/janeiro/%2.f ", dia, ano);
    }
    if(mes == 2){
        printf("Data: %2.f/fevereiro/%2.f ", dia, ano);
    }
    if(mes == 3){
        printf("Data: %2.f/março/%2.f ", dia, ano);
    }
    if(mes == 4){
        printf("Data: %2.f/abril/%2.f ", dia, ano);
    }
    if(mes == 5){
        printf("Data: %2.f/maio/%2.f ", dia, ano);
    }
    if(mes == 6){
        printf("Data: %2.f/junho/%2.f ", dia, ano);
    }
    if(mes == 7){
        printf("Data: %2.f/julho/%2.f ", dia, ano);
    }
    if(mes == 8){
        printf("Data: %2.f/agosto/%2.f ", dia, ano);
    }
    if(mes == 9){
        printf("Data: %2.f/setembro/%2.f ", dia, ano);
    }
    if(mes == 10){
        printf("Data: %2.f/outubro/%2.f ", dia, ano);
    }
    if(mes == 11){
        printf("Data: %2.f/novembro/%2.f ", dia, ano);
    }
    if(mes == 12){
        printf("Data: %2.f/dezembro/%2.f ", dia, ano);
    }

    printf("\nHora atual: %2.f:%2.f", hora, minuto);

    return 0;
}