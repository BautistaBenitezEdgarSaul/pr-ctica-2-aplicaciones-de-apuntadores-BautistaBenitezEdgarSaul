#include <stdio.h>

/* Este programa crea un apuntador de tipo entero que apunta al inicio de un arreglo. */

int main() {
    int arreglo[5] = {1, 2, 3, 4, 5}, *apArr;

    apArr = &arreglo[0]; // imprime la direccion de memoria del arreglo en la posicion [0]
    printf("Direccion del arreglo en la primera posicion: %x\n", &arreglo[0]);

    // imprime la direccion de memoria del arreglo (el nombre del arreglo es un apuntador)
    printf("Direccion del arreglo: %x\n", arreglo);

    // imprime la direccion de memoria almacenada en el apuntador apArr
    printf("Direccion almacenada en el apuntador: %x\n", apArr);

    printf("*apArr = %i\n", *apArr);

    // suma una localidad al inicio del arreglo e imprime su valor
    printf("*(apArr+1) = %i\n", *(apArr + 1));
    printf("*(apArr+2) = %i\n", *(apArr + 2));
    printf("*(apArr+3) = %i\n", *(apArr + 3));
    printf("*(apArr+4) = %i\n", *(apArr + 4));

    // Escribe una linea de codigo para mostrar el valor apuntado por apArr
    printf("Recorriendo el arreglo usando un apuntador:\n");
    for (int i = 0; i < 5; i++) {
        printf("Elemento %d: %d\n", i, *(apArr + i));
    }

    // Modifica apArr para que apunte al tercer elemento
    apArr = &arreglo[3];

    // Accede al elemento con indice -2 usando el apuntador
    printf("Elemento -2: %d\n", apArr[-2]);
    printf("Elemento 0: %d\n", apArr[0]);

    // Ajusta el ciclo para que se pueda recorrer completo el arreglo de acuerdo al elemento apuntado
    for (int i = -3; i < 2; i++) {
        printf("Elemento %d: %d\n", i, *(apArr + i));
    }

    apArr = &arreglo[4];

    return 0;
}
