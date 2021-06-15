//#include <stdio.h>
//#include <math.h>

int main(){
    //set variables 
    float num1;
    float num2;
    
    //enter values
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    //set condition
    if(num1 > num2){
        printf("Numéro 1 maior que Número 2 %f", num1);
    }
    if(num2 > num1){
        printf("Número 2 maior que Número 1 %f", num2);
    }
    if(num1 == num2){
        printf("Números 1 e 2 são Iguais: %f %f", num1,num2);
    }
}