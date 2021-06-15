//#include <stdio.h>
//#include <math.h>


int main()
{
    //set variables
    int temperatura_celsius;

    //enter values
    scanf("%d", &temperatura_celsius);

    //set variables
    double fahrenheit;

    fahrenheit = 180 * (temperatura_celsius + 32)/100;

    //print results
    printf("A temperatura em Fahrenheit é: %f", fahrenheit);
    
    return 0;
}