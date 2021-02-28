#include <stdio.h>

/*
    Implemente um programa para calcular a função f(x, y) = 2x + 3y², num domínio real. Os valore de x e y devem ser informados pelo usuário.
*/

int main(void) {
  float x, y, f;

  printf("Informe o valor de X: ");
  scanf("%f", &x);

  printf("Informe o valor de Y: ");
  scanf("%f", &y);

  f = 2 * x + 3 * y * y;

  printf("\nf(x, y) = %.2f\n", f);
  return 0;
}