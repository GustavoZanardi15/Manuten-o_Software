/*Solicitação: Adicione uma verificação no código para garantir que o número fornecido
seja não negativo antes de calcular o fatorial. Informe uma mensagem de erro se o
número for negativo.*/


#include <stdio.h>

int fatorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * fatorial(n - 1);
}

int main() {
    int num;

    printf("Digite um número não-negativo: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("ERROR: O número não pode ser negativo.\n");
    } else {
        printf("O fatorial de %d é: %d\n", num, fatorial(num));
    }

    return 0;
}
