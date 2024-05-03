#include <stdio.h>

int ex6() {
  int a[] = {1, 2, 3, 4, 5};
  int *pa;
  pa = &a[0];

  printf("%d\n", a[3]);
  printf("%d\n", *(a + 3));
  printf("%d\n", pa[1]);
  printf("%d\n", *(pa + 1));
  pa++;

  return 0;
}
