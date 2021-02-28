#include <stdio.h>

/*
    Escreva um programa que leia o número de horas trabalhadas diárias (NH) de um funcionário por um período de 30 dias (ele trabalhou todos os 30 dias) e apresente o salário bruto recebido por ele nesse período, sabendo que o valor do salário é R$ 10,00/hora trabalhada.
*/

int main(void) {
  int nh;
  float salario = 0;

  for (int i = 1; i < 31; i++) {
    printf("Numero de horas trabalhadas no dia %i: ", i);
    scanf("%i", &nh);

    salario += nh * 10;
  }

  printf("\nSalario bruto: R$ %.2f\n", salario);
  return 0;
}