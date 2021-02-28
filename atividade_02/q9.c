#include <stdio.h>

/*
    Faça um programa que receba 10 números, calcule e imprima a soma dos números pares maiores do que 4.
*/

int main(void) {
  int n, soma = 0;

  for (int i = 1; i < 11; i++) {
    printf("Informe o %iº numero: ", i);
    scanf("%i", &n);

    if (n % 2 == 0 && n > 4) {
      soma += n;
    }
  }

  printf("\nSomatorio: %i\n", soma);
  return 0;
}