//#include <stdio.h>
//#include <math.h>

int main(){
    //set variables
    int num1;

    //enter values 
    printf("Digite um número: ");
    scanf("%d", &num1);

    //set conditions
    if(num1 % 2 == 0){
        printf("O número é par");
    }else{
        printf("O número é ímpar");
    }

    return 0;

}