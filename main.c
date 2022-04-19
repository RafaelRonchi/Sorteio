#include <stdio.h>
#include <stdlib.h>

int main() {
  int num, tent = 0, chute, j = 1;

  do {
    chute = 0;
    num = 0;
    tent = 0;

    num = rand() % 1000;
    printf("Tente acertar o número de 0 a 1000, você tem 20 tentativas \n");
    printf(" \n");

    while (tent < 20 || chute == num) {

      printf("Faça o seu chute: ");

      scanf("%d", &chute);
      tent++;

      if (chute == num) {
        break;
      }

      if (chute > num) {
        printf("Chute maior que o número\n");
        printf(" \n");
      } else if (chute < num) {
        printf("Chute menor que o número\n");
        printf(" \n");
      }
    }

    printf("Total de tentativas: %d\n ", tent);
    if (chute == num) {
      printf(" \n");
      printf("Parabéns você acertou\n");
      printf(" \n");
    } else {
      printf("Não foi desta vez");
      printf(" \n");
    }
    printf("Deseja jogar denovo?(Se sim digite 1, Se não digite 0): ");
    scanf("%d", &j);
  } while (j != 0);
}