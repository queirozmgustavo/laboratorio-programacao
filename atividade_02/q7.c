#include <stdio.h>

/*
    Escreva um programa que leia vários números inteiros e positivos, calculando ao final da sequencia a soma e a média desses números. A sequencia termina quando o usuário entrar com um valor negativo (esse valor não deve fazer parte de nenhum dos cálculos).
*/

int main(void) {
  int n, soma = 0;
  float media, cont = 0;

  while (1) {
    printf("Digite um numero: ");
    scanf("%i", &n);

    if (n < 0) {
      printf("\nSomatorio: %i\n", soma);
      printf("Media: %.2f\n", media);
      break;
    }

    cont += 1;
    soma += n;
    media = soma / cont;
  }

  return 0;
}