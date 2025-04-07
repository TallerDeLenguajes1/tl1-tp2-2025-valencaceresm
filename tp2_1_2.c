#include <stdio.h>
#include <stdlib.h> // Para la función rand()
#include <time.h>   // Para la función time()

#define N 20

int main() {
    int i;
    double vt[N];
    double *ptr; // Puntero para recorrer el vector

    // Inicializar el generador de números aleatorios
    srand(time(NULL));

    ptr = vt; // Inicializar el puntero al inicio del vector

    for (i = 0; i < N; i++) {
        *ptr = 1 + rand() % 100;
        printf("%f ", *ptr);
        ptr++; // Mover el puntero al siguiente elemento
    }

    printf("\n"); // Agrega un salto de línea al final
    return 0;
}