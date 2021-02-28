#include <stdio.h>

/*
    Uma empresa tem para um determinado funcionário uma ficha contendo o nome, número de horas trabalhadas e o número de dependentes de um funcionário.
    
    Considerando que:
    a) A empresa paga 12 reais por hora e 40 reais por dependentes.
    b) Sobre o salário são feitos descontos de 8,5% para o INSS e 5% para IR.
    
    Faça um programa que leia (receba por meio do teclado) o nome, número de horas trabalhadas e número de dependentes de um funcionário. Após a leitura, escreva qual o Nome, salário bruto, os valores descontados para cada tipo de
    imposto e finalmente qual o salário líquido do funcionário.
*/

int main(void) {
  char nome[20];
  int horas, dependentes;
  float salario_bruto, salario_liquido, inss, ir;

  printf("Informe o nome do funcionario: ");
  scanf("%s", nome);

  printf("Informe o numero de horas trabalhadas: ");
  scanf("%i", &horas);

  printf("Informe o numero de dependentes: ");
  scanf("%i", &dependentes);

  salario_bruto = (12 * horas) + (40 * dependentes);
  inss = salario_bruto * 0.085;
  ir = salario_bruto * 0.05;
  salario_liquido = salario_bruto - inss - ir;

  printf("\nNome: %s\n", nome);
  printf("Salario bruto: R$ %.2f\n", salario_bruto);
  printf("INSS: R$ %.2f\n", inss);
  printf("IR: R$ %.2f\n", ir);
  printf("Salario liquido: R$ %.2f\n", salario_liquido);

  return 0;
}