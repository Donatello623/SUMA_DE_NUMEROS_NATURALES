# Proyecto: Suma de los Primeros N Números Naturales (Implementación Recursiva)

Este proyecto es un programa en C++ que calcula la suma de los primeros `n` números naturales utilizando recursión.

## Descripción
El programa solicita al usuario que ingrese un número entero positivo y calcula la suma de los primeros `n` números naturales mediante una función recursiva llamada `sumaRecursiva`. Esta función suma el número actual al resultado de la suma de los números naturales anteriores. Si el usuario ingresa un número negativo, el programa muestra un mensaje de error.

### Características
- Uso de recursión para realizar el cálculo de la suma.
- Validación de entrada para asegurarse de que el número es positivo.
- Interacción amigable con el usuario mediante entrada y salida en consola.

## Requisitos
Para compilar y ejecutar este programa, necesitarás:

- Un compilador de C++ (como `g++` o cualquier IDE que soporte C++).

## Ejecución
Sigue estos pasos para ejecutar el programa:

1. **Clonar o copiar el archivo fuente:** Guarda el código en un archivo llamado `suma_recursiva.cpp`.

2. **Compilar el programa:** Ejecuta el siguiente comando en la terminal:

   ```bash
   g++ suma_recursiva.cpp -o suma_recursiva
   ```

3. **Ejecutar el programa:**

   ```bash
   ./suma_recursiva
   ```

4. **Ingresar un valor:** Ingresa un número entero positivo cuando el programa lo solicite.

## Ejemplo de Ejecución
### Entrada válida
```
Ingrese un numero entero positivo para calcular la suma de los primeros n numeros naturales: 5
La suma de los primeros 5 numeros naturales es: 15
```

### Entrada inválida
```
Ingrese un numero entero positivo para calcular la suma de los primeros n numeros naturales: -3
El numero ingresado no es valido. Debe ser un numero entero positivo.
```

## Notas
- Este programa es ideal para practicar conceptos de recursión y validación de entrada en C++.
- Puedes modificar el programa para adaptarlo a otros propósitos matemáticos que utilicen recursión.

---

Este proyecto demuestra una implementación sencilla del uso de funciones recursivas para resolver problemas matemáticos.
