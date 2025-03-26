//Leonardo Daniel Zavala Cuellar Tarea 2
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
int main ()
{
    //Todas las variables utilizadas
float Tc,Kh,Lg,Kg,x,y,z;
float tta,phi,r,r1,tta1,z1,ft,Tf,Mh,Lb;
char op;
char opc1[2];
char opc[11];
Regreso:
//SOLIcita al usuario que diga que quiere calcular
printf("WENAS TARDES\n");
printf("Que desea Calcular Transformacion a unidades del sistema ingles o Coordenadas \n");
printf("Para sistema ingles escriba S\n");
printf("Para sistema Coordenadas C\n");
scanf("%s",&op);
switch(op){
    //PARA coordenadas
case 'C':
reg:
//Se solicitan el tipo de coordenadas que desea calcular
printf("Escriba el tipo de coordenadas que desea calcular Esfericas o Cilindricas\n");
scanf("%11s",opc);
//EN caso de cilindricas
if (strcmp(opc,"Cilindricas")==0)    
    {
Nuez:
//Operaciones
        printf("Introduzca el valor x:\n");
scanf("%f",&x);
printf("Introduzca el valor y:\n");
scanf("%f",&y);
printf("Introduzca el valor z:\n");
scanf("%f",&z);
r1=sqrt((x*x)+(y*y));
tta1= atan(y/x);
z1= z;
//IMPrime resultado
printf("Los resultados de sus coordenadas cilindricas es\nr=%f\nThetta=%f\nz=%f\n",r1,tta1,z1);
denuevo1:
//Pregunta si quiere intetar denuevo
printf("¿Quieres realizar otra operacion?\n si/no\n");
scanf("%2s",opc1);
//En caso de si 
if (strcmp(opc1,"si")==0)
{
goto Nuez;
//en caso de no
}else if (strcmp(opc1,"no")==0)
{
    printf("Gracias nos vemos\n");
    //Cualquier otra respuesta
}else{
    printf("Solo acepto si o no intente denuevo\n");
    goto denuevo1;
}
//En caso de Esfericas
}else if (strcmp(opc,"Esfericas")==0)
{
Nuez1:
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
goto Nuez1;
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
}
break;
//En caso de sistema ingles
case 'S':
er:
//Solicita que quire pasar a ese sitema
printf("Escriba la medida que desea obtener Longitud,Masa,Velocidad,Temperatura\n");
scanf("%11s",opc);
if (strcmp(opc,"Longitud")==0)    
 {
Va:
printf("Introduzca su longitud (en Metros) a pasar a Sistema ingles\n");
scanf("%f",&Lg);
ft=Lg * 3.281;
printf("Su longitud es %f m y en Sistema ingles es %f ft\n",Lg,ft);
fallo:
printf("¿Quieres realizar otra operacion?\n si/no\n");
scanf("%2s",opc1);
if (strcmp(opc1,"si")==0)
{
goto Va;
}else if (strcmp(opc1,"no")==0)
{
    printf("Gracias nos vemos\n");
}else{
    printf("Solo acepto si o no intente denuevo\n");
    goto fallo;
}
break;

}else if (strcmp(opc,"Masa")==0)
{
Va1:
printf("Introduzca su Masa (en Kilogramos) a pasar a Sistema ingles\n");
scanf("%f",&Kg);
Lb=Kg * 2.205;
printf("Su Masa es %f Kg y en Sistema ingles es %f Lb\n",Kg,Lb);
fallo1:
printf("¿Quieres realizar otra operacion?\n si/no\n");
scanf("%2s",opc1);
if (strcmp(opc1,"si")==0)
{
goto Va1;
}else if (strcmp(opc1,"no")==0)
{
    printf("Gracias nos vemos\n");
}else{
    printf("Solo acepto si o no intente denuevo\n");
    goto fallo1;
}
} else if (strcmp(opc,"Temperatura")==0)    
    {
Va2:
printf("Introduzca su Temperatura (en Celcius) a pasar a Sistema ingles\n");
scanf("%f",&Tc);
Tf=(Tc * 1.8) + 32;
printf("Su Temperatura es %f C° y en Sistema ingles es %f F\n",Tc,Tf);
fallo2:
printf("¿Quieres realizar otra operacion?\n si/no\n");
scanf("%2s",opc1);
if (strcmp(opc1,"si")==0)
{
goto Va2;
}else if (strcmp(opc1,"no")==0)
{
    printf("Gracias nos vemos\n");
}else{
    printf("Solo acepto si o no intente denuevo\n");
    goto fallo2;
}
}else if (strcmp(opc,"Velocidad")==0)    
    {
Va3:
printf("Introduzca su Velocidad (en Km/h) a pasar a Sistema ingles\n");
scanf("%f",&Kh);
Mh= Kh * 0.62137;
printf("Su Velocidad es %f Km/h y en Sistema ingles es %f M/h\n",Kh,Mh);
fallo3:
printf("¿Quieres realizar otra operacion?\n si/no\n");
scanf("%2s",opc1);
if (strcmp(opc1,"si")==0)
{
goto Va3;
}else if (strcmp(opc1,"no")==0)
{
    printf("Gracias nos vemos\n");

}else{
    printf("Solo acepto si o no intente denuevo\n");
    goto fallo3;
}
}else{ 
    //en caso de no seleccionar ninguna de las opciones
    printf("solo acepto Longitud,Masa,Temperaturam o Velocidad intente denuevo\n");
goto er;
}
break;
default:
//Default en caso de que no se seleccione nada de lo que se puede calcular
printf("Opcion no valida intente denuevo\n");
goto Regreso;
break;
}

exit (0);
}
