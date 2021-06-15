//#include <stdio.h>

int main()
{
    //set variables
    int ano_nascimento;
    int ano_atual;

    //enter values
    scanf("%d", &ano_nascimento);
    scanf("%d", &ano_atual);

    //set variables
    double idade_anos;
    double idade_meses;
    double idade_dias;
    double idade_semanas;

    idade_anos = ano_atual - ano_nascimento;
    idade_meses = idade_anos * 12;
    idade_dias = idade_anos * 365;
    idade_semanas = idade_anos * 52.1429;

    //print results
    printf("Idade em anos: %2.f", idade_anos);
    printf("\nIdade em meses: %2.f", idade_meses);
    printf("\nIdade em dias: %2.f", idade_dias);
    printf("\nIdade em semanas: %2.f", idade_semanas);

    

    return 0;
}
