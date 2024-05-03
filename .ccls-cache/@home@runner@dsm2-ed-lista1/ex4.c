#include <stdio.h>
#include <stdlib.h>

void troca(int vet[], int a, int b) {
  int temp = vet[a];
  vet[a] = vet[b];
  vet[b] = temp;
}

int particiona(int vet[], int inicio, int fim) {
  int pivo = vet[fim];
  int pivo_indice = inicio;
  for (int i = inicio; i < fim; i++) {
    if (vet[i] <= pivo) {
      troca(vet, i, pivo_indice);
      pivo_indice++;
    }
  }
  troca(vet, pivo_indice, fim);
  return pivo_indice;
}

int particiona_random(int vet[], int inicio, int fim) {
  int pivo_indice = (rand() % (fim - inicio + 1)) + inicio;
  troca(vet, pivo_indice, fim);
  return particiona(vet, inicio, fim);
}

void quick_sort(int vet[], int inicio, int fim) {
  if (inicio < fim) {
    int pivo_indice = particiona_random(vet, inicio, fim);
    quick_sort(vet, inicio, pivo_indice - 1);
    quick_sort(vet, pivo_indice + 1, fim);
  }
}

void merge(int vet[], int left, int middle, int right) {
  int helper[right + 1];
  for (int i = left; i <= right; i++) {
    helper[i] = vet[i];
  }

  int i = left;
  int j = middle + 1;
  int k = left;
  while (i <= middle && j <= right) {
    if (helper[i] <= helper[j]) {
      vet[k] = helper[i];
      i++;
    } else {
      vet[k] = helper[j];
      j++;
    }
    k++;
  }

  while (i <= middle) {
    vet[k] = helper[i];
    i++;
    k++;
  }
}

void mergeSort(int vet[], int left, int right) {
  if (left < right) {
    int middle = (left + right) / 2;
    mergeSort(vet, left, middle);
    mergeSort(vet, middle + 1, right);
    merge(vet, left, middle, right);
  }
}

int ex4() {
  int V1[] = {5, 7, 2, 8, 1, 6};
  int V2[] = {2, 4, 6, 8, 10, 12, 11, 9, 7, 5, 3, 1};
  int V3[] = {89, 79, 32, 38, 46, 26, 43, 38, 32, 79};
  int tamanho_V1 = sizeof(V1) / sizeof(V1[0]);
  int tamanho_V2 = sizeof(V2) / sizeof(V2[0]);
  int tamanho_V3 = sizeof(V3) / sizeof(V3[0]);

  printf("Array V1 antes da ordenacao: ");
  for (int i = 0; i < tamanho_V1; i++) {
    printf("%d ", V1[i]);
  }
  printf("\n");

  printf("Array V2 antes da ordenacao: ");
  for (int i = 0; i < tamanho_V2; i++) {
    printf("%d ", V2[i]);
  }
  printf("\n");

  printf("Array V3 antes da ordenacao: ");
  for (int i = 0; i < tamanho_V3; i++) {
    printf("%d ", V3[i]);
  }
  printf("\n\n");

  quick_sort(V1, 0, tamanho_V1 - 1);
  quick_sort(V2, 0, tamanho_V2 - 1);
  quick_sort(V3, 0, tamanho_V3 - 1);

  printf("Sequência de Dados V1 depois do QuickSort: ");
  for (int i = 0; i < tamanho_V1; i++) {
    printf("%d ", V1[i]);
  }
  printf("\n");

  printf("Sequência de Dados V2 depois do QuickSort: ");
  for (int i = 0; i < tamanho_V2; i++) {
    printf("%d ", V2[i]);
  }
  printf("\n");

  printf("Sequência de Dados V3 depois do QuickSort: ");
  for (int i = 0; i < tamanho_V3; i++) {
    printf("%d ", V3[i]);
  }
  printf("\n\n");

  int V1_new[] = {5, 7, 2, 8, 1, 6};
  int V2_new[] = {2, 4, 6, 8, 10, 12, 11, 9, 7, 5, 3, 1};
  int V3_new[] = {89, 79, 32, 38, 46, 26, 43, 38, 32, 79};

  mergeSort(V1_new, 0, tamanho_V1 - 1);
  mergeSort(V2_new, 0, tamanho_V2 - 1);
  mergeSort(V3_new, 0, tamanho_V3 - 1);

  printf("Sequência de Dados V1 depois do MergeSort: ");
  for (int i = 0; i < tamanho_V1; i++) {
    printf("%d ", V1_new[i]);
  }
  printf("\n");

  printf("Sequência de Dados V2 depois do MergeSort: ");
  for (int i = 0; i < tamanho_V2; i++) {
    printf("%d ", V2_new[i]);
  }
  printf("\n");

  printf("Sequência de Dados V3 depois do MergeSort: ");
  for (int i = 0; i < tamanho_V3; i++) {
    printf("%d ", V3_new[i]);
  }
  printf("\n");

  return 0;
}
