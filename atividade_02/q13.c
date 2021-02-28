#include <stdio.h>

int main(void) {
  int ht;
  float vh, salario, s_bruto, s_liquido, inss, ir;

  while (1) {
    printf("\nHoras trabalhadas: ");
    scanf("%i", &ht);
    printf("Valor da hora trabalhada: ");
    scanf("%f", &vh);

    s_bruto = ht * vh;
    inss = s_bruto * 0.11;
    salario = s_bruto - inss;

    if (salario <= 900) {
      s_liquido = salario;
    }
    else if (salario > 900 && salario <= 1800) {
      s_liquido = salario - (salario * 0.15) - 135; 
    }
    else if (salario > 1800) {
      s_liquido = salario - (salario * 0.275) - 360; 
    }

    printf("Salario liquido: R$ %.2f\n", s_liquido);

    char resp;

    printf("\nDeseja repetir a operacao? [S] ou [N]\n");
    scanf("%s", &resp);

    if (resp == 'N') {
      break;
    }
  }
  
  return 0;
}