/*Manutenção Adaptativa
Você trabalha para uma empresa que mantém um software que realiza operações
básicas de cálculo, como adição e subtração. Recentemente, o cliente solicitou
que o software também suporte operações de multiplicação e divisão.*/

#include <stdio.h>

int main() {
  int num1, num2;
  char operacao;

  printf("Digite o primeiro número: ");
  scanf("%d", &num1);

  printf("Digite o segundo número: ");
  scanf("%d", &num2);

  printf("Digite a operação desejada (+ , - , / ou * ): ");
  scanf(" %c", &operacao);

  if (operacao == '+') {
    printf("Resultado: %d\n", num1 + num2);
  } else if (operacao == '-') {
    printf("Resultado: %d\n", num1 - num2);
    } else if (operacao == '*') {
      printf("Resposta: %d\n", num1 * num2);
  } else if (operacao == '/') {
      if (num2 !=0){
    printf("Resposta: %d\n", num1 / num2);
  } else {
        printf("ERRO: Divisão por zro não é permitida.\n");
      }
    } else {
    printf("Operação inválida.\n");
  
  }
  return 0;
}

/*Solicitação de Manutenção Adaptativa: Atualize o software para que ele possa
realizar operações de multiplicação (*) e divisão (/) além de adição (+) e
subtração (-). Certifique-se de que o programa trate a divisão por zero
corretamente e informe uma mensagem de erro adequada.*/