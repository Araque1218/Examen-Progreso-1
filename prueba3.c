
//el ultimo paso sirve al usuario a tener el resultado de los valores que el ingreso que son en este caso, la suma de los digitos del numero ingresado

#include <stdio.h>

int sumar_digitos(int n);

int main() {
    int num, resultado;
    
    // Solicitar al usuario que ingrese un número entero positivo
    printf("Ingrese un número entero: ");
    scanf("%d", &num);
    
    // Llamar a la función sumar_digitos para obtener el resultado solicitado 
    resultado = sumar_digitos(num);
    
    // Mostrar el resultado obtenido
    printf("El resultado es: %d\n", resultado);
    
    return 0;
}

// Función que suma los dígitos de un número hasta que el resultado es un número de un dígito
int sumar_digitos(int n) {
    int suma = 0;
    
    while (n > 0 || suma > 9) {
        if (n == 0) {
            n = suma;
            suma = 0;
        }
        suma += n % 10;
        n /= 10;
    }
    
    return suma;
}
