//#include <stdio.h>
//#include <math.h>

int main(){
    //set variable
    int I;
    float num1;
    float num2;
    float num3;

    //enter values
    printf("Digite o número de I: ");
    scanf("%d", &I);
    printf("Digite o número de A: ");
    scanf("%f", &num1);
    printf("Digite o número de B: ");
    scanf("%f", &num2);
    printf("Digite o número de C: ");
    scanf("%f", &num3);


    //set coditions
    if(I == 1){
        if(num1 < num2 && num1 < num3){
            if(num2 < num3){
                printf("Ordem Crescente: %2.f %2.f %2.f", num1, num2, num3);
            }else{
                printf("Ordem Crescente: %2.f %2.f %2.f", num1, num3, num2);
            }
        }
        if(num2 < num1 && num2 < num3){
            if(num1 < num3){
                printf("Ordem Crescente: %2.f %2.f %2.f", num2, num1, num3);
            }else{
                printf("Ordem Crescente: %2.f %2.f %2.f", num2, num3, num1);
            }
        }
        if(num3 < num1 && num3 < num2){
            if(num1 < num2){
                printf("Ordem Crescente: %2.f %2.f %2.f", num3, num1, num2);
            }else{
                printf("Ordem Crescente: %2.f %2.f %2.f", num3, num2, num1);
            }
        }
    }

    if(I == 2){
        if(num1 > num2 && num1 > num3){
            if(num2 > num3){
                printf("Ordem Decrescente: %2.f %2.f %2.f", num1, num2, num3);
            }else{
                printf("Ordem Decrescente: %2.f %2.f %2.f", num1, num3, num2);
            }
        }
        if(num2 > num1 && num2 > num3){
            if(num1 > num3){
                printf("Ordem Decrescente: %2.f %2.f %2.f", num2, num1, num3);
            }else{
                printf("Ordem Decrescente: %2.f %2.f %2.f", num2, num3, num1);
            }
        }
        if(num3 > num1 && num3 > num2){
            if(num1 > num2){
                printf("Ordem Decrescente: %2.f %2.f %2.f", num3, num1, num2);
            }else{
                printf("Ordem Decrescente: %2.f %2.f %2.f", num3, num2, num1);
            }
        }
    }

    if(I == 3){
        if(num1 > num2 && num1 > num3){
            printf("Imprimi: %2.f %2.f %2.f", num2, num1, num3);
        }
        if(num2 > num1 && num2 > num3){
            printf("Imprimi: %2.f %2.f %2.f", num1, num2, num3);
        }
        if(num3 > num2 && num3 > num1){
            printf("Imprimi: %2.f %2.f %2.f", num2, num3, num1);
        }
    }

    
    return 0;
    
}