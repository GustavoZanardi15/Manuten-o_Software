/*Você está trabalhando para uma empresa de software que desenvolve um programa
para calcular a média aritmética de três números inteiros fornecidos pelo usuário. Um
problema foi identificado: o programa apresenta um resultado incorreto se um dos
números fornecidos for zero.
Código:*/

#include <stdio.h>
int main() {
 int num1, num2, num3;
 float media;

 printf("Digite o primeiro número: ");
 scanf("%d", &num1);

 printf("Digite o segundo número: ");
 scanf("%d", &num2);

 printf("Digite o terceiro número: ");
 scanf("%d", &num3);

 media = (float)(num1 + num2 + num3) / 3;

 printf("A média dos três números é: %.2f\n", media);

 return 0;
}

/*Solicitação de Manutenção Corretiva: Os usuários relataram que o programa está
apresentando resultados incorretos quando um dos números fornecidos é zero. Corrija
o código para que ele calcule corretamente a média aritmética, independentemente dos
valores fornecidos, incluindo o caso em que algum número seja zero.  */