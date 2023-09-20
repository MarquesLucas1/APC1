/* Fórmula de Baskara
*/

#include <stdio.h>
#include <math.h>

int main () {

  int a = 1;
  int b = 5;
  int c = 3;
  double delta = sqrt( pow(b,2) - (4 * a * c));

  double x1 = ( -b + delta ) / 2 * a;
  double x2 = ( -b - delta ) / 2 * a;

  
  printf("As raízes da equação %ix² %ix %i são %f e %f\n", a, b, c, x1, x2);


  return 0;
}