#include <stdio.h>

/*
    Construa um programa que calcule e apresente o total da compra realizada pelo cliente em uma loja. São fornecidos para o programa, o preço da etiqueta (PE) de cada um dos produtos comprados e, com a compra encerrada, a condição de pagamento escolhida pelo cliente (CP).

    [1] À vista em dinheiro ou cheque, com 10% de desconto
    [2] À vista com cartão de crédito, com 5% de desconto
    [3] Em 2 vezes, preço normal de etiqueta sem juros
    [4] Em 3 vezes, preço de etiqueta com acréscimo de 10%

    Uma compra pode ser composta por mais do que um produto, portanto, deve ser indicado para o programa quando a compra deve ser encerrada (escolha a forma que desejar).
*/

int main(void) {
  float pe, total = 0;
  int cp, resp;

  while (1) {
    printf("\nValor do produto: ");
    scanf("%f", &pe);

    total += pe;

    printf("\nDigite [1] para adicionar outro produto ou [0] para finalizar: ");
    scanf("%i", &resp);

    if (resp == 0) {
      break;
    }
  }

  printf("\nCodigo da condicao de pagamento: ");
  scanf("%i", &cp);

  if (cp == 1) {
    total = total - (total * 0.10);
  }
  else if (cp == 2) {
    total = total - (total * 0.05);
  }
  else if (cp == 4) {
    total = total + (total * 0.10);
  }

  printf("\nValor total: R$ %.2f\n", total);
  return 0;
}