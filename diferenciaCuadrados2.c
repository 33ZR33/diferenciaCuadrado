#include <stdio.h>

int main() {
    int N;
    printf("Ingrese N: ");
    scanf("%d", &N);

    int squareOfSum = 0;
    int sumOfSquares = 0;

    for(int i=1; i<=N; i++) {
        squareOfSum += i;
        sumOfSquares += i*i;
    }

    squareOfSum = squareOfSum * squareOfSum;

    int difference = squareOfSum - sumOfSquares;

    printf("La diferencia entre el cuadrado de la suma y la suma de los cuadrados es: %d\n", difference);

    return 0;
}