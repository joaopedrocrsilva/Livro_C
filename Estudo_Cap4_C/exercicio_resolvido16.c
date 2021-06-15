//#include <stdio.h>
//#include <math.h>

int main(){

    //set variables
    int preco_atual;
    int venda_mensal;
    double porcentagem;
    double novo_preco;

    //enter values
    printf("Digite o preço atual: ");
    scanf("%d", &preco_atual);
    printf("Digite a quantidade de vendas: ");
    scanf("%d", &venda_mensal);

    //set coditions 
    if(venda_mensal < 500 || preco_atual < 30){
        porcentagem = preco_atual * 10/100;
        novo_preco = preco_atual + porcentagem;

        printf("Novo preço: %2.f", novo_preco);
    }
    if(venda_mensal >= 500 && venda_mensal < 1200 || preco_atual >= 30 && preco_atual < 80){
        porcentagem = preco_atual * 15/100;
        novo_preco = preco_atual + porcentagem;

        printf("Novo preço: %2.f", novo_preco);
    }
    if(venda_mensal >= 1200 || preco_atual >= 80){
        porcentagem = preco_atual * 20/100;
        novo_preco = preco_atual - porcentagem;

        printf("Novo preço: %2.f", novo_preco);
    }

    return 0;

}