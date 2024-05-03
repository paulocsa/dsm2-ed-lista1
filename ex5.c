#include<stdio.h>

int ex5() {
    int y, *p, x;
    y = 0; // Inicializa a variável y com o valor 0
    p = &y; // Atribui o endereço de y ao ponteiro p
    x = 4; // Atribui o valor 4 à variável x
    (*p)++; // Incrementa o valor apontado por p (y)
    x--; // Decrementa o valor de x
    (*p) += x; // Adiciona o valor de x ao valor apontado por p (y)
    printf("y = %d\n", y); // Imprime o valor final de y
    return 0;
}