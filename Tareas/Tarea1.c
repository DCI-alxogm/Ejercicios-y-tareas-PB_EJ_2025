/*WENAS TARDINOCHES o dias... Esta es la Tarea 1 de programacion basica Leonardo Daniel Zavala Cuellar 
19/02/2025*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main (){
//Se declaran las variables que se van a utilizar en este caso enteros
float a,b,c,d;
//Se declaran las variables resultantes de las operaciones con las que se trabajaran los datos anteriores
float e1,e2,e3,e4;
//Se le solicitan datos numericos al usuario
printf("Introduzca el valor a:\n");
scanf("%f",&a);
printf("Introduzca el valor b:\n");
scanf("%f",&b);
printf("Introduzca el valor c:\n");
scanf("%f",&c);
printf("Introduzca el valor d:\n");
scanf("%f",&d);
//Se realizan las operaciones y los resultados se registran en las variables e1,2,3,4...
e1=((a+b)*c/d);
e2=(((a+b)*c)/d);
e3=((a+b)*(c/d));
e4= (a+(b*c)/d);
//Se muestran los resultados obtenidos en la pantalla
printf("e1=(a+b)*c/d= %f\n",e1);
printf("e2=((a+b)*c)/d= %f\n",e2);
printf("e3=(a+b)*(c/d)= %f\n",e3);
printf("e4=a+(b*c)/d= %f\n",e4);

exit (0);
}





































