#include <iostream>
using namespace std;

int main() {
    double totalVentas;
    const double salario = 200.0;
    const double porComision = 0.09;

    cout << "Ingrese las ventas brutas <-1 para fin>: ";
    cin >> totalVentas;

    while (totalVentas!= -1) {
        double salario = salario + (totalVentas * porComision);
        cout << "El salario es: " << salario  << endl;

        cout << "\nIngrese las ventas brutas <-1 para fin>: ";
        cin >> totalVentas;
    }

    cout << "Fin del programa." << endl;
    return 0;
}
