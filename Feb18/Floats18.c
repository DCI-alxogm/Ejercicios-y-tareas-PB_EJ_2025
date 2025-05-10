//Programa con operaciones flotantes Leonardo Daniel Zavala Cuellar//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main (){

float a,b,c,d;
float e1,e2,e3,e4;
a=-3;
b=4.5;
c=5.9;
d=-7;
e1=(a+b)*c/d;
e2=((a+b)*c)/d;
e3=(a+b)*(c/d);
e4=a+(b*c)/d;


printf("e1=(a+b)*c/d=%f.2 \n",e1);
printf("e2=((a+b)*c)/d=%f.2 \n",e2);
printf("e3=(a+b)*(c/d)=%f.2 \n",e3);
printf("e4=a+(b*c)/d=%f.2 \n",e4);

exit(0);
}





















