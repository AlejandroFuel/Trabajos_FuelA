#include <cstdio> 

int main() {
    int n;

    // Pedir al usuario el tamaño del lado del cuadrado
    printf("Introduce el tamaño del lado del cuadrado (entre 1 y 20): ");
    scanf("%d", &n);

    // Validar que el tamaño esté dentro del rango
    if (n < 1 || n > 20) {
        printf("El tamaño debe estar entre 1 y 20.\n");
        return 1;
    }

    // Generar el cuadrado hueco
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Imprimir un asterisco si estamos en el borde del cuadrado
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n"); // Nueva línea al final de cada fila
    }

    return 0;
}
