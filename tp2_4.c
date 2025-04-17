#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct compu {
    int velocidad; //velocidad de procesamiento de GHz (valor entre 1 y 3)
    int anio; //año de fabricación (valor entre 2015 y 2024)
    int cantidad_nucleos; //cantidad de núcleos (valor entre 1 y 8)
    char *tipo_cpu; //tipo de procesador (apuntador a cadena de caracteres)
};

// funciones
void listarPCs(struct compu pcs[], int cantidad);
void mostrarMasVieja(struct compu pcs[], int cantidad);

// arreglo predefinido de tipos de CPU
char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};

int main(){
    srand(time(NULL)); //inicializar la semilla para números aleatorios

    struct compu pcs[5];

    //generación aleatoria de datos para las 5 PCs
    for (int i = 0; i < 5; i++){
        pcs[i].velocidad = rand() % 3 + 1; //1 a 3 GHz
        pcs[i].anio = rand() % 10 + 2015; //2015 a 2024
        pcs[i].cantidad_nucleos = rand() % 8 + 1; //1 a 8 núcleos
        pcs[i].tipo_cpu = tipos[rand() % 6]; //selección aleatoria de tipo CPU
    }
    
    //llamadas a las funciones
    listarPCs(pcs, 5);
    mostrarMasVieja(pcs, 5);
    
    return 0;
}

// función para listar todas las PCs
void listarPCs(struct compu pcs[], int cantidad){
    printf("\n--- Lista de PCs ---\n");
    for (int i = 0; i < cantidad; i++){
        printf("PC #%d:\n", i + 1);
        printf("   Velocidad: %d GHz\n", pcs[i].velocidad);
        printf("   Año: %d\n", pcs[i].anio);
        printf("   Núcleos: %d\n", pcs[i].cantidad_nucleos);
        printf("   Tipo CPU: %s\n", pcs[i].tipo_cpu);
    }
    
}

//función para mostrar la PC más vieja
void mostrarMasVieja(struct compu pcs[], int cantidad){
    int indice_mas_vieja = 0;
    for (int i = 0; i < cantidad; i++){
        if (pcs[i].anio < pcs[indice_mas_vieja].anio){
            indice_mas_vieja = i;
        }
    }
    printf("\n--- PC más vieja ---\n");
    printf("   Velocidad: %d GHz\n", pcs[indice_mas_vieja].velocidad);
    printf("   Año: %d\n", pcs[indice_mas_vieja].anio);
    printf("   Núcleos: %d\n", pcs[indice_mas_vieja].cantidad_nucleos);
    printf("   Tipo CPU: %s\n", pcs[indice_mas_vieja].tipo_cpu);
}
