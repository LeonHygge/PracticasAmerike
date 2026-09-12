/*4. Escribe un programa en C que:

Declare una serie de caracteres: A, B, C, a, b, c, 0, 1, 2, $, *, +, /, y el espacio ' '.
Imprima cada carácter junto con su equivalente entero (ASCII).
Usa printf con los formatos %c y %d.*/
#include<stdio.h>
int main(){

    // Declaracion de la serie de caracteres completa
    char v1 = 'A', v2 = 'B', v3 = 'C';
    char v4 = 'a', v5 = 'b', v6 = 'c';
    char v7 = '0', v8 = '1', v9 = '2';
    char v10 = '$', v11 = '*', v12 = '+', v13 = '/';
    char v14 = ' '; 

    // Impresion de cada caracter con su valor ASCII (%c y %d)
    printf("El caracter %c equivale al numero %d \n", v1, v1);
    printf("El caracter %c equivale al numero %d \n", v2, v2);
    printf("El caracter %c equivale al numero %d \n", v3, v3);
    
    printf("El caracter %c equivale al numero %d \n", v4, v4);
    printf("El caracter %c equivale al numero %d \n", v5, v5);
    printf("El caracter %c equivale al numero %d \n", v6, v6);
    
    printf("El caracter %c equivale al numero %d \n", v7, v7);
    printf("El caracter %c equivale al numero %d \n", v8, v8);
    printf("El caracter %c equivale al numero %d \n", v9, v9);
    
    printf("El caracter %c equivale al numero %d \n", v10, v10);
    printf("El caracter %c equivale al numero %d \n", v11, v11);
    printf("El caracter %c equivale al numero %d \n", v12, v12);
    printf("El caracter %c equivale al numero %d \n", v13, v13);
    
    printf("El caracter '%c' equivale al numero %d \n", v14, v14);

    return 0;
  
}