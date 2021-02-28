#include <stdio.h>

/*
Faça um programa para calcular o 100o termo da seguinte P.G.: 3,9,27,81, ... .
Também, calcule a soma dos termos da P.G.
*/

int main(void) {
  double pg = 3, soma;

  for(int n = 1; n < 100; n++) {
    pg = pg * 3;
    soma += pg;
  }

  printf("\n100º termo: %.0f\n", pg);
  printf("Soma dos termos: %.0f\n", soma);
  return 0;
}