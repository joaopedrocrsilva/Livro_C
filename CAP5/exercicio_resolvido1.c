//#include <stdio.h>
//#include <math.h>

int main(){
    //set variables
    int i;
    int ano_atual;
    float novo_salario;
    float salario;
    float percentual;

    //enter values
    printf("Digite o ano atual: ");
    scanf("%d", &ano_atual);

    //set variables
    salario = 1000;
    percentual = 1.5/100;
    novo_salario = salario + (percentual * salario);
   


    //set estructure
    for(i = 2007; i <= ano_atual; i++){
        percentual = 2 * percentual;
        novo_salario = novo_salario + (percentual * novo_salario);
    }

    printf("Novo salario: %2.f", novo_salario);

    return 0;

}