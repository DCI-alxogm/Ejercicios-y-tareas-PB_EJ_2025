//Leonardo Daniel Zavala Cuellar Ejercisio 3 planteamiento 6 del examen

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main ()
{
char op;
char op1[2];
float base,altura,area,Tc,Tf,suma;
int numero,digito;
Regreso:
printf("WENAS TARDES\n");
printf("Seleccione una opcion \n");
printf("1.Calcular el area de un rectangulo\n");
printf("2.Convertir grados celsius a Fahrenheit\n");
printf("3.Verificar si un numero es multiplo de otro\n");
printf("4.Sumar digitos de un numero de dos cifras\n");
scanf("%s",&op);
switch(op){
case '1':
Nuez:
printf("Ingrese el altura y base del rectangulo\n");
printf("base\n");
scanf("%f",&base);
printf("altura\n");
scanf("%f",&altura);
area= base*altura;
printf("El area de su rectangulo es %f\n",area);
denuevo:
printf("¿Quieres realizar otra operacion?\n si/no\n");
scanf("%2s",op1);
if (strcmp(op1,"si")==0)
{
goto Nuez;
}else if (strcmp(op1,"no")==0)
{
    printf("Gracias nos vemos\n");
}else{
    printf("Solo acepto si o no intente denuevo\n");
    goto denuevo;
}
break;
case '2':
Nuez2:
printf("Introduzca su Temperatura (en Celcius) a pasar a Fahrenheit\n");
scanf("%f",&Tc);
Tf=(Tc * 1.8) + 32;
printf("Su Temperatura es %f C° y en Fahrenheit es %f F\n",Tc,Tf);
denuevo2:
printf("¿Quieres realizar otra operacion?\n si/no\n");
scanf("%2s",op1);
if (strcmp(op1,"si")==0)
{
goto Nuez2;
}else if (strcmp(op1,"no")==0)
{
    printf("Gracias nos vemos\n");
}else{
    printf("Solo acepto si o no intente denuevo\n");
    goto denuevo2;
}
break;
case '3':
Nuez3:
printf("Ingrese dos numeros\n");
printf("Numero 1\n");
scanf("%d",&numero);
printf("Numero 2\n");
scanf("%d",&digito);
if((numero % digito)==0){
printf("%d es multiplo de %d\n",numero,digito);
}else{
printf("%d no es multiplo de %d\n",numero,digito);
}
denuevo3:
printf("¿Quieres realizar otra operacion?\n si/no\n");
scanf("%2s",op1);
if (strcmp(op1,"si")==0)
{
goto Nuez3;
}else if (strcmp(op1,"no")==0)
{
    printf("Gracias nos vemos\n");
}else{
    printf("Solo acepto si o no intente denuevo\n");
    goto denuevo3;
}
break;
case '4':
Nuez4:
error:
printf("Ingrese un numero de dos cifras\n");
scanf("%d",&numero);
if (numero>=10 && numero<=99){
suma=(numero/10) + (numero%10);
printf("La suma de los numeros es %.2f\n",suma);
}else if (numero<10){
printf("El numero no es valido intente denuevo\n");
goto error;
}
denuevo4:
printf("¿Quieres realizar otra operacion?\n si/no\n");
scanf("%2s",op1);
if (strcmp(op1,"si")==0)
{
goto Nuez4;
}else if (strcmp(op1,"no")==0)
{
    printf("Gracias nos vemos\n");
}else{
    printf("Solo acepto si o no intente denuevo\n");
    goto denuevo4;
}
break;
default:
printf("la opcion no es valida intente denuevo\n");
goto Regreso;
break;
}
return 0;
}











