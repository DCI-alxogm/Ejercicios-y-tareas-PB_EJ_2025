//Leonardo Daniel Zavala Cuellar 3 de Marzo de 2025
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main ()
{
int numero,residuo;
int opc;
leernumero:
printf("Introduce un numero para saber si es par o impar\n");
scanf("%i",&numero);
residuo=numero%2;
if (residuo==0){
printf("El numero %d es par\n",numero);
}else{
printf("El numero %d es impar\n",numero);
}
printf("¿Quieres revisar otro numero?\n si=0/no=1\n");
scanf("%i",&opc);
if(opc==0){
goto leernumero;
}else{
printf("Hasta la proxima gracias\n");
}
exit (0);
}




















