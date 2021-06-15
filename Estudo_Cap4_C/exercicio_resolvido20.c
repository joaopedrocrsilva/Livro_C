//#include <stdio.h>
//#include <math.h>

int main(){
    //set variables
    int codigo_produto;
    int peso_produto;
    int codigo_pais;

    //enter values
    printf("Digite o código do produto: ");
    scanf("%d", &codigo_produto);
    printf("Digite o peso do produto em quilos: ");
    scanf("%d", &peso_produto);
    printf("Digite o código do país: ");
    scanf("%d", &codigo_pais);

    //set variables
    double peso_gramas;
    double preco_total;
    double valor_imposto;
    double valor_total;

    peso_gramas = peso_produto * 1000;

    //set codition
    if(codigo_produto >= 1 && codigo_produto <= 4){
        if(codigo_pais == 1){
            preco_total = peso_gramas * 10;
            valor_imposto = 0;
            valor_total = preco_total + valor_imposto;

            printf("O peso do produto em gramas é: %2.f", peso_gramas);
            printf("\nO Preço total: %2.f", preco_total);
            printf("\nValor do imposto: %2.f", valor_imposto);
            printf("\nValor total: %2.f", valor_total);

        }
        if(codigo_pais == 2){
            preco_total = peso_gramas * 10;
            valor_imposto = preco_total * 15/100;
            valor_total = preco_total + valor_imposto;

            printf("O peso do produto em gramas é: %2.f", peso_gramas);
            printf("\nO Preço total: %2.f", preco_total);
            printf("\nValor do imposto: %2.f", valor_imposto);
            printf("\nValor total: %2.f", valor_total);
            
        }
        if(codigo_pais == 3){
            preco_total = peso_gramas * 10;
            valor_imposto = preco_total * 25/100;
            valor_total = preco_total + valor_imposto;

            printf("O peso do produto em gramas é: %2.f", peso_gramas);
            printf("\nO Preço total: %2.f", preco_total);
            printf("\nValor do imposto: %2.f", valor_imposto);
            printf("\nValor total: %2.f", valor_total);

        }
    }

    if(codigo_produto >= 5 && codigo_produto <= 7){
        if(codigo_pais == 1){
            preco_total = peso_gramas * 25;
            valor_imposto = 0;
            valor_total = preco_total + valor_imposto;

            printf("O peso do produto em gramas é: %2.f", peso_gramas);
            printf("\nO Preço total: %2.f", preco_total);
            printf("\nValor do imposto: %2.f", valor_imposto);
            printf("\nValor total: %2.f", valor_total);

        }
        if(codigo_pais == 2){
            preco_total = peso_gramas * 25;
            valor_imposto = preco_total * 15/100;
            valor_total = preco_total + valor_imposto;

            printf("O peso do produto em gramas é: %2.f", peso_gramas);
            printf("\nO Preço total: %2.f", preco_total);
            printf("\nValor do imposto: %2.f", valor_imposto);
            printf("\nValor total: %2.f", valor_total);
            
        }
        if(codigo_pais == 3){
            preco_total = peso_gramas * 25;
            valor_imposto = preco_total * 25/100;
            valor_total = preco_total + valor_imposto;

            printf("O peso do produto em gramas é: %2.f", peso_gramas);
            printf("\nO Preço total: %2.f", preco_total);
            printf("\nValor do imposto: %2.f", valor_imposto);
            printf("\nValor total: %2.f", valor_total);

        }
    }


    if(codigo_produto >= 8 && codigo_produto <= 10){
        if(codigo_pais == 1){
            preco_total = peso_gramas * 10;
            valor_imposto = 0;
            valor_total = preco_total + valor_imposto;

            printf("O peso do produto em gramas é: %2.f", peso_gramas);
            printf("\nO Preço total: %2.f", preco_total);
            printf("\nValor do imposto: %2.f", valor_imposto);
            printf("\nValor total: %2.f", valor_total);

        }
        if(codigo_pais == 2){
            preco_total = peso_gramas * 10;
            valor_imposto = preco_total * 15/100;
            valor_total = preco_total + valor_imposto;

            printf("O peso do produto em gramas é: %2.f", peso_gramas);
            printf("\nO Preço total: %2.f", preco_total);
            printf("\nValor do imposto: %2.f", valor_imposto);
            printf("\nValor total: %2.f", valor_total);
            
        }
        if(codigo_pais == 3){
            preco_total = peso_gramas * 10;
            valor_imposto = preco_total * 25/100;
            valor_total = preco_total + valor_imposto;

            printf("O peso do produto em gramas é: %2.f", peso_gramas);
            printf("\nO Preço total: %2.f", preco_total);
            printf("\nValor do imposto: %2.f", valor_imposto);
            printf("\nValor total: %2.f", valor_total);

        }
    }

    return 0;
}