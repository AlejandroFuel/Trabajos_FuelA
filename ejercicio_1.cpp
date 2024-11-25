#include <iostream>
#include <cstdio>

int main() {
    float cf1, cf2, cf3;

    printf("Ingrese la primera calificacion: ");
    scanf("%f", &cf1);
    printf("Ingrese la segunda calificacion: ");
    scanf("%f", &cf2);
    printf("Ingrese la tercera calificacion: ");
    scanf("%f", &cf3);
    

    float promedio = (cf1 + cf2 + cf3) / 3;

    printf("El promedio de las calificaciones es: %.2f\n", promedio);

    return 0;
}
