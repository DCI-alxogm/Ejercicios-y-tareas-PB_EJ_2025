//Leonardo Daniel Zavala Cuellar 3 de Marzo de 2025
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main ()
{
int numero,residuo;
char opc[2];
leernumero:
printf("Introduce un numero para saber si es par o impar\n");
scanf("%i",&numero);
residuo=numero%2;
if (residuo==0){
printf("El numero %d es par\n",numero);
}else{
printf("El numero %d es impar\n",numero);
}
denuevo:
printf("¿Quieres revisar otro numero?\n si/no\n");
scanf("%s[2]",&opc);
if (strcmp(opc,"si")==0){
goto leernumero;
}else if (strcmp(opc,"no")==0){
printf("Hasta la proxima gracias\n");
}else{
printf("Solo acepto si o no intente denuevo\n");
goto denuevo;
}
exit (0);
}




















