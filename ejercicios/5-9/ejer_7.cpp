#include <cstdio> 

int main() {
    float a, b, c;

    // Leer los tres lados del triángulo
    printf("Introduce tres valores float diferentes a cero:\n");
    scanf("%f %f %f", &a, &b, &c);

    // Validar que los valores son mayores que cero
    if (a <= 0 || b <= 0 || c <= 0) {
        printf("Todos los valores deben ser mayores que cero.\n");
        return 1;
    }

    // Comprobar si pueden formar un triángulo (condición del triángulo)
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("Los valores pueden representar los lados de un triángulo.\n");

        // Verificar si es un triángulo rectángulo
        // Comprobar el teorema de Pitágoras: a² + b² = c² (o sus permutaciones)
        if ((a * a + b * b == c * c) || 
            (a * a + c * c == b * b) || 
            (b * b + c * c == a * a)) {
            printf("Además, es un triángulo rectángulo.\n");
        } else {
            printf("Pero no es un triángulo rectángulo.\n");
        }
    } else {
        printf("Los valores NO pueden representar los lados de un triángulo.\n");
    }

    return 0;
}
