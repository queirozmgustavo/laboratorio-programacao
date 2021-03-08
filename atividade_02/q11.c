#include <stdio.h>

/*
    Faça um programa que receba a idade, a altura e o peso de 15 pessoas. Calcule e imprima:
    
    a) a quantidade de pessoas com idade superior a 50 anos;
    b) a média das alturas das pessoas com idade entre 10 e 20 anos;
    c) a porcentagem de pessoas com peso inferior a 40 quilos entre todas as pessoas analisadas;
*/

int main(void) {
  int idade, sup_50 = 0;
  float altura, peso, inf_40 = 0, altura_10_20 = 0, cont = 0;

  for (int i = 1; i < 16; i++) {
    printf("\nIdade: ");
    scanf("%i", &idade);
    printf("Altura: ");
    scanf("%f", &altura);
    printf("Peso: ");
    scanf("%f", &peso);

    if (idade > 50) {
      sup_50 += 1;
    }

    if (idade > 10 && idade < 20) {
      altura_10_20 += altura;
      cont += 1;
    }

    if (peso < 40) {
      inf_40 += 1;
    }
  }

  float media, p;

  media = altura_10_20 / cont;
  p = inf_40 / 15.0 * 100.0;

  printf("\nIdade superior à 50 anos: %i\n", sup_50);
  printf("Media das alturas das pessoas com idade entre 10 e 20 anos: %.2fm\n", media);
  printf("Porcentagem de pessoas com peso inferior à 40kg: %.2f%%\n", p);

  return 0;
}
