// 10. Ordenamiento con Apuntadores (Burbuja) 
#include <stdio.h>

// Funcion que ordena un arreglo usando el metodo burbuja con apuntadores
void ordenarBurbuja(int *arr, int tamano) {
    int i, j, temp;
    
    // Implementar algoritmo de ordenamiento aqui
    for (i = 0; i < tamano - 1; i++) {
        for (j = 0; j < tamano - i - 1; j++) {
            if (*(arr + j) > *(arr + j + 1)) { 
                // Intercambiar valores usando un auxiliar
                temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

int main() {
    int arr[] = {34, 12, 56, 78, 23};
    int tamano = sizeof(arr) / sizeof(arr[0]);
    int i;
    
    // Codigo para ordenar y mostrar el arreglo
    printf("Arreglo original:\n");
    for (i = 0; i < tamano; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
    
    ordenarBurbuja(arr, tamano);
    
    printf("Arreglo ordenado:\n");
    for (i = 0; i < tamano; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
    
    return 0;
}
