/* Revision del ejercicio del 19 de Febrero. 
Escrito el 24 de febrero*/

#include <stdio.h>
#include <math.h>

int main(){

	float x,y,z;  // coordenadas cartesianas de entrada
	float r,theta,phi; //coordenadas esfericas de salida
	float rc,theta_c,zc; //coordedas cilindricas de salida

	printf(" Introduce los valores de las variables x,y,z que quieres convertir\n");
	scanf("%f %f %f",&x,&y,&z);
	//scanf("%f",&x);
	//scanf("%f",&y);
	//scanf("%f",&z);

	// Realizo operaciones de transformacion de coordenadas
	//Coordenadas esfericas
	r = sqrt(x*x+y*y+z*z);
	theta = atan(y/x);
	phi = acos(z/sqrt(x*x+y*y+z*z));
        printf(" Las coordenadas esfericas son r= %f , theta= %f , phi = %f \n",r,theta,phi);

	//Coordenas cilindricas
	r = sqrt(x*x+y*y);
	printf(" Las coordenadas cilindricas son r= %f , theta= %f , z= %f \n",r,theta,z);
//	SALIDA:
	
//exit(0);

}
