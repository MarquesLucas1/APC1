/*
Faça um progama em C que calcule o perímetro de uma pizza (P= 2 X PI x r). Considere um número inteiro e a constante PI igual a 3,1416
*/

#include <stdio.h>

int main() {

  int raio = 20;
  const float pi = 3.1415f;

  float perimetro = 2 * pi * raio;

  printf ("A medida da borda é %f\n", perimetro);

    return 0;
}