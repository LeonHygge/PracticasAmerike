/*____________________  ________                     
\______   \______   \/  _____/                     
 |       _/|     ___/   \  ___                     
 |    |   \|    |   \    \_\  \                    
 |____|_  /|____|    \______  /                    
        \/                  \/                     
________   ____ ______________ ____________________
\_____  \ |    |   \_   _____//   _____/\__    ___/
 /  / \  \|    |   /|    __)_ \_____  \   |    |   
/   \_/.  \    |  / |        \/        \  |    |   
\_____\ \_/______/ /_______  /_______  /  |____|   
       \__>                \/        \/            */

    #include<stdio.h>
    int main(){
        // pongo el [31], para indicar que me guarde mas espacio
        char nombre_de_jugador[31];

        /*agrego el unsigned short, por que ninguna edad es negativa ni pasa de mas de 100 años
        de este modo me ahorro memoria*/ 
        unsigned short int edad;
        // lo mismo de arriba 
        unsigned short int nivel;
        // uso un float por que solicitare numeros decimales
        float puntos_de_experiencia;
        // uso un char simple, por que solicitare un solo caracter
        char clase_de_personaje;

        printf("Cual es tu nombre de jugador? \n");
        scanf("%s", nombre_de_jugador);

        printf("Cual es tu edad? \n");
        scanf("%hu", &edad);

        printf("cual es tu nivel? \n");
        scanf("%hu", &nivel);

        printf("Selecciona la clase de tu personaje \n");
        printf("A) MAGO \n");
        printf("B) ARQUERO \n");
        printf("C) ASESINO \n");
        printf("D) GUERRERO \n");

        scanf(" %c", &clase_de_personaje);

        printf("tu nombre de jugador es %s \n", nombre_de_jugador);
        printf("tienes %hu anios de edad \n", edad);
        printf("eres nivel %hu \n", nivel);
        if(clase_de_personaje == 'A')
        {
            printf("Y tu clase es Mago! \n");
        }
        if(clase_de_personaje == 'B')
        {
            printf("Y tu clase es Arquero! \n");
        }
        if(clase_de_personaje == 'C')
        {
            printf("Y tu clase es Asesino! \n");
        }
        if(clase_de_personaje == 'D')
        {
            printf("Y tu clase es Guerrero! \n");
        }

        printf("Bienvenido a este nuevo RPG %s ", nombre_de_jugador);
        

    }