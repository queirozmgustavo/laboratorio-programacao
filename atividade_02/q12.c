#include <stdio.h>

/*
    Elaborar um programa que leia um número e indique se ele é par ou impar. O programa só deve levar em consideração valores positivos. Enquanto o valor digitado for diferente de 1000, o programa deverá repetir o procedimento para verificar se o novo número é par ou impar.
*/

int main(void) {
  int n;

  while (1) {
    printf("\nDigite um inteiro: ");
    scanf("%i", &n);

    if (n == 1000) {
      break;
    }
    else if (n > 0) {
      if (n % 2 == 0) {
        printf("%i eh par!\n", n);
      }
      else {
        printf("%i eh impar!\n", n);
      }
    }
  }
  
  return 0;
}