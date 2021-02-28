#include <stdio.h>

/*
    A conversão de graus Fahrenheit para Celsius é obtida pela fórmula C=5/9(F-32). Escreva um programa que calcule e apresente TODAS as temperaturas (em Celsius) correspondentes aquelas em Fahrenheit de 1 até 50, ou seja, para cada temperatura em Fahrenheit, variando de 1 até 50, calcular e apresentar uma temperatura em Celsius.
*/

int main(void) {
  float f, c;

  while (1) {
    printf("\nTemperatura em Fahrenheit: ");
    scanf("%f", &f);

    if (f <0 || f > 50) {
      break;
    }

    c = (f - 32) * 5 / 9;

    printf("Temperatura em Celsius: %.1f°C\n", c);
  }
  
  return 0;
}