#include <stdio.h>

int ex1() {
  int v1[5], v2[5];
  int i;

  printf("Digite os valores do vetor v1:\n");
  for (i = 0; i < 5; i++) {
    scanf("%d", &v1[i]);
  }

  printf("Digite os valores do vetor v2:\n");
  for (i = 0; i < 5; i++) {
    scanf("%d", &v2[i]);
  }

  printf("Soma dos elementos:\n");
  for (i = 0; i < 5; i++) {
    printf("%d ", v1[i] + v2[i]);
  }
  printf("\n");

  printf("Diferença dos elementos:\n");
  for (i = 0; i < 5; i++) {
    printf("%d ", v1[i] - v2[i]);
  }
  printf("\n");

  printf("Produto dos elementos:\n");
  for (i = 0; i < 5; i++) {
    printf("%d ", v1[i] * v2[i]);
  }
  printf("\n");

  printf("Divisão dos elementos:\n");
  for (i = 0; i < 5; i++) {
    if (v2[i] != 0) {
      printf("%d ", v1[i] / v2[i]);
    } else {
      printf("Divisão por zero\n");
    }
  }
  printf("\n");

  return 0;
}
