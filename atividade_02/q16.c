#include <stdio.h>
#include <math.h>

/*
    Construa um programa para calcular o valor a ser pago pelo período de estacionamento do automóvel (PAG). O usuário entra com os seguintes dados: hora (HE) e minuto (ME) de entrada, hora (HS) e minuto (MS) de saída. Sabe-se que este estacionamento cobra hora cheia, ou seja, se passar um minuto ele cobra a hora inteira. O valor cobrado pelo estacionamento é:

    R$ 4,00 para 1 hora de estacionamento
    R$ 6,00 para 2 horas de estacionamento
    R$ 1,00 por hora adicional (acima de 2 horas)
*/

int main(void) {
  int he, me, hs, ms;
  float pag, t;

  printf("Horario da entrada (HH:MM): ");
  scanf("%i:%i", &he, &me);
  printf("Horario da saida (HH:MM): ");
  scanf("%i:%i", &hs, &ms);

  t = ((hs * 60 + ms) - (he * 60 + me)) / 60.0;
  t = ceil(t);

  if (t == 1) {
    pag = 4;
  }
  else if (t == 2) {
    pag = 6;
  }
  else if (t > 2) {
    pag = 6 + (t - 2);
  }

  printf("\nValor do estacionamento: R$ %.2f\n", pag);

  return 0;
}