/*
Leonardo Daniel Zavala Cuellar Ejemplo1 Marzo 26 2025
*/
#include <stdio.h>

int main()
{
printf("Wenas Tardes\n");
float TC,TK,final,delta;
TC=100,final=200;
int n=10,i;

delta=(final-TC)/n;
for(i=0;i<n;i++){
    
   TK=TC+ 273.15; 
    printf("%f %f\n",TC,TK);
    TC=TC+delta;
}


    return 0;
}
