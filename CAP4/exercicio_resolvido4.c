//#include <stdio.h>
//#include <math.h>

int main(){
    //set variable
    float num1;
    float num2;
    float num3;

    //enter values
    printf("Digite o número 1: ");
    scanf("%f", &num1);
    printf("Digite o número 2: ");
    scanf("%f", &num2);
    printf("Digite o número 3: ");
    scanf("%f", &num3);

    //set conditions
    if (num1 < num2 && num1 < num3){
        if(num2 < num3){
            printf("A ordem crescente é num1 %2.f - num2 %2.f - num 3 %2.f", num1, num2, num3);
        }
        else{
            printf("A ordem crescente é num1 %2.f - num3 %2.f - num 2 %2.f", num1, num3, num2);
        }
    }

    if (num2 < num1 && num2 < num3){
        if(num1 < num3){
            printf("A ordem crescente é num2 %2.f - num1 %2.f - num3 %2.f", num2, num1, num3);
        }
        else{
            printf("A ordem crescente é num2 %2.f - num3 %2.f - num1 %2.f", num2, num3, num1);
        }
    }

    if(num3 < num1 && num3 < num2){
        if(num1 <num2){
            printf("A ordem cresente é num3 %2.f - num1 %2.f - num2 %2.f", num3, num1, num2);
        }
        else{
            printf("A ordem crescente é num3 %2.f - num2 %2.f - num1 %2.f", num3, num2, num1);
        }
    }

   return 0;
}