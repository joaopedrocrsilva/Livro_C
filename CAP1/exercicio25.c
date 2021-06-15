//#include <stdio.h>
//#include <math.h>

int main()
{
    //set variables
    float hora;

    //enter values
    scanf("%f", &hora);

    //set variables
    double inteiro_hora;
    double fracionado_minutos;
    double inteiro;
    double hora_em_minutos;
    double hora_mais_minutos;
    double segundos;

    inteiro_hora =  modf(hora, &inteiro);
    fracionado_minutos = hora - inteiro;
    hora_em_minutos = inteiro * 60;
    hora_mais_minutos = ceil(hora_em_minutos + (fracionado_minutos * 100));
    segundos = hora_mais_minutos * 60;

    //print results
    printf("Hora em minutos %f", hora_em_minutos);
    printf("\nHora mais Minutos: %f", hora_mais_minutos);
    printf("\nHora e Minutos em Segundos: %f", segundos);

    return 0;
}