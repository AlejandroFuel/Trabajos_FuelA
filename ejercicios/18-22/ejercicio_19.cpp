#include <cstdio> 

int main() {
    int numeroCuenta;
    double saldoInicial, totalCreditos, limiteCredito, nuevoSaldo;

    printf("Ingrese número de cuenta <-1 para fin>: ");
    scanf("%d", &numeroCuenta);

    while (numeroCuenta != -1) {
        printf("Ingrese balance inicial: ");
        scanf("%lf", &saldoInicial);

        printf("Ingrese total de créditos: ");
        scanf("%lf", &totalCreditos);

        printf("Ingrese límite de crédito: ");
        scanf("%lf", &limiteCredito);

        // Calcular el nuevo saldo
        nuevoSaldo = saldoInicial + totalCreditos;

        // Mostrar resultados
        printf("\nNúmero de cuenta: %d\n", numeroCuenta);
        printf("Límite de crédito: %.2lf\n", limiteCredito);
        printf("Nuevo saldo: %.2lf\n", nuevoSaldo);

        if (nuevoSaldo > limiteCredito) {
            printf("Límite de crédito excedido.\n");
        }

        printf("\nIngrese número de cuenta <-1 para fin>: ");
        scanf("%d", &numeroCuenta);
    }

    printf("Fin del programa.\n");
    return 0;
}