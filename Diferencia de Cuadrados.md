# Diferencia entre el Cuadrado de la Suma y la Suma de Cuadrados

Este programa en C calcula y muestra la diferencia entre el cuadrado de la suma y la suma de los cuadrados de los primeros N números naturales introducidos por el usuario.

## Descripción del Código

### Funciones

El programa se compone de dos funciones principales y una función `main`:

1. `squareOfSum`: Esta función recibe un entero `N` y retorna el cuadrado de la suma de los primeros `N` números. Se utiliza la fórmula \(\frac{N(N + 1)}{2}\) para obtener la suma y luego se eleva al cuadrado.

2. `sumOfSquares`: Esta función recibe un entero `N` y retorna la suma de los cuadrados de los primeros `N` números. Utiliza la fórmula \(\frac{N(N + 1)(2N + 1)}{6}\) para obtener el resultado.

### Función Principal: `main`

1. Se declara la variable `N` para almacenar el valor introducido por el usuario.
2. Se le pide al usuario que introduzca el valor de `N` utilizando `printf` y `scanf`.
3. Se invocan las funciones `squareOfSum` y `sumOfSquares` para calcular los valores correspondientes.
4. Se muestran los resultados utilizando `printf`.
5. La función retorna 0, indicando una terminación exitosa del programa.

## Uso

Para utilizar el programa:

1. Compila el código.
2. Ejecuta el programa.
3. Introduce un número entero `N`.
4. Observa el cuadrado de la suma de los primeros `N` números, la suma de los cuadrados de los primeros `N` números, y la diferencia entre ambos.

## Conclusión

Este programa es una herramienta útil para calcular y comprender la diferencia entre dos operaciones matemáticas comunes en una serie de números. La implementación es directa y hace uso de fórmulas matemáticas conocidas para mejorar la eficiencia del cálculo.
