#include <stdio.h>

int ex2() {
  int M[5][5];
  int i, j;
  int soma_linha_4 = 0, soma_coluna_2 = 0, soma_diagonal_principal = 0,
      soma_diagonal_secundaria = 0, soma_total = 0;

  printf("Digite os elementos da matriz M[5][5]:\n");
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      scanf("%d", &M[i][j]);
    }
  }

  for (j = 0; j < 5; j++) {
    soma_linha_4 += M[3][j];
  }

  for (i = 0; i < 5; i++) {
    soma_coluna_2 += M[i][1];
  }

  for (i = 0; i < 5; i++) {
    soma_diagonal_principal += M[i][i];
  }

  for (i = 0; i < 5; i++) {
    soma_diagonal_secundaria += M[i][4 - i];
  }

  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      soma_total += M[i][j];
    }
  }

  printf("Soma da linha 4: %d\n", soma_linha_4);
  printf("Soma da coluna 2: %d\n", soma_coluna_2);
  printf("Soma da diagonal principal: %d\n", soma_diagonal_principal);
  printf("Soma da diagonal secundária: %d\n", soma_diagonal_secundaria);
  printf("Soma total: %d\n", soma_total);

  return 0;
}
