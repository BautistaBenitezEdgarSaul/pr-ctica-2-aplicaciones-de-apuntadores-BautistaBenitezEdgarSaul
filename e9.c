// 9. Suma con Apuntadores 
#include <stdio.h>

// Funcion que suma los elementos de un arreglo usando apuntadores
int sumaArreglo(int *arr, int tamano) {
    // Implementar la suma aqui
    int suma = 0;
    int i;
    for (i = 0; i < tamano; i++) {
        suma += *(arr + i); // Sumar el valor al que apunta el puntero
    }
    return suma;
}

int main() {
    int numeros[] = {1, 2, 3, 4, 5};
    
    // Codigo para calcular y mostrar la suma
    int resultado = sumaArreglo(numeros, 5);
    printf("La suma de los elementos del arreglo es: %d\n", resultado);
    
    return 0;
}
