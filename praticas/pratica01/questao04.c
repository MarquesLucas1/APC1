// Comando: Faça um programa que C que calcule os impostos incluídos no preço de um produto (preço final = (1 + ICMS + COFINS + PIS/PASEP) x preço inicial). Considere ICMS igual a 17%, COFINS igual a 7,6% e PIS/PASEP igual a 1,65%.

#include <stdio.h>

int main() {

//Entradas:

  const float ICMS = 0.17;
  const float COFINS = 0.076;
  const float PIS_PASEP = 0.0165;
  const float preco = 26;

//Valor dos impostos:

  float valor_icms = preco * ICMS;
  float valor_cofins = preco * COFINS;
  float valor_pispasep = preco * PIS_PASEP;
  float preco_final = (1 + ICMS + COFINS + PIS_PASEP) * preco;

//Saídas:

  printf ("O preço bruto do produto é: R$%.2f\n", preco);
  printf ("O preço final é R$%.2f\n", preco_final);
  printf ("O valor do imposto ICMS é: R$%.2f\n", valor_icms);
  printf ("O valor do imposto COFINS é: R$ %.2f\n", valor_cofins);
  printf ("O valor do imposto PIS PASEP é: R$%.2f\n", valor_pispasep);
  
  
  return 0;
  
}