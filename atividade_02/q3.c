#include <stdio.h>

/*
    Escreva um programa que leia o número de horas trabalhadas diárias (NH) de um funcionário por um período de 30 dias (ele trabalhou todos os 30 dias) e apresente o total de horas trabalhadas por ele nesse período.
*/

int main(void) {
  int nh, nh_total = 0;

  for (int i = 1; i < 31; i++) {
    printf("Numero de horas trabalhadas no dia %i: ", i);
    scanf("%i", &nh);

    nh_total += nh;
  }

  printf("\nTotal de horas trabalhadas: %i horas\n", nh_total);
  return 0;
}