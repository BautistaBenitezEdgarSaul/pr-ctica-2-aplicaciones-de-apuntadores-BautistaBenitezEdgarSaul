#include <stdio.h>

int main() {
    char *ap, c, d, e;
    c = 'x';
    d = 'z';
    e = '\t';

    //Escribe el código para imprimir las direcciones de c, d y e
    ap = &c; // el valor del apuntador es la direccion de memoria de c

    // Imprimir direcciones de memoria 
    printf("Direccion de memoria de c: %p\n", ap);
    printf("Direccion de memoria de d: %p\n", &d);
    printf("Direccion de memoria de e: %p\n", &e);

    // imprime el carácter de la localidad a la que apunta
    printf("Caracter: %c\n", *ap);
    printf("Codigo ASCII: %d\n", *ap);
    printf("Direccion de memoria: %p\n", ap);

    ap = &d;
    printf("Caracter: %c\n", *ap);
    printf("Codigo ASCII: %d\n", *ap);
    printf("Direccion de memoria: %p\n", ap);

    ap = &e;
    printf("Caracter: %c\n", *ap);
    printf("Codigo ASCII: %d\n", *ap);
    printf("Direccion de memoria: %p\n", ap);

    return 0;
}
