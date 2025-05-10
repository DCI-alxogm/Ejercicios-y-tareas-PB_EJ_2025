/******************************************************************************
 * Leonardo Daniel Zavala Cuellar Abril 7 de 2025 BETA
 * Arreglo Temperatura
*******************************************************************************/
#include <stdio.h>

int main() {
    float tempInicial, tempFinal, aumento;
    int repeticiones;

    printf("Ingrese la temperatura inicial: ");
    scanf("%f", &tempInicial);
    printf("Ingrese la temperatura final: ");
    scanf("%f", &tempFinal);
    printf("Ingrese el numero de repeticiones: ");
    scanf("%d", &repeticiones);
    printf("Ingrese el aumento por repeticion: ");
    scanf("%f", &aumento);

    float temperaturas[repeticiones];
    int contador = 0;

    for(int i = 0; i < repeticiones; i++) {
        float temp = tempInicial + i * aumento;
        if(temp > tempFinal) {
            break;
        }
        temperaturas[contador] = temp;
        contador++;
    }

    for(int i = 0; i < contador; i++) {
        float kelvin = temperaturas[i] + 273.15;
        printf("Temperatura %d: %.2f °C = %.2f K\n", i + 1, temperaturas[i], kelvin);
    }

    return 0;
}
