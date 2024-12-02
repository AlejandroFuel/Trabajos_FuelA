#include <cstdio> 

int main() {
    int n;

    // Leer el número positivo n
    printf("Ingrese un número positivo (n) (cero o negativo para finalizar): ");
    scanf("%d", &n);

    while (n > 0) {
        int suma = 0;

        // Calcular la suma de los primeros n números impares
        for (int i = 0; i < n; i++) {
            suma += (2 * i + 1);
        }

        // Mostrar el resultado
        printf("La suma de los primeros %d números impares es: %d\n", n, suma);

        // Leer otro número
        printf("\nIngrese un número positivo (n) (cero o negativo para finalizar): ");
        scanf("%d", &n);
    }

    printf("Fin del programa.\n");
    return 0;
}