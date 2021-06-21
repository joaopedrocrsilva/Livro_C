//#include <stdio.h>
//#include <math.h>

int main(){
    //set variables
    int codigo_cidade;
    int num_veiculos;
    int num_acidentes;

    int contador;
    int maior;
    int cidade_maior;
    int menor;
    int cidade_menor;
    double media_veiculos;
    int soma_veiculos;
    double media_acidentes;
    int soma_acidentes;
    int contador_acidentes;

    soma_veiculos = 0;
    soma_acidentes = 0;
    contador_acidentes = 0;

    for(contador = 1; contador <= 5; contador++){

        printf("Digite o código da cidade: ");
        scanf("%d", &codigo_cidade);
        printf("\n Digite o número de veículos de passeio: ");
        scanf("%d", &num_veiculos);
        printf("\n Digite o número de acidentes de trânsito com vítimas: ");
        scanf("%d", &num_acidentes);
        
        if(contador == 1){
            maior = num_acidentes;
            cidade_maior = codigo_cidade;
            menor = num_acidentes;
            cidade_menor = codigo_cidade;
        }else{
            if(num_acidentes > maior){
                maior = num_acidentes;
                cidade_maior = codigo_cidade;
            }
            if(num_acidentes < menor){
                menor = num_acidentes;
                cidade_menor = codigo_cidade;
            }
        }
        soma_veiculos = soma_veiculos + num_veiculos;
        
        if(num_veiculos < 2000){
            soma_acidentes = soma_acidentes + num_acidentes;
            contador_acidentes = contador_acidentes + 1;
        }
    }

    printf("Maior %d, Cidade Maior %d ", maior, cidade_maior);
    printf("\n Menor %d, Cidade Menor %d", menor, cidade_menor);
    
    media_veiculos = soma_veiculos/5;

    printf("Média Veículos: %f", media_veiculos);
    
    if(contador_acidentes = 0){
        printf("Não foi digitada nenhuma cidade com menos de 2000 veículos");
    }else{
        media_acidentes = soma_acidentes/contador_acidentes;
        printf("Média Acidentes: %f", media_acidentes );
    }

    return 0;
}

