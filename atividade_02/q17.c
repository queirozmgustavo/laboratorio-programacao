#include <stdio.h>

/*
    Faça um programa que receba a idade e o estado civil(C - casado, S - solteiro, V - viúvo e D – desquitado ou separado) de 20 pessoas. Calcule e imprima:

    a) a quantidade de pessoas casadas;
    b) a quantidade de pessoas solteiras;
    c) a média das idades das pessoas viúvas;
    d) a porcentagem de pessoas desquitadas ou separadas dentre todas as pessoas analisadas.
*/

int main(void) {
  int idade, c = 0, s = 0, d = 0, soma_v = 0;
  float v = 0, med_v, p_d;
  char estado_civil;

  for (int i = 1; i < 21; i++) {

    printf("\nIdade da %iª pessoa: ", i);
    scanf("%i", &idade);
    printf("Estado civil da %iª pessoa: ", i);
    scanf("%s", &estado_civil);

    if (estado_civil == 'C') {
      c += 1;
    }
    else if (estado_civil == 'S') {
      s += 1;
    }
    else if (estado_civil == 'V') {
      soma_v += idade;
      v += 1;
    }
    else if (estado_civil == 'D') {
      d += 1;
    }
  }

  med_v = soma_v / v;
  p_d = d / 20.0 * 100.0;


  printf("\nQuantidade de pessoas casadas: %i\n", c);
  printf("Quantidade de pessoas solteiras: %i\n", s);
  printf("Media das idades das pessoas viuvas: %.0f\n", med_v);
  printf("Porcentagem de pessoas desquitadas ou separadas: %.2f%%\n", p_d);
  return 0;
}