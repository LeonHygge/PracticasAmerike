/*1: Solicite tres números enteros diferentes.
Calcule y muestre:
La suma.
El promedio.
El producto.
El menor valor.
El mayor valor.*/
#include<stdio.h>

int main(){



    int num1;
    int num2;
    int num3;
    int suma, producto, mayor, menor;
    float promedio;
    


    printf("Introduzca el numero 1 \n");
    scanf("%d", &num1);

    printf("Introduzca el numero 2 \n");
    scanf("%d", &num2);

    printf("Introduzca el numero 3 \n");
    scanf("%d", &num3);

    suma = num1 + num2 + num3;
    producto = num1 * num2 * num3;
    promedio = suma / 3.0;
    mayor = num1;
    menor = num1;

    if(num2 > mayor)
    {
        mayor = num2;
    }
    if(num3 > mayor)
    {
        mayor = num3;
    }
    if(num2 < menor)
    {
        menor = num2;
    }
    if(num3 < menor)
    {
        menor = num3;
    }
    

    printf("la suma es %d \n", suma);
    printf("el pruducto es %d \n", producto);
    printf("el promedio es %.2f \n", promedio);
    printf("el numero mayor es %d \n", mayor);
    printf("el numero menor es %d", menor);

    
}