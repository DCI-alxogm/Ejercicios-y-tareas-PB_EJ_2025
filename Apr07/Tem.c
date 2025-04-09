#include <stdio.h>

int main() {
    float valor_inicial, valor_final, intervalo;

    // Pedir al usuario los valores
    printf("Ingrese el valor inicial en Celsius: ");
    scanf("%f", &valor_inicial);

    printf("Ingrese el valor final en Celsius: ");
    scanf("%f", &valor_final);

    printf("Ingrese el intervalo: ");
    scanf("%f", &intervalo);

    // Imprimir los valores 
    printf("\nCelsius\tKelvin\n");
    printf("------------------\n");

    
    for (float celsius = valor_inicial; celsius <= valor_final; celsius += intervalo) {
        float kelvin = celsius + 273.15;
        printf("%.2f\t%.2f\n", celsius, kelvin);
    }

    return 0;
}

