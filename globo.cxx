#include <stdio.h>
#include <math.h>

int main()
 {
    double l, pt, at, pi;

    // Asignar valores
    l = 7; 
    pi = 3.1416; 

    // Calcular el at
    at = ((pi * pow((3 * l) / 2, 2)) / 2) + (2 * (l * (3 * l))) + (l * (3 * l));

    // Calcular el pt
    pt= l*(7+2*sqrt(10)+1.5*pi);

    // Resultado 
    printf("El area es: %f\n", at);
    printf("El perimetro es: %f\n", pt);

    return 0;
}