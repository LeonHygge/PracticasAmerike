/*Objetivo:
Identificar y corregir errores de sintaxis, 
lógica y buenas prácticas en un programa en C que calcula el costo total de una compra con IVA.
Contexto del problema:
Un cliente compra varios productos. El programa debe pedir el precio unitario y la cantidad, 
calcular el subtotal, aplicar el IVA (16%) y mostrar el total a pagar.*/

#include <stdio.h>

int main() {
    float precio, cantidad, subtotal, iva, total;

    printf("Ingrese el precio del producto: ");
    scanf("%f", &precio); 

    printf("Ingrese la cantidad: ");
    scanf("%f", &cantidad); 

    subtotal = precio * cantidad;
    iva = subtotal * 0.16;
    total = subtotal + iva;

    printf("Subtotal: %f\n", subtotal);
    printf("IVA: %f\n", iva);
    printf("Total a pagar: %.2f\n", total);

    return 0;

    }