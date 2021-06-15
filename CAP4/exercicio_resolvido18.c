//#include <stdio.h>
//#include <math.h>

int main(){

//set variables
int x;
int y;
int z;

//enter values
printf("Digite o lado x: ");
scanf("%d", &x);
printf("Digite o lado y: ");
scanf("%d", &y);
printf("Digite o lado z: ");
scanf("%d", &z);

//set codiitons
if(x < y + z && y < x + z && z < y + x){

    
    if(x == y && y == z){
        printf("Triângulo Equilátero.");
    }

    if(x == y || x == z || y == z){
        printf("Triângulo Isósceles.");
    }

    else if(x != y && x != z && y != z){
        printf("Triângulo Escaleno.");
    }

}
else{
    printf("As medidas não formam um triângulo.");
}

return 0;

}