/*Programacion basica Ejercicio Leonardo Daniel Zavala Cuellar 
24/02/2025*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main (){
float x,y,z;

float r,tta,agul,r1,tta1,z1;

printf("Introduzca el valor x:\n");
scanf("%f",&x);
printf("Introduzca el valor y:\n");
scanf("%f",&y);
printf("Introduzca el valor z:\n");
scanf("%f",&z);
//esfericas
r= sqrt((x*x)+(y*y)+(z*z));
tta= atan(y/x);
agul= acos(z/r);
//cilindricas
r1=sqrt((x*x)+(y*y));
tta1= atan(y/x);
z1= z;

//Imprimiendo resultados
printf("Los resultados de sus coordenadas esfericas es\nr=%f\nThetta=%f\nphi=%f\n",r,tta,agul);
printf("Los resultados de sus coordenadas cilindricas es\nr=%f\nThetta=%f\nz=%f\n",r1,tta1,z1);

exit (0);
}






























