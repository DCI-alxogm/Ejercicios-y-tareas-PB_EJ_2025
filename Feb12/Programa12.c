//** Este es el programa de hoy Usando scanf,int,float, etc. Leonardo Daniel Zavala Cuellar Feb 12 *//

#include <stdio.h> //libreria estandar de C.
#include <stdlib.h> //Libreria para interaccion en pantalla

int main (){

char nombre[12];
int edad;
float temperatura;
//Cuerpo del programa
printf("¿Cual es tu nombre? \n");
scanf("%s",nombre);
printf("Hola %s este es el segundo programa del curso PB2025 \n",nombre);

printf("Introduze tu edad \n");
scanf("%i",&edad);// %i indica el tipo de variable (entero en este caso)
printf("¿Que temperatura marco el termometro la ultima vez que fuiste al mercado? \n");
scanf("%f",&temperatura);

printf("Tu edad es: %i \n",edad);
printf("Tu ultimo registro de temperatura fue:%f \n",temperatura);
printf("Wenas %s tu edad es %i y tu ultima temperatura registrada fue %f grados\n",nombre,edad,temperatura);

exit (0);
}


























