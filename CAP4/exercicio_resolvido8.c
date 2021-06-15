//#include <stdio.h>
//#include <math.h>

int main()
{
    //set variables
    int menu;
    float num1;
    float num2;
    double soma;
    double raiz;

    //enter values
    printf("Escolha uma opção");
    printf("\n1-Somar dois números");
    printf("\n2-Raiz quadrada de um número");
    scanf("%d", &menu);

    //set codition
    if (menu == 1)
    {
        printf("Opção 1");
        printf("\nDigite um número: ");
        scanf("%f", &num1);
        printf("Digite outro número:");
        scanf("%f", &num2);

        soma = num1 + num2;

        printf("Soma: %2.f", soma);
    }

    if (menu == 2)
    {
        printf("Opção 2");
        printf("\nDigite um número");
        scanf("%f", &num1);

        raiz = sqrt(num1);

        printf("Raiz %2.f", raiz);

    }

    return 0;
}