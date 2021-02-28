#include <stdio.h>

/*
    A Conversão de graus Fahrenheit para centígrados é obtida por C=5/9(F−32). Faça um programa que calcule e escreva um valor em centígrados em função de graus Fahrenheit.
*/

int main(void) {
  float fahrenheit, celsius;

  printf("Informe a temperatura em Fahrenheit: ");
  scanf("%f", &fahrenheit);

  celsius = (fahrenheit - 32) * 5 / 9;

  printf("\nTemperatura em Celsius: %.1f°C\n", celsius);
  return 0;
}