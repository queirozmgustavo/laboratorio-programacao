#include <stdio.h>

/*
    Escreva um programa que imprima o peso total que será carregado por um caminhão. Sabe-se que esse caminhão carrega 25 caixas, com pesos diferentes. O programa terá como entrada o peso (P) de cada uma das caixas.
*/

int main(void) {
  float p, p_total = 0;

  for (int i = 1; i < 26; i++) {
    printf("Informe o peso da %iª caixa: ", i);
    scanf("%f", &p);

    p_total += p;
  }

  printf("\nPeso total da carga: %.2fkg\n", p_total);
  return 0;
}