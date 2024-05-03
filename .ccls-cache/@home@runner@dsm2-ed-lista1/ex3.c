#include <stdio.h>

void bubbleSort(int* v, int n) {
    int fim, i, aux;
    for (fim = n - 1; fim > 0; fim--) {
        for (i = 0; i < fim; i++) {
            if (v[i] > v[i + 1]) {
                aux = v[i];
                v[i] = v[i + 1];
                v[i + 1] = aux;
            }
        }
    }
}

void insertionSort(int* v, int n) {
    int i, j, aux;
    for (i = 1; i < n; i++) {
        aux = v[i];
        j = i - 1;
        while (j >= 0 && v[j] > aux) {
            v[j + 1] = v[j];
            j = j - 1;
        }
        v[j + 1] = aux;
    }
}

void selectionSort(int* v, int n) {
    int i, j, min, aux;
    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i + 1; j < n; j++) {
            if (v[j] < v[min])
                min = j;
        }
        if (v[i] != v[min]) {
            aux = v[i];
            v[i] = v[min];
            v[min] = aux;
        }
    }
}

int ex3() {
    int dados[] = {1, 6, 8, 2, 4, 9, 5};
    int tam = sizeof(dados) / sizeof(dados[0]);

    printf("Dados originais: ");
    for (int i = 0; i < tam; i++) {
        printf("%d ", dados[i]);
    }
    printf("\n");

    bubbleSort(dados, tam);
    printf("Bubble Sort: ");
    for (int i = 0; i < tam; i++) {
        printf("%d ", dados[i]);
    }
    printf("\n");

    int dados2[] = {1, 6, 8, 2, 4, 9, 5};

    insertionSort(dados2, tam);
    printf("Insertion Sort: ");
    for (int i = 0; i < tam; i++) {
        printf("%d ", dados2[i]);
    }
    printf("\n");

    int dados3[] = {1, 6, 8, 2, 4, 9, 5};

    selectionSort(dados3, tam);
    printf("Selection Sort: ");
    for (int i = 0; i < tam; i++) {
        printf("%d ", dados3[i]);
    }
    printf("\n");

    printf("Soma dos elementos:\n");
    for (int i = 0; i < tam; i++) {
        printf("%d ", dados[i] + dados2[i] + dados3[i]);
    }
    printf("\n");

    printf("Diferença dos elementos:\n");
    for (int i = 0; i < tam; i++) {
        printf("%d ", dados[i] - dados2[i] - dados3[i]);
    }
    printf("\n");

    printf("Produto dos elementos:\n");
    for (int i = 0; i < tam; i++) {
        printf("%d ", dados[i] * dados2[i] * dados3[i]);
    }
    printf("\n");

    printf("Divisão dos elementos:\n");
    for (int i = 0; i < tam; i++) {
        printf("%d ", dados[i] / dados2[i] / dados3[i]);
    }
    printf("\n");

    return 0;
}
