#include <stdio.h>
#include <stdlib.h> // Para la función rand()
#include <time.h>   // Para la función time()

#define N 5
#define M 7

int main() {
    int i, j;
    int mt[N][M];
    int *ptr; // Puntero para recorrer la matriz

    // Inicializar el generador de números aleatorios
    srand(time(NULL));

    ptr = &mt[0][0]; // Inicializar el puntero al primer elemento de la matriz

    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            *ptr = 1 + rand() % 100;
            printf("%d ", *ptr);
            ptr++; // Mover el puntero al siguiente elemento
        }
        printf("\n");
    }

    return 0;
}