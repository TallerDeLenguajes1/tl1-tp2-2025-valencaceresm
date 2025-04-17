#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct compu {
    int velocidad; //velocidad de procesamiento de GHz (valor entre 1 y 3)
    int anio; //año de fabricación (valor entre 2015 y 2024)
    int cantidad_nucleos; //cantidad de núcleos (valor entre 1 y 8)
    char *tipo_cpu; //tipo de procesador (apuntador a cadena de caracteres)
};

// arreglo predefinido de tipos de CPU
char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
