//#include<stdio.h>
//#include<math.h>

int main(){
    //set variables
    float nota1;
    float nota2;
    float nota3;
    
    //enter values
    printf("Digite a Nota 1: ");
    scanf("%f", &nota1);
    printf("Digite a Nota 2: ");
    scanf("%f", &nota2);
    printf("Digite a Nota 3: ");
    scanf("%f", &nota3);

    //set variables
    double media;
    double faltante;

    media = (nota1 + nota2 + nota3)/3;
    faltante = 7 - media;
    //print result
    printf("Sua média foi: %f", media);

    //set conditions 
    if(media > 0 && media <= 3){
        printf("\nReprovado");
    }
    if(media > 3 && media < 7){
        printf("\nVocê ficou em exame: ");
        printf("\nFaltou %f pontos para você passar", faltante);
    }
    if (media >= 7 && media <= 10){
        printf("\nAprovado");
    }

    return 0;
}
