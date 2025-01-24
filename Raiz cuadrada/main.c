#include <stdio.h>
#include <stdlib.h>

int main() {
    float x = 0.0; // valor que usará el usuario
    float b = 0.0; // aproximación inicial
    float error = 0.00001; // margen de error para detener el ciclo
    int cnt = 0; //dato de tipo entero
    printf("Calculadora de Raiz Cuadrada\n");
    printf("Ingrese el numero:\n");
    scanf("%f", &x);

    b = x; // inicializamos b con el número ingresado

    // Método de Newton para aproximación de la raíz cuadrada
    while ((b - x / b) > error)
    {
        printf("\nValor de b: %f",b);
        cnt++;
        b = 0.5 * (b + x / b); // mejora la aproximación
    }

    printf("\nLa raiz cuadrada de %f es: %f\n", x, b);
    printf("\nSe itero %d: %d\n",cnt);


    return 0;
}

