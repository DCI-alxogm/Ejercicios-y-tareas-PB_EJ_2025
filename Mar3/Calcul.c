//Leonardo Daniel Zavala Cuellar Actividad Calculadora 3 de Marzo de 2025
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
int main ()
{
    //Se declaran las variables a utilizar
float Tc,Tk,x,y,z;
float tta,phi,r,r1,tta1,z1;
char opc1[2];
char opc[11];
REGRESO://donde regresara al seleccionar hacer otra prueba o al poner algo erroneo el la seleccion de Temperatura o Coordenadas
printf("WENAS TARDES\n");
//Pregunta al usuario que desea calcular
printf("Que desea Calcular Temperatura o Coordenadas \n");
//Solicita que se ingrese Temperatura o Coordenadas
scanf("%11s",opc);
//En caso de ingresar Temperatura lo compara
if (strcmp(opc,"Temperatura")==0)
{
    //Si es si hara lo siguiente
printf("Introduzca la temperatura que desea pasar a Kelvin\n");
scanf("%f",&Tc);
Tk=Tc + 273.15;
printf("La temperatura es %f°C\n y en Kelvin es %fK\n",Tc,Tk); 
denuevo://donde regresa en caso de no responder si o  no
//pregunta despues de terminar las operaciones si gusta hacer otra operacion
printf("¿Quieres realizar otra operacion?\n si/no\n");
scanf("%2s",opc1);
//en caso de si
if (strcmp(opc1,"si")==0)
{
goto REGRESO;
//en caso de no
}else if (strcmp(opc1,"no")==0)
{
    printf("Gracias nos vemos\n");
}else{
    //en caso de responder algo distinto
    printf("Solo acepto si o no intente denuevo\n");
    goto denuevo;
}
//en caso de Cilindricas
}else if (strcmp(opc,"Coordenadas")==0)
{
    REGRESOc://donde regresara en caso de no poner Esfericas o Cilindricas
    //Pregunta el tipo que desea calcular
    printf("Que tipo de Coordenadas desea calcular Cilindricas o Esfericas \n");
    scanf("%11s",opc);
    //En caso de Cilindricas
if (strcmp(opc,"Cilindricas")==0)    
    {
        printf("Introduzca el valor x:\n");
scanf("%f",&x);
printf("Introduzca el valor y:\n");
scanf("%f",&y);
printf("Introduzca el valor z:\n");
scanf("%f",&z);
r1=sqrt((x*x)+(y*y));
tta1= atan(y/x);
z1= z;
printf("Los resultados de sus coordenadas cilindricas es\nr=%f\nThetta=%f\nz=%f\n",r1,tta1,z1);
denuevo1:
printf("¿Quieres realizar otra operacion?\n si/no\n");
scanf("%2s",opc1);
if (strcmp(opc1,"si")==0)
{
goto REGRESO;
}else if (strcmp(opc1,"no")==0)
{
    printf("Gracias nos vemos\n");
}else{
    printf("Solo acepto si o no intente denuevo\n");
    goto denuevo1;
}
//En caso de Esfericas
}else if (strcmp(opc,"Esfericas")==0)
{
    printf("Introduzca el valor x:\n");
scanf("%f",&x);
printf("Introduzca el valor y:\n");
scanf("%f",&y);
printf("Introduzca el valor z:\n");
scanf("%f",&z);
r= sqrt((x*x)+(y*y)+(z*z));
tta= atan(y/x);
phi= acos(z/r);
printf("Los resultados de sus coordenadas esfericas es\nr=%f\nThetta=%f\nphi=%f\n",r,tta,phi);
denuevo2:
printf("¿Quieres realizar otra operacion?\n si/no\n");
scanf("%2s",opc1);
if (strcmp(opc1,"si")==0)
{
goto REGRESO;
}else if (strcmp(opc1,"no")==0)
{
    printf("Gracias nos vemos\n");
}else{
    printf("Solo acepto si o no intente denuevo\n");
    goto denuevo2;
}
// En caso de que no seleccione Esfericas o Cilindricas
} else{
        printf("Solo acepto Cilindricas o Esfericas intente denuevo\n");
    goto REGRESOc;
    }
    //en caso de que no seleccione Temperatura o Coordenadas
}else{
       printf("Solo calculo Temperatura y Coordenadas intente denuevo\n");
    goto REGRESO;
}

exit (0);

}






























