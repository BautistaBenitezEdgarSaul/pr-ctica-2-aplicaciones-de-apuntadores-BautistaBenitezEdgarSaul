// Intercambio de Valores
#include <stdio.h>

void intercambiar(int *a, int *b) {
    // Implementar intercambio aquí
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int arr[] = {5, 10};

    // Codigo para llamar a la funcion y mostrar los valores intercambiados
    printf("Valores antes del intercambio: a = %d, b = %d\n", arr[0], arr[1]);
    
    // Llamada a la funcion pasando las direcciones de los elementos del arreglo
    intercambiar(&arr[0], &arr[1]);

    printf("Valores despues del intercambio: a = %d, b = %d\n", arr[0], arr[1]);

    return 0;
}
