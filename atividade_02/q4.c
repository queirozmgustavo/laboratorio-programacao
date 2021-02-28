#include <stdio.h>

/*
    Escreva um programa que receba a idade de 10 pessoas, calcule e imprima a quantidade de pessoas maiores de idade (idade >= 18 anos).
*/

int main(void) {
  int idade, maior_idade = 0;

  for (int i = 1; i < 11; i++) {
    printf("Idade da %iª pessoa: ", i);
    scanf("%i", &idade);

    if (idade >= 18) {
      maior_idade += 1;
    }
  }

  printf("\nQuantidade de pessoas maiores de idade: %i\n", maior_idade);
  return 0;
}