//#include <stdio.h>
//#include <math.h>

int main(){
    //set variables
    int codigo;
    int salario;


    //enter values
    printf("Digite o salário: ");
    scanf("%d", &salario);
    printf("Escolha uma das opções: ");
    printf("\n1- Imposto");
    printf("\n2- Novo salário");
    printf("\n3- Classificação");
    printf("\nDigite o código: ");
    scanf("%d", &codigo);

    //set variables
    double imposto;
    double novo_salario;

    //set codition
    if (codigo == 1){
        if(salario < 500){
            imposto = salario * 5/100;
            printf("Valor imposto: %2.f", imposto);
        }
        if(salario >= 500 && salario <= 850){
            imposto = salario * 10/100;
            printf("Valor imposto: %2.f", imposto);
        }
        if(salario > 850){
            imposto = salario * 15/100;
            printf("Valor imposto: %2.f", imposto);
        }
    }
    if (codigo == 2){
        if(salario < 450){
            novo_salario = salario + 100;
            printf("Novo salário: %2.f", novo_salario);
        }
        if(salario >= 450 && salario <= 750){
            novo_salario = salario + 75;
            printf("Novo salário: %2.f", novo_salario);
        }
        if(salario >= 750 && salario <= 1500){
            novo_salario = salario + 50;
            printf("Novo salário: %2.f", novo_salario);
        }
        if(salario > 1500){
            novo_salario = salario + 25;
            printf("Novo salário: %2.f", novo_salario);
        }
    }

    if(codigo == 3){
        if(salario < 700){
            printf("Mal remunerado");
        }
        if(salario > 700){
            printf("Bem remunerado");
        }
    }
    return 0;
}