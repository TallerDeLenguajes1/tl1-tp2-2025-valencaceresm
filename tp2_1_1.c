#include <stdio.h>
#include <stdlib.h> // Para la función rand()
#include <time.h>   // Para la función time()

#define N 20

int main() {
    int i;
    double vt[N];

    // Inicializar el generador de números aleatorios
    srand(time(NULL));

    for (i = 0; i < N; i++) {
        vt[i] = 1 + rand() % 100;
        printf("%f ", vt[i]);
    }
    printf("\n"); // Agrega un salto de línea al final
    return 0;
}