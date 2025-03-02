// 7. Accediendo a la Memoria
#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    
    // Código para imprimir direcciones de memoria aquí
    printf("Direccion de memoria del arreglo:\n");

    for (int i = 0; i < 5; i++) {
        printf("Elemento %d: Valor = %d, Direccion = %p\n", i, arr[i], &arr[i]);
        // Imprime la posicion del elemento, su valor y su direccion de memoria
    }

    return 0;
}
