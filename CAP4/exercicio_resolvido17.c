//#include <stdio.h>
//#include <math.h>

int main()
{

    //set variables
    int a;
    int b;
    int c;

    //enter values
    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);
    printf("Digite o valor de C: ");
    scanf("%d", &c);

    //set variables
    double delta;
    double x1;
    double x2;

    delta = pow(b, 2) - 4 * a * c;


    //set coditions

    if(delta < 0){
        printf("Não existe raiz real.");
    }
    if(delta = 0 ){
        printf("Existe uma raiz real.");
        x1 = -b/(2*a);
        printf("\nX: %2f", x1);
    }
    if(delta > 0){
        printf("Existe duas raizes reais.");
        x1 = (-b + sqrt(delta))/(2*a);
        printf("X1: %2.f", x1);
        x2 = (-b - sqrt(delta))/(2*a);
        printf("X2: %2.f", x2);
    }

    return 0;

}