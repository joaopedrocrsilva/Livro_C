//#include <stdio.h>
//#include <math.h>

int main(){
    //set variables
    int preco;
    char tipo;
    char refrigeracao;

    //enter values
    printf("Digite o preço: ");
    scanf("%d", &preco);
    printf("Digite o tipo e a refrigeração: ");
    scanf("%c %c", &tipo, &refrigeracao);

    //set variables
    double valor_adicional;

    //set coditions
    if(refrigeracao == 'N'){
        if(tipo == 'A'){
            if(preco < 15){
                valor_adicional = 2;
                printf("\nValor adicional: %2.f", valor_adicional);
            }
            if(preco >= 15){
                valor_adicional = 5;
                printf("\nValor adicional: %2.f", valor_adicional);
            }
        }
        if(tipo == 'L'){
            if(preco < 10){
                valor_adicional = 1.50;
                printf("\nValor adicional: %2.f", valor_adicional);
            }
            if(preco >= 10){
                valor_adicional = 2.50;
                printf("\nValor adicional: %2.f", valor_adicional);
            }
        }
        if(tipo == 'V'){
            if(preco < 30){
                valor_adicional = 3;
                printf("\nValor adicional: %2.f", valor_adicional);
            }
            if(preco >= 30){
                valor_adicional = 2.50;
                printf("\nValor adicinal: %2.f", valor_adicional);
            }
        }
    }
    if(refrigeracao == 'S'){
        if(tipo == 'A'){
            valor_adicional = 8;
            printf("\nValor adicional: %2.f", valor_adicional);
        }
        if(tipo == 'L'){
            valor_adicional = 0;
            printf("\nValor adicional: %2.f", valor_adicional);
        }
        if(tipo == 'V'){
            valor_adicional = 0;
            printf("\nValor adicional: %2.f", valor_adicional);
        }
    }


    //set variables
    double imposto;

    //set coditions
    if(preco < 25){
        imposto = preco * 5/100;
        printf("\nValor imposto: %2.f", imposto);
    }
    if(preco >= 25){
        imposto = preco * 8/100;
        printf("\nValor imposto: %2.f", imposto);
    }

    //set variables
    double preco_custo;
    double desconto;
    double novo_preco;

    preco_custo = preco + imposto;

    //print results 
    printf("\nO preço do custo: %2.f", preco_custo);

    //set coditions
    if(tipo == 'A' && refrigeracao == 'S'){
        desconto = 0;
        printf("\nDesconto: %2.f", desconto);
    }
    else{
        desconto = preco * 3/100;
        printf("\nDesconto: %2.f", desconto);
    }

    novo_preco = preco_custo + imposto - desconto;
    printf("\nNovo preço: %2.f", novo_preco);

    if(novo_preco <= 50){
        printf("\nBarato");
    }
    if(novo_preco > 50 && novo_preco < 100){
        printf("\nNormal");
    }
    if(novo_preco >= 100){
        printf("\nCaro");
    }

    return 0;
}