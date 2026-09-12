/*5. Escribe un programa en C que:

Solicite un número entero de cinco dígitos.
Separe el número en sus dígitos individuales.
Muestre cada dígito separado por tres espacios.
Use solo operaciones aritméticas.*/
#include<stdio.h>
int main(){
// Variables para guardar cada numero
    int numero;
    int d1, d2, d3, d4, d5; 

    printf("Ingresa un numero entero de cinco digitos (ej. 12345): \n");
    scanf("%d", &numero);

    // 1. Para el primer numero, lo dividimos entre 10,000
    d1 = numero / 10000;
    
    // 2. Para los de en medio, primero cortamos los numeros de la derecha, y luego rescatamos el ultimo con % 10
    d2 = (numero / 1000) % 10;
    d3 = (numero / 100) % 10;
    d4 = (numero / 10) % 10;
    
    // 3. Para el ultimo, solo le sacamos el residuo de 10 directamente
    d5 = numero % 10;

    // Imprimimos todo usando EXACTAMENTE tres espacios entre cada comodin %d
    printf("%d   %d   %d   %d   %d\n", d1, d2, d3, d4, d5);

    return 0;

}