 //#include <stdio.h>
 //#include <math.h>

 int main(){
    //set variables
    float num1;
    float num2;
    float num3;
    float num4;

    //enter values
    printf("Digite 3 números em ordem crescente");
    printf("\nDigite um número: ");
    scanf("%f", &num1);

    printf("Digite o número 2: ");
    scanf("%f", &num2);

    printf("Digite o número 3: ");
    scanf("%f", &num3);

    printf("Digite o número 4: ");
    scanf("%f", &num4);

    //set conditions e print results

    if(num4 > num3){
        printf("Ordem1: %2.f %2.f %2.f %2.f", num4, num3, num2, num1);
    }
    else if(num4 > num2){
        printf("Ordem2: %2.f %2.f %2.f %2.f", num3, num4, num2, num1);
    }
    else if(num4 > num1){
        printf("Ordem3: %2.f %2.f %2.f %2.f", num3, num2, num4, num1);
    }
    else if(num4 < num1){
        printf("Ordem4: %2.f %2.f %2.f %2.f", num3, num2, num1, num4);
    }

    return 0;

 }