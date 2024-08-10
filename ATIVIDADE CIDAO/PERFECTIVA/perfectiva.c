/*Manutenção Perfectiva
Solicitação: Melhore o software adicionando a funcionalidade de calcular a área
de um retângulo e de um triângulo, além da área de um círculo. O programa deve
solicitar ao usuário qual figura deseja calcular e fornecer a área
correspondente.
*/

#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define PI 3.14159

float areaCirculo(float raio) { return PI * raio * raio; }

float areaRetangulo(float base, float altura) { return base * altura; }

float areaTriangulo(float base, float altura) { return 0.5f * base * altura; }

void toLowerCase(char *str) {
  while (*str) {
    *str = tolower((unsigned char)*str);
    str++;
  }
}

int main() {
  float raio;
  float base;
  float altura;
  char operacao[20];

  printf("Qual figura deseja calcular (Círculo, Triângulo ou Retângulo)?\n");
  fgets(operacao, sizeof(operacao), stdin);
  operacao[strcspn(operacao, "\n")] = '\0';
  toLowerCase(operacao);

  if (strcmp(operacao, "círculo") == 0) {
    printf("Digite o raio do círculo: \n");
    scanf("%f", &raio);
    printf("A área do círculo é: %.2f\n", areaCirculo(raio));

  } else if (strcmp(operacao, "retângulo") == 0) {
    printf("Digite a base do Retângulo: \n");
    scanf("%f", &base);
    printf("Digite a altura do Retângulo: \n");
    scanf("%f", &altura);
    printf("A área do Retângulo é: %.2f\n", areaRetangulo(base, altura));

  } else if (strcmp(operacao, "triângulo") == 0) {
    printf("Digite a base do Triângulo: \n");
    scanf("%f", &base);
    printf("Digite a altura do Triângulo: \n");
    scanf("%f", &altura);
    printf("A área do Triângulo é: %.2f\n", areaTriangulo(base, altura));

  } else {
    printf("Figura não reconhecida. Por favor, escolha Círculo, Retângulo ou "
           "Triângulo.\n");
  }

  return 0;
}

/* Melhore o software adicionando a funcionalidade de calcular a área de um
retângulo e de um triângulo, além da área de um círculo. O programa deve
solicitar ao usuário qual figura deseja calcular e fornecer a área
correspondente. */