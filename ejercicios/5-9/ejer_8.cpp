#include <cstdio> // Para getchar y printf
#include <cctype> // Para isspace

int main() {
    int caracteres = 0, palabras = 0, lineas = 0;
    bool en_palabra = false;
    int c; // Variable para almacenar caracteres

    printf("Introduce texto (Ctrl + Z para finalizar):\n");

    while ((c = getchar()) != EOF) {
        // Contar caracteres
        caracteres++;

        // Contar líneas
        if (c == '\n') {
            lineas++;
        }

        // Determinar si estamos en una palabra
        if (isspace(c)) {
            if (en_palabra) {
                palabras++;
                en_palabra = false;
            }
        } else {
            en_palabra = true;
        }
    }

    // Si el texto termina dentro de una palabra, contarla
    if (en_palabra) {
        palabras++;
    }

    // Mostrar resultados
    printf("\nResumen del texto ingresado:\n");
    printf("Caracteres: %d\n", caracteres);
    printf("Palabras: %d\n", palabras);
    printf("Líneas: %d\n", lineas);

    return 0;
}
