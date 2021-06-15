//#include <stdio.h>
//#include <math.h>


int main()
{
    //set variables
    int angulo;
    int distancia_escada_parede;
    int valorpi;

    //enter values
    scanf("%d", &angulo);
    scanf("%d", &distancia_escada_parede);

    //set variables
    double cosseno;
    double hipotenusa;
    valorpi = 3.14;

    cosseno = cos((valorpi * angulo)/180);
    hipotenusa = distancia_escada_parede / cosseno;

    //print results
    printf("cosseno %f", cosseno);
    printf("A medida da escada %f", hipotenusa);
    
    return 0;

}