//Faça um programa em C que calcule a média final a partir da fórmula (0,4 x A1) + (0,6 x A2). Considere A1 e A2 números reais entre 0 a 10.
#include <stdio.h>

int main() {


  float nota_a1;
  float nota_a2;

printf("Bem vindo a calculadora de notas! se deseja saber sua média insira apenas valores!");
printf("Insira sua nota a1: ");
scanf("%f", &nota_a1);
printf("Insira, agora, sua nota a2: ");
scanf("%f", &nota_a2);


  float media = 0.4 * nota_a1 + 0.6 * nota_a2;

  
  return 0;
}