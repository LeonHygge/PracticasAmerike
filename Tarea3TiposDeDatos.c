/*3. Escribe un programa en C que:
Solicite dos números enteros.
Determine si el primer número es múltiplo del segundo.*/
#include<stdio.h>
int main(){

    int num1;
    int num2;
    // EL JUEGO DE LOS MULTIPLOS

    printf("Oye, dame un numero \n");
    scanf("%d", &num1);

    printf("Bien, ahora dame otro \n");
    scanf("%d", &num2);

    if(num1 % num2 == 0)
    {
        printf("Woala, tus numeros SI son multiplos! :)");
    }
    if(num1 % num2 != 0)
    {
        printf("Ooow, tus numero NO son multiplos :(");
    }
}