#include <cstdio> 

int main() {
    int numero, suma = 0, contador = 0, minimo = 0;

    printf("Ingrese un número (9999 para finalizar): ");
    scanf("%d", &numero);

    // Inicializar el mínimo con el primer número ingresado
    if (numero != 9999) {
        minimo = numero;
    }

    while (numero != 9999) {
        suma += numero;
        contador++;

        // Actualizar el mínimo
        if (numero < minimo) {
            minimo = numero;
        }

        printf("Ingrese un número (9999 para finalizar): ");
        scanf("%d", &numero);
    }

    if (contador > 0) {
        double promedio = static_cast<double>(suma) / contador;
        printf("\nPromedio de los números: %.2lf\n", promedio);
        printf("El número más pequeño es: %d\n", minimo);
    } else {
        printf("\nNo se ingresaron números válidos.\n");
    }

    return 0;
}