//Leonardo Daniel Zavala Cuellar Ejercisio Abril 09 de 2025
#include <stdio.h>
#include <math.h>
int main (){
int i,N=20;
float TC[N],TK[N];
printf("Dame el valor de las %d temperaturas a convertir\n");
for (i=0;i<N,i++){

scanf("%f",&TC[i]);
TK[i]=0;
}
for (i=0;i<N;i++){

TK[i]=TC[i]+273.15;

printf("%f %f \n:",TC[N],TK[N]);

return 0;
}   
