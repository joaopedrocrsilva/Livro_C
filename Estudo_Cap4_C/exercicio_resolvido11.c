//#include <stdio.h>
//#include <math.h>

int main()
{
    //set variable
    float hora_i;
    float min_i;
    float hora_f;
    float min_f;
    double hora_d;
    double min_d;

    //enter values
    printf("Digite a hora que começou: ");
    scanf("%f", &hora_i);
    printf("Digite o minuto que o jogo começou: ");
    scanf("%f", &min_i);
    printf("Digite a hora que acabou: ");
    scanf("%f", &hora_f);
    printf("Digite o minuto que acabou: ");
    scanf("%f", &min_f);

    //set coditions
    if (hora_i > hora_f)
    {
        hora_d = hora_i - hora_f;
    }
    else if (hora_f > hora_i)
    {
        hora_d = hora_f - hora_i;
    }
    if (min_i > min_f)
    {
        min_d = min_i - min_f;
    }
    else if (min_f > min_i)
    {
        min_d = min_f - min_i;
    }

    //print results
    printf("A Duração do Jogo foi de %2.f:%2.f", hora_d, min_d);

    return 0;
}