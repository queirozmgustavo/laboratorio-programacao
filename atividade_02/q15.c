#include <stdio.h>

/*
    Construa um programa que calcule o novo salário (SAL_NOVO) para cada um dos funcionários da empresa. Considere que o funcionário deverá receber um reajuste de 15% caso seu salário (SAL) seja menor que 500. Se o salário for maior ou igual a 500, mas menor ou igual a 1000, o reajuste deve ser de 10%. Caso o salário seja maior que 1000, o reajuste deve ser de 5%. O programa deve parar quando for digitado um salário (SAL) com valor negativo, ou seja, inválido. Além disso, ao final, o programa deve apresentar quanto será gasto a mais pela empresa com esses aumentos.
*/

int main(void) {
  float sal_atual, sal_novo, g_atual = 0, g_novo = 0;

  while (1) {
    printf("Salario atual: ");
    scanf("%f", &sal_atual);

    if (sal_atual < 0) {
      break;
    }
    else if (sal_atual < 500) {
      sal_novo = sal_atual + (sal_atual * 0.15);
    }
    else if (sal_atual >= 500 && sal_atual <= 1000) {
      sal_novo = sal_atual + (sal_atual * 0.10);
    }
    else if (sal_atual > 1000) {
      sal_novo = sal_atual + (sal_atual * 0.05);
    }

    printf("Salario novo: R$ %.2f\n\n", sal_novo);

    g_atual += sal_atual;
    g_novo += sal_novo;
  }

  printf("\nGasto a mais pela empresa: R$ %.2f\n", g_novo - g_atual);

  return 0;
}