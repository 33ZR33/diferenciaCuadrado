#include <stdio.h>

// Función para calcular el cuadrado de la suma de los primeros N números
long long squareOfSum(int N) {
    long long sum = (N * (N + 1)) / 2;
    return sum * sum;
}

// Función para calcular la suma de los cuadrados de los primeros N números
long long sumOfSquares(int N) {
    return (N * (N + 1) * (2 * N + 1)) / 6;
}

int main() {
    int N;
    printf("Introduce el valor de N: ");
    scanf("%d", &N);

    long long squareSum = squareOfSum(N);
    long long squaresSum = sumOfSquares(N);

    printf("El cuadrado de la suma de los primeros %d números es: %lld\n", N, squareSum);
    printf("La suma de los cuadrados de los primeros %d números es: %lld\n", N, squaresSum);
    printf("La diferencia es: %lld\n", squareSum - squaresSum);

    return 0;
}