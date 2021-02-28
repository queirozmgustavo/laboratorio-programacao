#include <stdio.h>

/*
    Faça um programa na Linguagem C que leia (informe via teclado) a base e a altura de um triângulo. Em seguida, escreva a área dele.
*/

int main(void) {
  float base, altura, area;

  printf("Informe o valor da base em metros: ");
  scanf("%f", &base);

  printf("Informe o valor da altura em metros: ");
  scanf("%f", &altura);

  area = (base * altura) / 2;

  printf("\nArea = %.2fm2\n", area);
  return 0;
}