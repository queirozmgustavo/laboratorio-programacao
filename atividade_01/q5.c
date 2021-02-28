#include <stdio.h>

/*
    O preço de um automóvel é calculado pela soma do preço de fábrica com o preço dos impostos (45% do preço de fábrica) e a percentagem do revendedor (28% do preço de fábrica). Faça um programa que leia (receba por meio do teclado) a marca, o modelo e o preço de fábrica. Em seguida, imprima a marca, o modelo e o preço final do automóvel.
*/
int main(void) {
  char marca[20], modelo[20];
  float preco_fabrica, preco_final;

  printf("Informe o marca: ");
  scanf("%s", marca);

  printf("Informe o modelo: ");
  scanf("%s", modelo);

  printf("Informe o preco de fabrica: ");
  scanf("%f", &preco_fabrica);

  preco_final = preco_fabrica + (preco_fabrica * 0.45) + (preco_fabrica * 0.28);

  printf("\nMarca: %s\n", marca);
  printf("Modelo: %s\n", modelo);
  printf("Preco final: R$ %.2f\n", preco_final);
  return 0;
}