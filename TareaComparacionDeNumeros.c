/*Escribe un programa en C que:
Solicite al usuario ingresar dos números enteros.
Compare los dos números usando los siguientes operadores:
== (igual)
!= (no es igual)
< (menor)
> (mayor)
<= (menor o igual)
>= (mayor o igual)
Muestre en pantalla los resultados de cada comparación.
Usa una estructura clara con múltiples sentencias if para evaluar cada condición.*/

#include <stdio.h>

int main() {
    int n1, n2;

    printf("ingresa el primer numero: \n");
    scanf("%d", &n1);
    
    printf("ingresa el segundo numero: \n");
    scanf("%d", &n2);

    // comparaciones directas
    if (n1 == n2) {
        printf("%d es igual que %d \n", n1, n2);
    }
    
    if (n1 != n2) {
        printf("%d no es igual a %d \n", n1, n2);
    }
    
    if (n1 < n2) {
        printf("%d es menor que %d \n", n1, n2);
    }
    
    if (n1 > n2) {
        printf("%d es mayor que %d \n", n1, n2);
    }
    
    if (n1 <= n2) {
        printf("%d es menor o igual a %d \n", n1, n2);
    }
    
    if (n1 >= n2) {
        printf("%d es mayor o igual a %d \n", n1, n2);
    }

    return 0;
    }