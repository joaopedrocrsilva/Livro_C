//#include <stdio.h>
//#include <math.h>

int main(){
    //set variables
    int altura;
    int peso;

    //enter values
    printf("Digite sua altura: ");
    scanf("%d", &altura);
    printf("Digite seu peso: ");
    scanf("%d", &peso);

    //set coditions
    if(altura < 120){
        if(peso < 60){
            printf("Classificação: A");
        }
        if(peso >= 60 && peso <= 90){
            printf("Classificação: D");
        }
        if(peso > 90){
            printf("Classificação: G");
        }
    }

    if(altura >= 120 && altura <= 170){
        if(peso < 60){
            printf("Classificação: B");
        }
        if(peso >= 60 && peso <= 90){
            printf("Classificação: E");
        }
        if(peso > 90){
            printf("Classificação: H");
        }
    }

    if(altura > 170){
        if(peso < 60){
            printf("Classificação: C");
        }
        if(peso >= 60 && peso <= 90){
            printf("Classificação: F");
        }
        if(peso > 90){
            printf("Classificação: I");
        }
    }

    return 0;
    
}