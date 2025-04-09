//Leonardo Daniel Zavala Cuellar Ejercisio 2 planteamiento 7 del examen

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
float a,b,c,x;
float X,X1,X3;
printf("WENAS TARDES\n");
printf("Este programa realizara las siguientes operaciones y imprimira los resultados\n");
printf(" X=5+3x(2²-4)\n");
X=5+3*((2*2)-4);
printf("El resultado de X es %f\n",X);
printf(" X=6+2x3/sqrt(16)+2\n");
X1=6+2*3/sqrt(16)+2;
printf("El resultado de X es %f\n",X1);
printf("Para el ultimo problema el usuario asignara valor numerico a (a,b y c)\n");
printf("Para a\n");
scanf("%f",&a);
printf("Para b\n");
scanf("%f",&b);
printf("Para c\n");
scanf("%f",&c);
printf("La operacion a resolver es x=sin(a+b²)+cos(c/2)*b/1+e⁻â+sqrt(b-c)\n"); 
x=sin(a+(b*b))+ cos(c/2)* b / 1 + pow(2.71,-a)+ sqrt(b-c);
printf("El resultado de x es %f\n",x);

return 0;
}














