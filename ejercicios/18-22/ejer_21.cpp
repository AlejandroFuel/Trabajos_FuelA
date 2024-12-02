#include <cstdio> 

int main() {
    double capital, tasa, interes;
    int dias;

    printf("Ingrese el capital del préstamo <-1 para fin>: ");
    scanf("%lf", &capital);

    while (capital != -1) {
        printf("Ingrese la tasa de interés anual (en porcentaje): ");
        scanf("%lf", &tasa);

        printf("Ingrese el número de días del préstamo: ");
        scanf("%d", &dias);

        // Convertir la tasa anual a diaria y calcular el interés simple
        interes = capital * (tasa / 100) * dias / 365;

        printf("El interés simple es: %.2lf dólares\n", interes);

        printf("\nIngrese el capital del préstamo <-1 para fin>: ");
        scanf("%lf", &capital);
    }

    printf("Fin del programa.\n");
    return 0;
}