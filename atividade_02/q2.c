#include <stdio.h>

/*
    Escreva um programa que leia a quantidade (Q) e o preço (PR) de 45 produtos diferentes, comprados por uma empresa, e apresente o total gasto por ela.
*/

int main(void) {
  int q;
  float pr, pr_total = 0;

  for (int i = 1; i < 46; i++) {
    printf("Informe a quantidade do item %i: ", i);
    scanf("%i", &q);
    printf("Informe preco do item %i: ", i);
    scanf("%f", &pr);

    pr_total += q * pr;
  }

  printf("\nPreco total: R$ %.2f\n", pr_total);
  return 0;
}