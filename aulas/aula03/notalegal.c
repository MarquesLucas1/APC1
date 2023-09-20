#include <stdio.h> // scanf - ler e printf - escrever

int main() {

char item1 [61];
int quantidade1;
float preco1;

char item2 [61];
int quantidade2;
float preco2;

char item3 [61];
int quantidade3;
float preco3;

printf("Entre com o nome do item1: ");
scanf("%s", item1);
printf("Entre com a quantidade do item1: ");
scanf("%i", &quantidade1);
printf("Entre com o preco do item1: ");
scanf("%f", &preco1);

printf("Entre com o nome do item2: ");
scanf("%s", item2);
printf("Entre com a quantidade do item2: ");
scanf("%i", &quantidade2);
printf("Entre com o preco do item2: ");
scanf("%f", &preco2);

printf("Entre com o nome do item3: ");
scanf("%s", item3);
printf("Entre com a quantidade do item3: ");
scanf("%i", &quantidade3);
printf("Entre com o preco do item3: ");
scanf("%f", &preco3);
  


float total = quantidade1 * preco1;
total = total + quantidade2 + preco2;
total = total + quantidade3 * preco3;



  
printf("...................................\n");
printf("                                   \n");
printf("     | N O T A  L E G A L |      \n");
printf("     ---------------------         \n");
printf("...................................\n");
printf("                                   \n");
printf("I T E M        QTD   VALOR\n");
printf("                                   \n");
printf("%-14s %03i %7.2f\n", item1, quantidade1, preco1);
printf("%-14s %03i %7.2f\n", item2, quantidade2, preco2);
printf("%-14s %03i %7.2f\n", item3, quantidade3, preco3);
printf("                                   \n");
printf("...................................\n");
printf("                                   \n");
printf("T O T A L                  R$ %7.2f\n", total);
printf("                                   \n");
printf("...................................\n");
  
  return 0;
}