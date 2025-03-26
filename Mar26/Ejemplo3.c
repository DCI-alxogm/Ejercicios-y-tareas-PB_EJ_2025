/*
Leonardo Daniel Zavala Cuellar Ejemplo3 Marzo 26 2025
*/
#include <stdio.h>
#include <math.h>
int main()
{
printf("Wenas Tardes\n");
float res;
int n=3,j,k;

for(j=0;j<n;j++){
    for(k=0;k<n;k++){
        res=j*k*1.0;
         printf("%d %d %.2f \n",j,k,res);
    }

}


    return 0;
}
