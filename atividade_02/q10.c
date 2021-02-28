#include <stdio.h>

/*
    Faça um programa para calcular a área de um triângulo. Este programa não pode permitir a entrada de dados inválidos, por exemplo, medidas menores ou iguais a zero.
*/

int main(void) {
  float b, h, a;

  printf("Base em metros: ");
  scanf("%f", &b);
  printf("Altura em metros: ");
  scanf("%f", &h);

  if (b > 0 && h > 0) {
    a = (b * h) / 2;
    printf("\nArea: %.2fm²\n", a);
  }
  else {
    printf("\nDados invalidos!\n");
  }

  return 0;
}
