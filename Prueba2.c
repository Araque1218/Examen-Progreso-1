
//Se ingresa las indicaciones para que el usuario pueda ingresar los valores solicitados


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


