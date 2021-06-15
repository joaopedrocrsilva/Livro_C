//#include <stdio.h>
//#include <math.h>

int main(){
    //set variables
    int salario_minimo;
    int num_horas_trab;
    char turno;
    char categoria;


    //enter values
    printf("Digite seu salário minímo: ");
    scanf("%d", &salario_minimo);
    printf("Digite o número de horas trabalhadas: ");
    scanf("%d", &num_horas_trab);
    printf("Digite a categoria e turno: ");
    scanf("%c %c", &categoria, &turno);

    //set variables
    double coeficiente;
    double salario_bruto;
    double imposto;
    double gratificacao;
    double aux_alimentacao;

    //set coditions
    if(turno == 'M'){
        coeficiente = salario_minimo * 10/100;
        salario_bruto = num_horas_trab * coeficiente;
        printf("O valor do coeficiente é: %2.f", coeficiente);
        printf("\nO valor do salário bruto: %2.f", salario_bruto);
    }
    if(turno == 'V'){
        coeficiente = salario_minimo * 15/100;
        salario_bruto = num_horas_trab * coeficiente;
        printf("O valor do coeficiente é: %2.f", coeficiente);
        printf("\nO valor do salário bruto: %2.f", salario_bruto);
    }
    if(turno == 'N'){
        coeficiente = salario_minimo * 12/100;
        salario_bruto = num_horas_trab * coeficiente;
        printf("O valor do coeficiente é: %2.f", coeficiente);
        printf("\nO valor do salário bruto: %2.f", salario_bruto);
    }
    
    if(categoria == 'O'){
        if(salario_bruto >= 300){
            imposto = salario_bruto * 5/100;
            printf("\nO valor do imposto é %2.f", imposto);
        }
        if(salario_bruto < 300){
            imposto = salario_bruto * 3/100;
            printf("\nO valor do imposto é %2.f", imposto);
        }
    }
    if(categoria == 'G'){
        if(salario_bruto >= 400){
            imposto = salario_bruto * 6/100;
            printf("\nO valor do imposto é %2.f", imposto);
        }
        if(salario_bruto < 400){
            imposto = salario_bruto * 4/100;
            printf("\nO valor do imposto é %2.f", imposto);
        }
    }

    if(turno == 'N' && num_horas_trab > 80){
        gratificacao = 50;
        printf("\nValor da gratificação: %2.f", gratificacao);
    }
    else{
        gratificacao = 30;
        printf("\nO valor da gratificação: %2.f", gratificacao);
    }

    if(categoria == 'O' && coeficiente <= 25){
        aux_alimentacao = salario_bruto/3;
        printf("\nO valor do auxilio alimentação foi de: %2.f", aux_alimentacao);
    }
    else{
        aux_alimentacao = salario_bruto/2;
        printf("\nO valor do auxilio alimentação foi de: %2.f", aux_alimentacao);
    }

    //set variables
    double salario_liquido;
    salario_liquido = salario_bruto - imposto + gratificacao;

    //print results
    printf("\nO valor do salário liquído é: %2.f", salario_liquido);

    //set coditions
    if(salario_liquido < 350){
        printf("\nMal remunerado");
    }
    if(salario_liquido > 350 && salario_liquido < 600){
        printf("\nNormal");
    }
    if(salario_liquido > 600){
        printf("\nBem remunerado");
    }

    return 0;

}