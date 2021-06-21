//include <stdio.h>
//#include <math.h>

int main(){
    //set variables
    int n;

    //enter values
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    //set variables
    int i;
    int numero;
    int fatorial;
    int j;

    for(i = 1; i <= n; i++){
        printf("\n Digte um número: ");
        scanf("%d", &numero);
        fatorial = 1;

        for(j = 1; j <= numero; j++){
            fatorial = fatorial * j;
        }

        printf("%d", fatorial);
    }

    return 0;
}