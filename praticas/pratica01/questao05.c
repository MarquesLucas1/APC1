/* 
Progama para converter Bytes em giagabytes
*/

#include <stdio.h>
#include <math.h>

int main() {

  double valor_em_giga = 10;

  double valor_em_bytes = valor_em_giga * pow(1024, 3);

  printf("O valor em Gigas %f em bytes é %f\n", valor_em_giga, valor_em_bytes);

    return 0;
  
}