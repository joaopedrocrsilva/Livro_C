//#include <stdio.h>
//#include <math.h>


int main()
{
  //set variables
  int x;
  int z;
  
  //enter values
  scanf("%d", &z);
  scanf("%d", &x);
  
  
  //set variables
  double y;
  y = pow(z,2) - pow(x,2);
  y = sqrt(y);
  
  
  //print results
  printf("Resultado: %f", y);
  
  
    return 0;
}