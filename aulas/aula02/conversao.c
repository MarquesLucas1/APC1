#include <stdio.h>
int main() {

  char caracter = 127;
  printf("A variável é CHAR 127\n\n");
  int inteiro = caracter;
  float flutuante = inteiro;
  double duplo = flutuante;

  printf("o caracter %d convertido para inteiro %d\n\n", caracter, inteiro);
  printf("o inteiro %d convertido para flutuante %f\n\n", inteiro , flutuante);
  printf("O flutuante %f convertido para duplo %f\n\n", flutuante, duplo);

  duplo = 270.123456;
  flutuante = (float) duplo;
  inteiro = (int) flutuante;
  caracter = (char) inteiro;

  printf("O duplo %f convertido para flutuante %f\n\n", duplo, flutuante);
  printf("O flutuante %f convertido para inteiro %d\n\n", flutuante , inteiro);
  printf("o inteiro %d convertido para caracter %d\n\n", inteiro , caracter);

    return 0;

    
}