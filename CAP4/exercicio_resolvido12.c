//#include <stdio.h>
//#include <math.h>

int main(){
    //set variables 
    int codigo;
    int salario;

    //enter values
    printf("Digite o código: ");
    scanf("%d", &codigo);
    printf("Digite o seu salário: ");
    scanf("%d", &salario);

    //set variables
    double aumento1;
    double aumento2;
    double aumento3;
    double aumento4;

    double salario_final1;
    double salario_final2;
    double salario_final3;
    double salario_final4;

    aumento1 = salario * 50/100;
    aumento2 = salario * 35/100;
    aumento3 = salario * 20/100;
    aumento4 = salario * 10/100;

    salario_final1 = salario + aumento1;
    salario_final2 = salario + aumento2;
    salario_final3 = salario + aumento3;
    salario_final4 = salario + aumento4;

    //set coditions;
    if(codigo == 1){
        printf("Cargo: Escriturário. ");
        printf("\nValor do aumento: %2.f", aumento1);
        printf("\nValor salário final: %2.f", salario_final1);
    }
    if(codigo == 2){
        printf("Cargo: Secretário. ");
        printf("\nValor do aumento: %2.f", aumento2);
        printf("\nValor do salário final: %2.f", salario_final2);
    }
    if(codigo == 3){
        printf("Cargo: Caixa. ");
        printf("\nValor do aumento: %2.f", aumento3);
        printf("\nValor do salário final: %2.f", salario_final3);
    }
    if(codigo == 4){
        printf("Cargo: Gerente. ");
        printf("\nValor do aumento: %2.f", aumento4);
        printf("\nValor do salário final: %2.f", salario_final4);
    }
    if(codigo == 5){
        printf("Cargo: Diretor. ");
        printf("\nNão recebe aumento. ");
        printf("\nValor do salário final: %2.d", salario);
    }
        return 0;
}