#include <stdio.h>

/*
    Faça um programa que receba a idade e a altura de várias pessoas. Calcule e imprima a média das alturas das pessoas com mais de 50 anos. Para encerrar a entrada de dados, digite idade <= zero.
*/

int main(void) {
  int idade;
  float altura, media = 0, cont = 0, alturas = 0;

  while (1) {
    printf("Idade: ");
    scanf("%i", &idade);

    if (idade <= 0) {
      printf("\nMedia das alturas: %.2fm\n", media);
      break;
    }

    printf("Altura em metros: ");
    scanf("%f", &altura);

    if (idade > 50) {
      cont += 1;
      alturas += altura;
      media = alturas / cont;
    }
  }

  return 0;
}