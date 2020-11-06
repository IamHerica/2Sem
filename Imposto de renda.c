#include <stdio.h>



//funcao inicializando

float CalcIR(float SalarioBruto, float *DescontoIR,float *DescontoAcumulado){

  if (SalarioBruto <= 1903.98)
  *DescontoIR = 0;
else if (SalarioBruto >= 1903.99 && SalarioBruto <= 2826.65)
  *DescontoIR = SalarioBruto * 0.075;
else if (SalarioBruto >= 2826.66 && SalarioBruto <= 3751.05)
  *DescontoIR = SalarioBruto * 0.15;
else if (SalarioBruto >= 3751.06 && SalarioBruto <= 4664.68)
  *DescontoIR = SalarioBruto * 0.225;
else if (SalarioBruto >= 4664.68) 
  *DescontoIR = SalarioBruto * 0.275;

if (SalarioBruto <= 3881.65)
  *DescontoAcumulado = 0;
else if (SalarioBruto >= 3881.66 && SalarioBruto <= 5714.11)
  *DescontoAcumulado = SalarioBruto * 0.075;
else if (SalarioBruto >= 5714.12 && SalarioBruto <= 7654.67)
  *DescontoAcumulado = SalarioBruto * 0.015;
else if (SalarioBruto >= 7654.68 && SalarioBruto <= 9564.42)
  *DescontoAcumulado = SalarioBruto * 0.225;
else if (SalarioBruto > 9564.42)
  *DescontoAcumulado = SalarioBruto * 0.275;


return 0; 
}

int main(void) {

  /*
  Salario bruto = Salario do usuario.
  CalcIR = variavel que chamara a funcao.
  DescontoIR = Desconto do contracheque considerando o valor da tabela.
  DescontoAcumulado = valor corrido da defasaegem acumulada desde 1996;
  DiferencaContribuinte = Valor a mais que o usuario estaria pagando.
  */

  float SalarioBruto, DescontoIR, DescontoAcumulado, DiferencaContribuinte;


  printf("Digite o salario bruto:\n");
  scanf("%f", &SalarioBruto);

  CalcIR(SalarioBruto, &DescontoIR, &DescontoAcumulado);

  printf("Desconto Imposto de Renda: %f\n", DescontoIR);
  printf("Desconto Acumulado: %f\n", DescontoAcumulado);


  return 0;
}