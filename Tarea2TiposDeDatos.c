/*2. Escribe un programa en C que:
Solicite al usuario un número entero.
Use el operador % para calcular el residuo al dividir entre 2.
Si el residuo es 0, el número es par.
Si el residuo es distinto de 0, el número es impar.
Muestra el resultado en pantalla.*/

#include<stdio.h>
int main(){

    int numeroEntero;

    printf("Introduzca un numero entrero: \n ");
    scanf("%d", &numeroEntero);

    if(numeroEntero %2 == 0)
    {
        printf("es par");
    }
    if(numeroEntero %2 != 0)
    {
        printf("no es par");
    }

}