//#include <stdio.h>
//#include <math.h>

int main(){
    //set variable
    int n;

    printf("Digite o valor de N: ");
    scanf("%d", &n);

    //set variables
    int e;
    int i;
    int j;
    int fat;

    //set coditions
    for(i = 1; i <= n; i++){
        
        fat = 1;

        for(j = 1; j <= i; j++)
        {
            
            fat = fat * j;
    
        }

        e = e + (1/fat);

    }
    printf("%d", e);

    return 0;
}