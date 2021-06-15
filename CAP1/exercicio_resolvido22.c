//#include <stdio.h>
//#include <math.h>


int main()
{
  //set variables
  int salario;
  int quant_quilowatts;

  //enter values
  scanf("%d", &salario);
  scanf("%d", &quant_quilowatts);
  
  //set variables
  double valor_cada_quilowatt;
  double valor_aser_pago;
  double desconto;
  double valor_com_desconto;
  
  valor_cada_quilowatt = salario/5;
  valor_aser_pago = quant_quilowatts * valor_cada_quilowatt;
  desconto = valor_aser_pago * 15/100;
  valor_com_desconto = valor_aser_pago - desconto;
  
  //print results
  printf("Valor de Cada Quilowatt: %2.f", valor_cada_quilowatt);
  printf("\nValor a Ser Pago: %2.f", valor_aser_pago);
  printf("\nValor a Ser Pago com Desconto %2.f", valor_com_desconto);

    return 0;
}
