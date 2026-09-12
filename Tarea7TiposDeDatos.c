#include <stdio.h>

int main() {
    int n1, n2, n3, temp;

    printf("Ingresa 3 numeros enteros diferentes: \n");
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);

    // Torneo de intercambios: Si el de la izquierda es mayor, los cambiamos de lugar
    if (n1 > n2) { 
        temp = n1; 
        n1 = n2; 
        n2 = temp; 
    }
    if (n1 > n3) { 
        temp = n1; 
        n1 = n3; 
        n3 = temp; 
    }
    if (n2 > n3) { 
        temp = n2; 
        n2 = n3; 
        n3 = temp; 
    }

    // Despues de los intercambios, quedaron ordenados perfectamente
    printf("Menor: %d \n", n1);
    printf("Intermedio: %d \n", n2);
    printf("Mayor: %d \n", n3);

    return 0;
    }