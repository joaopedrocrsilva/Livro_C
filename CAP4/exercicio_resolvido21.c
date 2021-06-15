//#include <stdio.h>
//#include <math.h>

int main(){
    //set variables 
    int codigo_estado;
    int peso_carga;
    int codigo_carga;

    //enter values
    printf("Digite o código do estado: ");
    scanf("%d", &codigo_estado);
    printf("Digite o peso da carga: ");
    scanf("%d", &peso_carga);
    printf("Digite o código da carga: ");
    scanf("%d", &codigo_carga);

    //set variables
    double peso_quilos;
    double preco_carga;
    double valor_imposto;
    double valor_total;

    peso_quilos = peso_carga * 1000;

    //set coditions
    if(codigo_carga >= 10 && codigo_carga <= 20){
        if(codigo_estado == 1){
            preco_carga = peso_quilos * 100;
            valor_imposto = preco_carga * 35/100;
            valor_total = preco_carga + valor_imposto;

            printf("O peso da carga: %2.f", peso_quilos);
            printf("\nO preço da carga:  %2.f", preco_carga);
            printf("\nO valor do imposto: %2.f", valor_imposto);
            printf("\nO valor total: %2.f", valor_total);
        }
        if(codigo_estado == 2){
            preco_carga = peso_quilos * 100;
            valor_imposto = preco_carga * 25/100;
            valor_total = preco_carga + valor_imposto;

            printf("O peso da carga: %2.f", peso_quilos);
            printf("\nO preço da carga:  %2.f", preco_carga);
            printf("\nO valor do imposto: %2.f", valor_imposto);
            printf("\nO valor total: %2.f", valor_total);
        }
        if(codigo_estado == 3){
            preco_carga = peso_quilos * 100;
            valor_imposto = preco_carga * 15/100;
            valor_total = preco_carga + valor_imposto;

            printf("O peso da carga: %2.f", peso_quilos);
            printf("\nO preço da carga:  %2.f", preco_carga);
            printf("\nO valor do imposto: %2.f", valor_imposto);
            printf("\nO valor total: %2.f", valor_total);   
        }
        if(codigo_estado == 4){
            preco_carga = peso_quilos * 100;
            valor_imposto = preco_carga * 5/100;
            valor_total = preco_carga + valor_imposto;

            printf("O peso da carga: %2.f", peso_quilos);
            printf("\nO preço da carga:  %2.f", preco_carga);
            printf("\nO valor do imposto: %2.f", valor_imposto);
            printf("\nO valor total: %2.f", valor_total);
        }
        if(codigo_estado == 5){
            preco_carga = peso_quilos * 100;
            valor_imposto = 0;
            valor_total = preco_carga + valor_imposto;

            printf("O peso da carga: %2.f", peso_quilos);
            printf("\nO preço da carga:  %2.f", preco_carga);
            printf("\nO valor do imposto: %2.f", valor_imposto);
            printf("\nO valor total: %2.f", valor_total);
        }
    }

    if(codigo_carga >= 21 && codigo_carga <= 30){
        if(codigo_estado == 1){
            preco_carga = peso_quilos * 100;
            valor_imposto = preco_carga * 35/100;
            valor_total = preco_carga + valor_imposto;

            printf("O peso da carga: %2.f", peso_quilos);
            printf("\nO preço da carga:  %2.f", preco_carga);
            printf("\nO valor do imposto: %2.f", valor_imposto);
            printf("\nO valor total: %2.f", valor_total);
        }
        if(codigo_estado == 2){
            preco_carga = peso_quilos * 100;
            valor_imposto = preco_carga * 25/100;
            valor_total = preco_carga + valor_imposto;

            printf("O peso da carga: %2.f", peso_quilos);
            printf("\nO preço da carga:  %2.f", preco_carga);
            printf("\nO valor do imposto: %2.f", valor_imposto);
            printf("\nO valor total: %2.f", valor_total);
        }
        if(codigo_estado == 3){
            preco_carga = peso_quilos * 100;
            valor_imposto = preco_carga * 15/100;
            valor_total = preco_carga + valor_imposto;

            printf("O peso da carga: %2.f", peso_quilos);
            printf("\nO preço da carga:  %2.f", preco_carga);
            printf("\nO valor do imposto: %2.f", valor_imposto);
            printf("\nO valor total: %2.f", valor_total);   
        }
        if(codigo_estado == 4){
            preco_carga = peso_quilos * 100;
            valor_imposto = preco_carga * 5/100;
            valor_total = preco_carga + valor_imposto;

            printf("O peso da carga: %2.f", peso_quilos);
            printf("\nO preço da carga:  %2.f", preco_carga);
            printf("\nO valor do imposto: %2.f", valor_imposto);
            printf("\nO valor total: %2.f", valor_total);
        }
        if(codigo_estado == 5){
            preco_carga = peso_quilos * 100;
            valor_imposto = 0;
            valor_total = preco_carga + valor_imposto;

            printf("O peso da carga: %2.f", peso_quilos);
            printf("\nO preço da carga:  %2.f", preco_carga);
            printf("\nO valor do imposto: %2.f", valor_imposto);
            printf("\nO valor total: %2.f", valor_total);
        }
    }

    if(codigo_carga >= 31 && codigo_carga <= 40){
        if(codigo_estado == 1){
            preco_carga = peso_quilos * 100;
            valor_imposto = preco_carga * 35/100;
            valor_total = preco_carga + valor_imposto;

            printf("O peso da carga: %2.f", peso_quilos);
            printf("\nO preço da carga:  %2.f", preco_carga);
            printf("\nO valor do imposto: %2.f", valor_imposto);
            printf("\nO valor total: %2.f", valor_total);
        }
        if(codigo_estado == 2){
            preco_carga = peso_quilos * 100;
            valor_imposto = preco_carga * 25/100;
            valor_total = preco_carga + valor_imposto;

            printf("O peso da carga: %2.f", peso_quilos);
            printf("\nO preço da carga:  %2.f", preco_carga);
            printf("\nO valor do imposto: %2.f", valor_imposto);
            printf("\nO valor total: %2.f", valor_total);
        }
        if(codigo_estado == 3){
            preco_carga = peso_quilos * 100;
            valor_imposto = preco_carga * 15/100;
            valor_total = preco_carga + valor_imposto;

            printf("O peso da carga: %2.f", peso_quilos);
            printf("\nO preço da carga:  %2.f", preco_carga);
            printf("\nO valor do imposto: %2.f", valor_imposto);
            printf("\nO valor total: %2.f", valor_total);   
        }
        if(codigo_estado == 4){
            preco_carga = peso_quilos * 100;
            valor_imposto = preco_carga * 5/100;
            valor_total = preco_carga + valor_imposto;

            printf("O peso da carga: %2.f", peso_quilos);
            printf("\nO preço da carga:  %2.f", preco_carga);
            printf("\nO valor do imposto: %2.f", valor_imposto);
            printf("\nO valor total: %2.f", valor_total);
        }
        if(codigo_estado == 5){
            preco_carga = peso_quilos * 100;
            valor_imposto = 0;
            valor_total = preco_carga + valor_imposto;

            printf("O peso da carga: %2.f", peso_quilos);
            printf("\nO preço da carga:  %2.f", preco_carga);
            printf("\nO valor do imposto: %2.f", valor_imposto);
            printf("\nO valor total: %2.f", valor_total);
        }
    }
    
    return 0;


}