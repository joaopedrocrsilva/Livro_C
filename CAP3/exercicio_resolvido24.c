//#include <stdio.h>
//#include <math.h>

int main()
{
    //set varibles
    float hora_digitada;
    
    //enter values
    scanf("%f", &hora_digitada);
    
    //set variables
    double hora;
    double minutos;
    double minutos_em_minutos;
    double soma_minutos_horas;
    double hora_em_minutos;
    
    minutos = modf(hora_digitada, &hora);
    hora_em_minutos = hora * 60;
    minutos_em_minutos = minutos * 100;
    soma_minutos_horas = hora_em_minutos + minutos_em_minutos;
    
    //print results
    printf("A Hora em Minutos é: %2.f", soma_minutos_horas);
    
    
}