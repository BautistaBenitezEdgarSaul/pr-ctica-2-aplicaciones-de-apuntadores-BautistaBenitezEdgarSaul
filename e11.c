// 11. Buscar en un Arreglo 
#include <stdio.h>

// Funcion que busca un elemento en el arreglo y devuelve su direccion
int *buscarElemento(int *arr, int tamano, int valor) {
    int i;
    // Implementar busqueda aqui
    for (i = 0; i < tamano; i++) {
        if (*(arr + i) == valor) {
            return (arr + i); // Retorna la direccion del elemento encontrado
        }
    }
    return NULL; // Retorna NULL si el elemento no se encuentra
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int tamano = sizeof(arr) / sizeof(arr[0]);
    int valor = 30; // Numero a buscar
    int *resultado;

    // Codigo para buscar un numero y mostrar su direccion
    resultado = buscarElemento(arr, tamano, valor);

    if (resultado != NULL) {
        printf("Elemento %d encontrado en la direccion: %p\n", valor, (void *)resultado);
    } else {
        printf("Elemento %d no encontrado en el arreglo.\n", valor);
    }

    return 0;
}
